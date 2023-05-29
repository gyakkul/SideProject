// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:async';

import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

import '../utilities/constants.dart';
import '../utilities/unreal_utilities.dart';
import 'color.dart';
import 'engine_connection.dart';
import 'preview_render_manager.dart';
import 'settings/lightcard_tab_user_settings.dart';
import 'unreal_actor_manager.dart';
import 'unreal_types.dart';

/// How long to wait before forgetting about an actor creation request (meaning even if the actor is created, we won't
/// select it in the app).
const Duration _creationRequestTimeout = Duration(seconds: 1);

/// Settings that apply when creating any type of actor.
class ActorCreationSettings {
  const ActorCreationSettings({
    this.name,
    this.template,
    this.mapPosition,
    this.callback,
    this.extraParams,
  });

  /// The name to give the actor.
  final String? name;

  /// The template from which to create the actor.
  final UnrealTemplateData? template;

  /// The normalized position within the preview map at which to place the actor.
  final Offset? mapPosition;

  /// A function to call once the engine reports that the actor has been created.
  final void Function()? callback;

  /// Any extra JSON parameters to pass with the creation request.
  final Map<String, dynamic>? extraParams;

  /// Actor settings left at their default values.
  static const ActorCreationSettings defaults = ActorCreationSettings();

  /// Make a copy of the settings, replacing certain parameters.
  ActorCreationSettings copyWith({
    String? name,
    UnrealTemplateData? template,
    Offset? mapPosition,
    void Function()? callback,
    Map<String, dynamic>? extraParams,
  }) {
    return ActorCreationSettings(
      name: name ?? this.name,
      template: template ?? this.template,
      mapPosition: mapPosition ?? this.mapPosition,
      callback: callback ?? this.callback,
      extraParams: extraParams ?? this.extraParams,
    );
  }
}

/// A utility that manages creating actors and handling creation responses from the engine.
/// This is separate from UnrealActorManager because it also depends on user settings, previews, etc.
class UnrealActorCreator {
  UnrealActorCreator(BuildContext context)
      : _connectionManager = Provider.of<EngineConnectionManager>(context, listen: false),
        _previewRenderManager = Provider.of<PreviewRenderManager>(context, listen: false),
        _actorManager = Provider.of<UnrealActorManager>(context, listen: false),
        _userSettings = Provider.of<LightcardTabUserSettings>(context, listen: false) {
    _connectionManager..registerMessageListener('RequestedActorsCreated', _onRequestedActorsCreated);
  }

  final EngineConnectionManager _connectionManager;
  final UnrealActorManager _actorManager;
  final PreviewRenderManager _previewRenderManager;
  final LightcardTabUserSettings _userSettings;

  /// The ID to send with actor creation requests to the engine.
  int _lastRequestId = 0;

  /// Map from IDs of actor creation requests pending a response from the engine to data about the request.
  Map<int, _PendingCreationRequest> _pendingRequests = {};

  /// Call this to clean up any subscriptions.
  void dispose() {
    _connectionManager.unregisterMessageListener('RequestedActorsCreated', _onRequestedActorsCreated);
  }

  /// Send a message to the engine requesting that a new lightcard be created.
  void createLightcard([ActorCreationSettings settings = ActorCreationSettings.defaults]) {
    createActor(className: lightCardClassName, settings: settings);

    _userSettings.addRecentlyPlacedActor(RecentlyPlacedActorData(
      name: settings.template?.name ?? 'Light Card',
      type: RecentlyPlacedActorType.lightCard,
      templatePath: settings.template?.path,
    ));
  }

  /// Send a message to the engine requesting that a new flag be created.
  void createFlag([ActorCreationSettings settings = ActorCreationSettings.defaults]) {
    // First, try get the default flag template
    _connectionManager
        .sendHttpRequest(UnrealHttpRequest(
      url: '/remote/object/property',
      verb: 'PUT',
      body: {
        'objectPath': '/Script/DisplayClusterLightCardEditor.Default__DisplayClusterLightCardEditorProjectSettings',
        'propertyName': 'DefaultFlagTemplate',
        'access': 'READ_ACCESS',
      },
    ))
        .then((UnrealHttpResponse response) {
      // If the template isn't available, explicitly send None so we don't get the default LC template instead.
      String templatePath = 'None';

      if (response.code == HttpResponseCode.ok) {
        final String? defaultTemplate = response.body?['DefaultFlagTemplate'];
        if (defaultTemplate != null && defaultTemplate.isNotEmpty) {
          templatePath = defaultTemplate;
        }
      }

      final Map<String, dynamic> extraParams = {
        'OverrideColor': true,
        'Color': FloatColor(0, 0, 0).toJson(),
      };

      if (settings.extraParams != null) {
        extraParams.addAll(settings.extraParams!);
      }

      createActor(
        className: lightCardClassName,
        settings: settings.copyWith(
          name: 'Flag',
          template: UnrealTemplateData(name: '', path: templatePath),
          extraParams: extraParams,
        ),
      );

      _userSettings.addRecentlyPlacedActor(RecentlyPlacedActorData(
        name: 'Flag',
        type: RecentlyPlacedActorType.flag,
      ));
    });
  }

  /// Send a message to the engine requesting that a new CCW be created.
  void createColorCorrectionWindow([ActorCreationSettings settings = ActorCreationSettings.defaults]) {
    createActor(
      className: colorCorrectWindowClassNames.first,
      settings: settings.copyWith(
        mapPosition: settings.mapPosition ?? Offset(0.5, 0.5),
      ),
    );

    _userSettings.addRecentlyPlacedActor(RecentlyPlacedActorData(
      name: 'Color Correction Window',
      type: RecentlyPlacedActorType.colorCorrectWindow,
    ));
  }

  /// Send a message to the engine requesting that a new actor be created.
  void createActor({
    required String className,
    ActorCreationSettings settings = ActorCreationSettings.defaults,
  }) {
    final messageBody = {
      'RendererId': _previewRenderManager.rendererId,
      if (settings.name != null) 'ActorName': settings.name,
      if (settings.template != null) 'TemplatePath': settings.template?.path,
      'ActorClass': className,
      'RequestId': _startActorCreationRequest(callback: settings.callback),
      'OverridePosition': settings.mapPosition != null,
      if (settings.mapPosition != null) 'Position': offsetToJson(settings.mapPosition!),
    };

    if (settings.extraParams != null) {
      messageBody.addAll(settings.extraParams!);
    }

    _connectionManager.sendMessage('ndisplay.preview.actor.create', messageBody);
  }

  /// Send a message to the engine requesting that the currently selected actors be duplicated.
  void duplicateSelectedActors({void Function()? callback}) {
    final List<String> actorPathsToDuplicate = _userSettings.selectedActors
        .where((String actorPath) => _actorManager.getActorAtPath(actorPath)?.bIsValid == true)
        .toList(growable: false);

    _connectionManager.sendMessage('stageapp.actors.duplicate', {
      'Actors': actorPathsToDuplicate,
      'RequestId': _startActorCreationRequest(callback: callback),
    });
  }

  /// Create an ID for an actor creation request and start a timer for it.
  int _startActorCreationRequest({void Function()? callback}) {
    final int requestId = _lastRequestId;
    ++_lastRequestId;

    _pendingRequests[requestId] = _PendingCreationRequest(callback: callback);
    return requestId;
  }

  /// Called when the engine sends a message that actors we requested were created.
  void _onRequestedActorsCreated(dynamic message) {
    final dynamic requestId = message['RequestId'];
    final _PendingCreationRequest? pendingRequest = _pendingRequests.remove(requestId);
    if (pendingRequest == null) {
      return;
    }

    if (pendingRequest.bSelectOnComplete) {
      final List<dynamic>? actorPaths = message['ActorPaths'];
      if (actorPaths != null) {
        // We got a list of actors, so drop the current selection and select those ones
        _userSettings.deselectAllActors();

        for (dynamic actorPath in actorPaths) {
          if (actorPath is! String) {
            continue;
          }
          _userSettings.selectActor(actorPath);
        }
      }
    }

    pendingRequest.callback?.call();
    pendingRequest.dispose();
  }
}

/// Data about a request to create actors pending a response from the engine.
class _PendingCreationRequest {
  _PendingCreationRequest({this.callback}) {
    _autoSelectTimeoutTimer = Timer(_creationRequestTimeout, _onAutoSelectTimedOut);
  }

  /// Callback function for when the request completes.
  final void Function()? callback;

  /// Timer that fires when the request took too long to automatically select the new actors.
  late final Timer _autoSelectTimeoutTimer;

  /// Whether to automatically select the new actors when the request completes.
  bool bSelectOnComplete = true;

  /// Clean up any remaining data.
  void dispose() {
    _autoSelectTimeoutTimer.cancel();
  }

  /// Called when a creation request has waited too long for a response to select the actors automatically.
  void _onAutoSelectTimedOut() {
    bSelectOnComplete = false;
  }
}
