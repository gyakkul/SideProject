// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:collection';

import 'package:flutter/material.dart';

import '../utilities/constants.dart';
import 'unreal_actor_manager.dart';

/// Data about an object that exists in an Unreal Engine instance.
class UnrealObject extends ChangeNotifier {
  UnrealObject({required String path, required String name})
      : _name = name,
        _path = path;

  /// The full path of the object in the editor.
  final String _path;

  /// Classes to which the engine has reported this class belongs.
  final Set<String> _classNames = {};

  /// The object's display name.
  String _name;

  /// Whether this object has been destroyed in the engine.
  bool _bIsDestroyed = false;

  /// Whether this object is no longer being watched, so may be out of date.
  bool _bIsStale = false;

  /// The full path of the object in the editor.
  String get path => _path;

  /// The object's display name.
  String get name => _name;

  set name(String value) {
    if (value != _name) {
      _name = value;
      notifyListeners();
    }
  }

  /// Whether this object has been destroyed in the engine.
  bool get bIsDestroyed => _bIsDestroyed;

  /// Whether this object is no longer being watched, so may be out of date.
  bool get bIsStale => _bIsStale;

  /// Whether this object still exists in the engine and is actively being watched.
  /// In either case, this object will never be valid again, and you should get a new reference from the
  /// [UnrealActorManager] once the actor is watched/created again.
  bool get bIsValid => !bIsDestroyed && !bIsStale;

  /// Classes to which the engine has reported this class belongs.
  UnmodifiableSetView<String> get classNames => UnmodifiableSetView(_classNames);

  /// Return true if the the engine has reported the actor as a member of a [className].
  /// Note that this does not handle inheritance; it will only check exact matches in list of classes for which
  /// [UnrealActorManager] is actively listening.
  bool isA(String className) {
    return _classNames.contains(className);
  }

  /// Return true if the the engine has reported the actor as a member of any of the given [classNames].
  /// Note that this does not handle inheritance; it will only check exact matches in list of classes for which
  /// [UnrealActorManager] is actively listening.
  bool isAny(List<String> classNames) {
    return classNames.any((className) => _classNames.contains(className));
  }

  /// Indicate that this actor has been destroyed.
  void onDestroyed() {
    if (!_bIsDestroyed) {
      _bIsDestroyed = true;
      notifyListeners();
    }
  }

  /// Indicate that this actor is no longer being watched.
  void onUnwatched() {
    if (!_bIsStale) {
      _bIsStale = true;
      notifyListeners();
    }
  }

  /// Add a class name that the actor belongs to.
  void addClassName(String className) {
    _classNames.add(className);
    notifyListeners();
  }

  /// Get the path of the icon associated with this actor's type.
  String getIconPath() {
    return getIconPathForUnrealClasses(_classNames);
  }
}

/// Data about a property on an object that exists in an Unreal Engine instance.
class UnrealProperty {
  const UnrealProperty({
    required this.objectPath,
    required this.propertyName,
    this.typeNameOverride,
    String? friendlyObjectName,
  }) : _friendlyObjectName = friendlyObjectName;

  /// The full path of object in the editor.
  final String objectPath;

  /// The property's name.
  final String propertyName;

  /// An optional override for the property's type, which lets the app handle the property differently than
  /// the default for its actual type in the engine (e.g. interpret a Vector4 as a color instead).
  final String? typeNameOverride;

  /// The optional user-friendly name of the object the property belongs to.
  final String? _friendlyObjectName;

  /// Get the name of the object to display to the user.
  String get objectName {
    if (_friendlyObjectName != null) {
      return _friendlyObjectName!;
    }

    final int dotIndex = objectPath.lastIndexOf('.');
    if (dotIndex == -1) {
      return objectPath;
    }

    return objectPath.substring(dotIndex + 1);
  }

  @override
  bool operator ==(Object other) {
    if (identical(this, other)) {
      return true;
    }

    if (other.runtimeType != runtimeType) {
      return false;
    }

    return other is UnrealProperty &&
        other.objectPath == objectPath &&
        other.propertyName == propertyName &&
        other.typeNameOverride == typeNameOverride &&
        other._friendlyObjectName == _friendlyObjectName;
  }
}

/// Data about an actor template available in the engine.
class UnrealTemplateData {
  const UnrealTemplateData({required this.name, required this.path});

  /// The user-friendly name of the template.
  final String name;

  /// The path of the template asset.
  final String path;
}

/// Get the icon to represent an actor belonging to all of the given [classNames].
String getIconPathForUnrealClasses(Set<String> classNames) {
  for (final String className in colorCorrectWindowClassNames) {
    if (classNames.contains(className)) {
      return 'assets/images/icons/color_correct_window.png';
    }
  }

  if (classNames.contains(colorCorrectRegionClassName)) {
    return 'assets/images/icons/color_correct_region.png';
  }

  if (classNames.contains(lightCardClassName)) {
    return 'assets/images/icons/light_card.png';
  }

  return 'assets/images/icons/actor_temp.png';
}
