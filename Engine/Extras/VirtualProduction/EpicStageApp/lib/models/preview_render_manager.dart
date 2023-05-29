// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:async';
import 'dart:convert';
import 'dart:math' as math;
import 'dart:typed_data';

import 'package:epic_stage_app/models/unreal_types.dart';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import 'package:vector_math/vector_math_64.dart' as vec;

import '../utilities/constants.dart';
import '../utilities/unreal_utilities.dart';
import 'engine_connection.dart';
import 'settings/lightcard_tab_user_settings.dart';
import 'unreal_actor_manager.dart';

/// Maintains information about and provides event hooks for actors in the engine that the app cares about.
class PreviewRenderManager with WidgetsBindingObserver {
  /// Quality of the JPEG to request (in range 50-100).
  static const int _jpegQuality = 50;

  /// How long to wait after receiving a preview render before requesting a new one, as a factor of the response time
  /// for the last render.
  static const double _previewRequestDelayFactor = 0.5;

  /// The maximum number of seconds to wait before requesting a new preview render, regardless of how long the previous
  /// request took.
  static const double _maxPreviewRequestDelay = 1.0;

  /// The maximum time to wait for the engine to respond with a render before sending a new request, in case the
  /// previous request was lost.
  static const Duration _previewRequestTimeout = Duration(seconds: 3);

  /// Rate at which we send light card/camera config updates back to the engine.
  static const Duration _engineUpdateRate = Duration(milliseconds: 100);

  /// The current consumers for preview renders, if any.
  Set<PreviewRenderConsumer> _consumers = {};

  /// The last root actor path that we first sent to the engine, stored so we can check if we need to update it once the
  /// engine replies with a renderer ID.
  String? _initialRootPath;

  /// The last root actor path that the settings contained.
  String? _lastRootPath;

  /// The last projection mode that the settings contained.
  ProjectionMode _lastProjectionMode = ProjectionMode.azimuthal;

  /// The last camera angle that the settings contained.
  vec.Vector2 _lastCameraAngle = vec.Vector2.zero();

  /// The ID of our preview renderer.
  int? _previewRendererId;

  /// The last time we sent a request to render a new preview of the scene.
  DateTime _lastRenderRequestTime = DateTime.now();

  /// Timer used to regularly send changes back to the engine while connected.
  Timer? _engineUpdateTimer;

  /// Timer used to send a new preview request if the previous request has waited for too long.
  Timer? _previewRequestTimeoutTimer;

  /// Whether we've sent a request to create the preview renderer.
  bool _bHasCreatedRenderer = false;

  /// The size of preview to request from the engine. The engine may provide a lower resolution with the same aspect
  /// ratio.
  Size _desiredResolution = const Size(1, 1);

  /// The connection manager we'll use to communicate with the engine.
  final EngineConnectionManager _connectionManager;

  /// Actor manager used to watch for root actor changes.
  final UnrealActorManager _actorManager;

  /// The user's settings, which determine various camera settings.
  final LightcardTabUserSettings _userSettings;

  /// Modified renderer settings to send to the engine on the next tick. This doesn't have to include all settings; just
  /// the ones that we want to change.
  final Map<String, dynamic> _tickRendererSettingsChanges = {};

  /// The ID of the preview renderer, or null if it hasn't been created.
  int? get rendererId => _previewRendererId;

  /// Construct the manager and register it with the connection manager.
  PreviewRenderManager(BuildContext context)
      : _connectionManager = Provider.of<EngineConnectionManager>(context, listen: false),
        _userSettings = Provider.of<LightcardTabUserSettings>(context, listen: false),
        _actorManager = Provider.of<UnrealActorManager>(context, listen: false) {
    _connectionManager..registerConnectionStateListener(_onConnectionStateChanged);
    _onConnectionStateChanged(_connectionManager.connectionState);

    _startListeningToEngineConnection();

    _userSettings.addListener(_onUserSettingsChanged);
    _actorManager.watchClassName(nDisplayRootActorClassName, _onRootActorUpdate);

    WidgetsBinding.instance.addObserver(this);
  }

  /// Register a consumer with the manager, indicating that it should receive render updates.
  void addConsumer(PreviewRenderConsumer newConsumer) {
    _consumers.add(newConsumer);

    // Request a preview render if we weren't already waiting for one
    if (_previewRequestTimeoutTimer?.isActive != true) {
      _requestPreviewRender();
    }
  }

  /// Unregister a consumer with the manager.
  void removeConsumer(PreviewRenderConsumer consumer) {
    _consumers.remove(consumer);
  }

  /// Change the desired preview resolution.
  /// Returns whether the new resolution was valid. If not, the resolution won't be changed.
  bool setDesiredResolution(Size resolution) {
    if (resolution.width <= 0 || resolution.height <= 0) {
      return false;
    }

    if (_desiredResolution != resolution) {
      _desiredResolution = resolution;

      _tickRendererSettingsChanges['Resolution'] = {
        'X': _desiredResolution.width,
        'Y': _desiredResolution.height,
      };
    }

    return true;
  }

  @override
  void didChangeAppLifecycleState(AppLifecycleState state) {
    super.didChangeAppLifecycleState(state);

    switch (state) {
      case AppLifecycleState.resumed:
        _startListeningToEngineConnection();
        break;

      case AppLifecycleState.paused:
      case AppLifecycleState.detached:
        _stopListeningToEngineConnection();
        break;

      default:
        break;
    }
  }

  /// Call this before the manager will be destroyed.
  void dispose() {
    _stopListeningToEngineConnection();
    _userSettings.removeListener(_onUserSettingsChanged);

    _previewRequestTimeoutTimer?.cancel();
    _previewRequestTimeoutTimer = null;
    _engineUpdateTimer?.cancel();
    _engineUpdateTimer = null;
  }

  /// Start listening for messages from the engine connection manager.
  void _startListeningToEngineConnection() {
    _connectionManager
      ..registerMessageListener('PreviewRendererCreated', _onPreviewRendererCreated)
      ..registerMessageListener('PreviewRenderCompleted', _onPreviewRenderCompleted)
      ..registerConnectionStateListener(_onConnectionStateChanged);

    _onConnected();
  }

  /// Stop listening for messages from the engine connection manager.
  void _stopListeningToEngineConnection() {
    _connectionManager
      ..unregisterMessageListener('PreviewRendererCreated', _onPreviewRendererCreated)
      ..unregisterMessageListener('PreviewRenderCompleted', _onPreviewRenderCompleted)
      ..unregisterConnectionStateListener(_onConnectionStateChanged);

    if (_previewRendererId != null) {
      _connectionManager.sendMessage('ndisplay.preview.renderer.destroy', {'RendererId': _previewRendererId!});
    }
  }

  /// Called when the connection manager's connection state changes.
  void _onConnectionStateChanged(EngineConnectionState connectionState) {
    switch (connectionState) {
      case EngineConnectionState.connected:
        _onConnected();
        break;

      default:
        _onDisconnected();
        break;
    }
  }

  /// Called when we connect to the engine.
  void _onConnected() {
    _engineUpdateTimer ??= Timer.periodic(_engineUpdateRate, _onEngineUpdateTick);
    _initializePreviewRenderer();
  }

  /// Called when we disconnect from the engine.
  void _onDisconnected() {
    _previewRendererId = null;
    _bHasCreatedRenderer = false;
  }

  /// Send a request to initialize the preview renderer in the engine.
  bool _initializePreviewRenderer() {
    if (_userSettings.displayClusterRootPath == null || _userSettings.displayClusterRootPath!.isEmpty) {
      return false;
    }

    _connectionManager.sendMessage('ndisplay.preview.renderer.create', {
      'RootActorPath': _userSettings.displayClusterRootPath,
      'Settings': {
        'JpegQuality': _jpegQuality,
        'Resolution': {
          'X': _desiredResolution.width,
          'Y': _desiredResolution.height,
        },
        'Rotation': _getCameraRotationSettings(),
        'IncludeActorPositions': true,
        'ProjectionType': _getProjectionModeTypeName(_userSettings.projectionMode),
        'FOV': _getFOV(),
      },
    });

    _lastRootPath = _initialRootPath = _userSettings.displayClusterRootPath;
    _lastProjectionMode = _userSettings.projectionMode;
    _lastCameraAngle = _userSettings.cameraAngle;

    _bHasCreatedRenderer = true;
    return true;
  }

  /// Request a preview render from the engine (if there's anybody to consume it).
  void _requestPreviewRender() {
    if (_previewRendererId == null || _consumers.isEmpty) {
      return;
    }

    _lastRenderRequestTime = DateTime.now();
    _connectionManager.sendMessage('ndisplay.preview.render', {'RendererId': _previewRendererId!});

    _previewRequestTimeoutTimer?.cancel();
    _previewRequestTimeoutTimer = Timer(_previewRequestTimeout, _onPreviewRequestTimeout);
  }

  /// Called when we've waited too long for a response to a preview request.
  void _onPreviewRequestTimeout() {
    // Send a new request
    _requestPreviewRender();
  }

  /// Called when user settings change.
  void _onUserSettingsChanged() {
    _updateProjectionMode();
    _updateCameraAngle();
    _updateRootActorPath();

    if (!_bHasCreatedRenderer) {
      // May have been waiting for valid settings
      _initializePreviewRenderer();
    }
  }

  /// Called when the engine has successfully created a preview renderer.
  void _onPreviewRendererCreated(dynamic message) {
    final int? rendererId = message['RendererId'];
    if (rendererId == null) {
      return;
    }

    _previewRendererId = rendererId;

    if (_initialRootPath != _userSettings.displayClusterRootPath) {
      // Root path has changed since we requested the renderer. Update it.
      _updateRootActorPath();
    }

    // Request a render to kick off our render loop.
    _requestPreviewRender();
  }

  /// Called when the engine completes a preview render of the scene.
  void _onPreviewRenderCompleted(dynamic message) {
    _previewRequestTimeoutTimer?.cancel();
    _previewRequestTimeoutTimer = null;

    if (message['RendererId'] != _previewRendererId) {
      return;
    }

    final DateTime receivedTime = DateTime.now();

    if (_consumers.isNotEmpty) {
      final String? base64Data = message['ImageBase64'];
      final Uint8List imageData = base64Data != null ? base64Decode(base64Data) : Uint8List(0);

      final num sequenceNumber = message['SequenceNumber'] ?? -1;
      final bool bIsRealTimeDisabled = message['IsRealTimeDisabled'] == true;

      final dynamic resolutionData = message['Resolution'];
      Size resolution;
      if (resolutionData != null) {
        resolution = Size(
          jsonNumberToDouble(resolutionData['X'])!,
          jsonNumberToDouble(resolutionData['Y'])!,
        );
      } else {
        // No resolution was sent, so assume it's the same as our upcoming request. Note that this can cause pins to
        // jump when the containing widget is resized.
        resolution = _desiredResolution;
      }

      // Gather actor position data
      final List<PreviewActorData> actorPositions = [];
      final dynamic actorPositionsData = message['ActorPositions'];
      for (dynamic positionPair in actorPositionsData) {
        final String? actorPath = positionPair['Path'];
        if (actorPath == null) {
          continue;
        }

        final dynamic actorPositionData = positionPair['Position'];
        if (actorPositionData == null) {
          continue;
        }

        final double? xPosition = jsonNumberToDouble(actorPositionData['X']);
        final double? yPosition = jsonNumberToDouble(actorPositionData['Y']);
        if (xPosition == null || yPosition == null) {
          continue;
        }

        actorPositions.add(PreviewActorData(
          path: actorPath,
          position: Offset(xPosition, yPosition),
        ));
      }

      for (final PreviewRenderConsumer consumer in _consumers) {
        consumer.onPreviewRenderCompleted(
          sequenceNumber: sequenceNumber.toInt(),
          resolution: resolution,
          imageData: imageData,
          actorPositions: actorPositions,
          bIsRealTimeDisabled: bIsRealTimeDisabled,
        );
      }
    }

    // Wait for a bit before we request another preview so we don't eat up too much bandwidth
    final Duration timeSinceRequest = receivedTime.difference(_lastRenderRequestTime);
    final double delayMilliseconds = math.min(timeSinceRequest.inMilliseconds * _previewRequestDelayFactor,
        _maxPreviewRequestDelay * Duration.millisecondsPerSecond);

    Future.delayed(Duration(milliseconds: delayMilliseconds.toInt()), _requestPreviewRender);
  }

  /// Called each tick, when we're ready to send updates back to the engine.
  void _onEngineUpdateTick(Timer timer) {
    if (_connectionManager.connectionState != EngineConnectionState.connected) {
      return;
    }

    if (_tickRendererSettingsChanges.isNotEmpty) {
      // Send the latest renderer config changes
      _connectionManager.sendMessage('ndisplay.preview.renderer.configure', {
        'RendererId': _previewRendererId,
        'Settings': _tickRendererSettingsChanges,
      });

      _tickRendererSettingsChanges.clear();
    }
  }

  /// Get the name to send to the engine to request a projection mode
  String _getProjectionModeTypeName(ProjectionMode mode) {
    switch (mode) {
      case ProjectionMode.azimuthal:
        return 'Azimuthal';

      case ProjectionMode.orthographic:
        return 'Orthographic';

      case ProjectionMode.perspective:
        return 'Perspective';

      case ProjectionMode.uv:
        return 'UV';
    }
  }

  /// Update the preview renderer camera's angle.
  void _updateCameraAngle() {
    if (_lastCameraAngle == _userSettings.cameraAngle) {
      return;
    }

    _tickRendererSettingsChanges['Rotation'] = _getCameraRotationSettings();

    _lastCameraAngle = _userSettings.cameraAngle;
  }

  /// Update the projection mode and affected settings.
  void _updateProjectionMode() {
    if (_lastProjectionMode == _userSettings.projectionMode) {
      return;
    }

    _tickRendererSettingsChanges['ProjectionType'] = _getProjectionModeTypeName(_userSettings.projectionMode);
    _tickRendererSettingsChanges['FOV'] = _getFOV();
    _updateCameraAngle();

    _lastProjectionMode = _userSettings.projectionMode;
  }

  /// Called when the root actors in the engine have changed.
  void _onRootActorUpdate(ActorUpdateDetails details) {
    if (details.addedActors.isEmpty || _userSettings.displayClusterRootPath == null) {
      return;
    }

    final UnrealObject? currentRoot = _actorManager.getActorAtPath(_userSettings.displayClusterRootPath!);
    if (currentRoot == null) {
      return;
    }

    if (!details.addedActors.contains(currentRoot)) {
      return;
    }

    // If the root actor has been re-added to the scene, our render will be cancelled, so we need to request a new one.
    _requestPreviewRender();
  }

  /// Send an update to the engine with the new path of the root actor to use for preview renders.
  void _updateRootActorPath() {
    if (_lastRootPath == _userSettings.displayClusterRootPath) {
      return;
    }

    _lastRootPath = _userSettings.displayClusterRootPath;

    if (_previewRendererId != null) {
      _connectionManager.sendMessage('ndisplay.preview.renderer.setroot', {
        'RendererId': _previewRendererId!,
        'RootActorPath': _userSettings.displayClusterRootPath,
      });

      // Request a new render with the new root, since changing roots may mean we never receive the last render
      _requestPreviewRender();
    }
  }

  /// Get the field of view based on the current projection mode.
  double _getFOV() {
    switch (_userSettings.projectionMode) {
      case ProjectionMode.uv:
        return 45.0;

      case ProjectionMode.azimuthal:
        return 130.0;

      case ProjectionMode.orthographic:
      case ProjectionMode.perspective:
        return 90.0;
    }
  }

  /// Get the JSON data representing the camera's rotation settings based on the projection mode and user settings.
  dynamic _getCameraRotationSettings() {
    final bool bIsUvMode = _userSettings.projectionMode == ProjectionMode.uv;
    return {
      'Yaw': bIsUvMode ? 0 : _userSettings.cameraAngle.x,
      'Pitch': bIsUvMode ? 0 : _userSettings.cameraAngle.y,
      'Roll': 0,
    };
  }
}

/// Data about an actor's position as seen in a preview render.
class PreviewActorData {
  const PreviewActorData({required this.path, required this.position});

  /// The path of the actor object.
  final String path;

  /// The actor's position within the preview render, normalized to the resolution of the preview.
  final Offset position;
}

/// Mixin for classes that want to receive renders from [PreviewRenderManager].
abstract class PreviewRenderConsumer {
  /// Called when a preview render from the engine completes.
  /// [sequenceNumber] is the last sequence number the engine received before producing the render.
  /// [resolution] is the resolution of the preview image.
  /// [imageData] is the data for the preview image.
  /// [actorPositions] is a list of position data for all actors visible in the preview.
  /// [bIsRealTimeDisabled] is whether real-time rendering was disabled in the engine when the preview was rendered.
  void onPreviewRenderCompleted({
    required int sequenceNumber,
    required Size resolution,
    required Uint8List imageData,
    required List<PreviewActorData> actorPositions,
    required bool bIsRealTimeDisabled,
  });
}
