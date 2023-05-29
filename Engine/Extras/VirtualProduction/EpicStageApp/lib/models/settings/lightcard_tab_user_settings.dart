// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:collection';

import 'package:vector_math/vector_math_64.dart' as vec;

import './template_tab_user_settings.dart';
import '../unreal_types.dart';

enum ProjectionMode {
  azimuthal,
  orthographic,
  perspective,
  uv,
}

enum RecentlyPlacedActorType {
  lightCard,
  flag,
  colorCorrectWindow,
}

/// Data about an actor the user recently placed.
class RecentlyPlacedActorData {
  const RecentlyPlacedActorData({required this.name, required this.type, this.templatePath});

  /// The name to show for the actor.
  final String name;

  /// The type of actor to create.
  final RecentlyPlacedActorType type;

  /// The path to the template used to create the actor.
  final String? templatePath;

  @override
  bool operator ==(Object other) {
    if (identical(this, other)) {
      return true;
    }

    if (other.runtimeType != runtimeType) {
      return false;
    }

    return other is RecentlyPlacedActorData && other.type == type && other.templatePath == templatePath;
  }
}

/// Stores a user's settings for the lightcard template tab.
class LightcardTabUserSettings extends TemplateTabUserSettings {
  /// The path of the selected nDisplay cluster.
  String? _displayClusterRootPath = "";

  /// The camera's current rotation setting in degrees, where X is yaw and Y is pitch.
  vec.Vector2 _cameraAngle = vec.Vector2(0, 90.0);

  /// The camera's current projection mode for lightcards.
  ProjectionMode _projectionMode = ProjectionMode.azimuthal;

  /// The transformation matrix of the lightcard map.
  vec.Matrix4 _lightcardMapTransform = vec.Matrix4.identity();

  /// The property selected as the color grading target.
  UnrealProperty? _colorGradingTarget;

  /// Data about the actors the user most recently placed, with most recent sorted first.
  List<RecentlyPlacedActorData> _recentlyPlacedActors = [];

  /// The path of the selected nDisplay cluster.
  String? get displayClusterRootPath => _displayClusterRootPath;

  set displayClusterRootPath(String? newValue) {
    if (newValue != _displayClusterRootPath) {
      _displayClusterRootPath = newValue;
      notifyListeners();
    }
  }

  /// The camera's current rotation setting in degrees, where X is yaw and Y is pitch.
  /// Note that this returns a copy of the vector. To change the value, use the setter.
  vec.Vector2 get cameraAngle => vec.Vector2.copy(_cameraAngle);

  set cameraAngle(vec.Vector2 newValue) {
    if (newValue != _cameraAngle) {
      _cameraAngle = newValue;
      notifyListeners();
    }
  }

  /// The camera's current projection mode for lightcards.
  ProjectionMode get projectionMode => _projectionMode;

  set projectionMode(ProjectionMode newValue) {
    if (newValue != _projectionMode) {
      _projectionMode = newValue;
      notifyListeners();
    }
  }

  /// The transformation matrix of the lightcard map.
  vec.Matrix4 get stageMapTransform => _lightcardMapTransform;

  set stageMapTransform(vec.Matrix4 newValue) {
    if (newValue != _lightcardMapTransform) {
      _lightcardMapTransform = newValue;
      notifyListeners();
    }
  }

  /// The property selected as the color grading target.
  UnrealProperty? get colorGradingTarget => _colorGradingTarget;

  set colorGradingTarget(UnrealProperty? newValue) {
    if (newValue != _colorGradingTarget) {
      _colorGradingTarget = newValue;
      notifyListeners();
    }
  }

  /// Data about the actors the user most recently placed, with most recent sorted first.
  UnmodifiableListView<RecentlyPlacedActorData> get recentlyPlacedActors => UnmodifiableListView(_recentlyPlacedActors);

  /// Add a recently placed actor (or move it to the top of the list if it's already in the list).
  void addRecentlyPlacedActor(RecentlyPlacedActorData actorData) {
    const int historyLength = 5;

    _recentlyPlacedActors.remove(actorData);
    _recentlyPlacedActors.insert(0, actorData);

    while (_recentlyPlacedActors.length > historyLength) {
      _recentlyPlacedActors.removeLast();
    }

    notifyListeners();
  }
}
