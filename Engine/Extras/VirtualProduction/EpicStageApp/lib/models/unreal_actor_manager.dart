// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:async';

import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

import '../utilities/unreal_utilities.dart';
import 'engine_connection.dart';
import 'unreal_types.dart';

/// Callback for when the list of actors of Unreal type [className] changes.
typedef ActorUpdateCallback = Function(ActorUpdateDetails details);

/// Details object for callbacks that use [ActorUpdateCallback].
class ActorUpdateDetails {
  const ActorUpdateDetails({
    required this.className,
    required this.addedActors,
    required this.renamedActors,
    required this.deletedActors,
  });

  /// The name of class for which we received an update.
  final String className;

  /// Actors of this class that were added.
  final List<UnrealObject> addedActors;

  /// Actors of this class that were renamed.
  final List<UnrealObject> renamedActors;

  /// Actors of this class that were deleted.
  final List<UnrealObject> deletedActors;
}

/// Maintains information about and provides event hooks for actors in the engine that the app cares about.
class UnrealActorManager with WidgetsBindingObserver {
  /// Construct an actor manager and register it with the connection manager.
  UnrealActorManager(BuildContext context)
      : _connectionManager = Provider.of<EngineConnectionManager>(context, listen: false) {
    _connectionManager
      ..registerConnectionStateListener(_onConnectionStateChanged)
      ..registerMessageListener('ActorsChanged', _onActorsChanged);
    _onConnectionStateChanged(_connectionManager.connectionState);

    WidgetsBinding.instance.addObserver(this);
  }

  /// The connection manager we'll use to communicate with the engine.
  final EngineConnectionManager _connectionManager;

  /// Map from watched class names to the callback functions to be called when they change.
  final Map<String, Set<ActorUpdateCallback>> _classWatchCallbacks = {};

  /// Map from an actor's path in the editor to the data we've stored about it locally.
  final Map<String, UnrealObject> _actorsByPath = {};

  /// Map from watched class name to the list of actors that have been seen with that class name.
  final Map<String, Set<UnrealObject>> _actorsByClass = {};

  /// Map from watched class name to completers to complete when we receive the initial list of actor of that class
  /// from the engine.
  final Map<String, Completer<Set<UnrealObject>>> _firstUpdateCompleters = {};

  /// Start watching for any engine-side changes to actors of the Unreal type [className], and call [callback] when
  /// there's any change in the list of relevant actors.
  void watchClassName(String className, ActorUpdateCallback callback) {
    if (_classWatchCallbacks.containsKey(className)) {
      // We're already watching this class, so just add the callback
      _classWatchCallbacks[className]!.add(callback);
      return;
    }

    _classWatchCallbacks[className] = {callback};

    if (!_firstUpdateCompleters.containsKey(className)) {
      _firstUpdateCompleters[className] = Completer<Set<UnrealObject>>();
    }

    _connectionManager.sendRawMessage(_createActorRegisterMessage(className, true));
  }

  /// Stop watching for engine-side changes to actors of the Unreal type [className] with the given [callback].
  void stopWatchingClassName(String className, ActorUpdateCallback callback) {
    final Set<ActorUpdateCallback>? callbacks = _classWatchCallbacks[className];
    if (callbacks == null) {
      return;
    }

    callbacks.remove(callback);

    if (callbacks.isNotEmpty) {
      return;
    }

    // No more watchers of this class
    _classWatchCallbacks.remove(className);
    _connectionManager.sendRawMessage(_createActorRegisterMessage(className, false));

    // Forget about actors of this class
    final Set<UnrealObject> actorsToForget = getActorsOfClass(className);
    _actorsByClass.remove(className);

    if (actorsToForget.isEmpty) {
      return;
    }

    // Filter out any actors we're about to forget that are also part of another watched class
    for (final Set<UnrealObject> relevantActors in _actorsByClass.values) {
      actorsToForget.removeWhere((UnrealObject actor) => relevantActors.contains(actor));
    }

    for (final UnrealObject actor in actorsToForget) {
      actor.onUnwatched();
      _actorsByPath.remove(actor.path);
    }
  }

  /// Get the watched [UnrealObject] corresponding to a path name.
  UnrealObject? getActorAtPath(String path) {
    return _actorsByPath[path];
  }

  /// Get the set of watched [UnrealObject]s corresponding to a [className].
  Set<UnrealObject> getActorsOfClass(String className) {
    return _actorsByClass[className]?.toSet() ?? {};
  }

  /// Get the set of watched [UnrealObject]s corresponding to a [className], but wait until the initial list of actors
  /// has been received from the engine if it hasn't already.
  Future<Set<UnrealObject>> getInitialActorsOfClass(String className) {
    final Completer<Set<UnrealObject>>? completer = _firstUpdateCompleters[className];

    if (completer == null) {
      return Future.value(getActorsOfClass(className));
    }

    return completer.future;
  }

  @override
  void didChangeAppLifecycleState(AppLifecycleState state) {
    super.didChangeAppLifecycleState(state);

    switch (state) {
      case AppLifecycleState.resumed:
        _subscribeToEngineActors(true);
        break;

      case AppLifecycleState.paused:
      case AppLifecycleState.detached:
        _subscribeToEngineActors(false);
        break;

      default:
        break;
    }
  }

  /// Subscribe to the WebSocket route that gives us updates about actors
  void _subscribeToEngineActors(bool bShouldRegister) {
    final List<dynamic> messages = [];

    // Re-register for any actor classes that we're still watching
    for (String className in _classWatchCallbacks.keys) {
      messages.add(_createActorRegisterMessage(className, true));
    }

    _connectionManager.sendBatchedMessage(messages);
  }

  /// Called when the connection manager's connection state changes.
  void _onConnectionStateChanged(EngineConnectionState connectionState) {
    switch (connectionState) {
      case EngineConnectionState.connected:
        _subscribeToEngineActors(true);
        break;

      default:
        break;
    }
  }

  /// Called when the actors in the engine have changed.
  void _onActorsChanged(dynamic message) {
    var changes = message['Changes'];
    if (changes == null) {
      return;
    }

    changes.forEach((String className, dynamic classChanges) {
      if (_classWatchCallbacks.keys.contains(className)) {
        _updateActorsFromEngine(className, classChanges);
      }

      final Completer<Set<UnrealObject>>? completer = _firstUpdateCompleters[className];
      if (completer != null) {
        completer.complete(getActorsOfClass(className));
        _firstUpdateCompleters.remove(className);
      }
    });
  }

  /// Create a message to register/unregister a [className] for updates from the engine.
  /// If [bShouldRegister] is false, unregister for the class name.
  dynamic _createActorRegisterMessage(String className, bool bShouldRegister) {
    return createUnrealWebSocketMessage(
      bShouldRegister ? 'actors.register' : 'actors.unregister',
      {'ClassName': className},
    );
  }

  /// Update our actor data about actors of class [className] based on change events from the engine.
  void _updateActorsFromEngine(String className, dynamic classChanges) {
    // Remove any actors that no longer exist. Do this first in case the actor was also re-added this frame
    final List? deletedActorPaths = classChanges['DeletedActors'];
    final List<UnrealObject> deletedActors = [];

    if (deletedActorPaths != null) {
      for (var actorData in deletedActorPaths) {
        final String? path = actorData['Path'];
        if (path == null) {
          continue;
        }

        final UnrealObject? actor = _actorsByPath[path];
        if (actor == null) {
          continue;
        }

        deletedActors.add(actor);
        actor.onDestroyed();
        _actorsByPath.remove(path);

        for (final Set<UnrealObject> classActors in _actorsByClass.values) {
          classActors.remove(actor);
        }
      }
    }

    // Add any new actors
    final List? addedActorPaths = classChanges['AddedActors'];
    final List<UnrealObject> addedActors = [];

    if (addedActorPaths != null) {
      for (var actorData in addedActorPaths) {
        final String? path = actorData['Path'];
        final String? name = actorData['Name'];

        if (path == null || name == null) {
          continue;
        }

        // Create a new entry if this is a new actor
        UnrealObject? actor = _actorsByPath[path];
        if (actor == null) {
          actor = UnrealObject(name: name, path: path);
          _actorsByPath[path] = actor;
        }

        // Add this actor to the class list. An actor may have multiple watched classes, so we want to do this
        // regardless of whether the actor is actually new.
        Set<UnrealObject>? classActors = _actorsByClass[className];
        if (classActors == null) {
          classActors = {};
          _actorsByClass[className] = classActors;
        }

        actor.addClassName(className);

        classActors.add(actor);
        addedActors.add(actor);
      }
    }

    // Rename existing actors
    final List renamedActorPaths = classChanges['RenamedActors'] ?? [];
    final List<UnrealObject> renamedActors = [];

    for (var actorData in renamedActorPaths) {
      final String? path = actorData['Path'];
      final String? name = actorData['Name'];

      if (path == null || name == null) {
        continue;
      }

      final UnrealObject? actor = _actorsByPath[path];
      if (actor == null) {
        continue;
      }

      actor.name = name;
      renamedActors.add(actor);
    }

    // Call callbacks for watchers of this class
    final Set<ActorUpdateCallback>? callbacks = _classWatchCallbacks[className];
    if (callbacks != null) {
      for (final ActorUpdateCallback callback in callbacks) {
        callback(ActorUpdateDetails(
          className: className,
          addedActors: addedActors,
          renamedActors: renamedActors,
          deletedActors: deletedActors,
        ));
      }
    }
  }
}
