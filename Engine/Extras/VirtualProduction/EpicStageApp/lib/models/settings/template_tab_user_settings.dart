// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:collection';

import 'package:flutter/material.dart';

import '../../widgets/elements/color_grading_wheel.dart';

/// Ways the user can sort the list of actors in a template tab.
enum TemplateTabActorSortMode {
  name,
  recent,
}

/// Which type of actor properties to display in the details panel.
enum DetailsPropertyDisplayType {
  appearance,
  orientation,
}

/// Which side of the screen the map preview is on.
enum PreviewMapSide {
  left,
  right,
}

/// Types of limits the user can edit for a color range.
enum RangeLimitType {
  min,
  max,
}

/// User-friendly names for each of the entries in TemplateTabActorSortMode
final Map<TemplateTabActorSortMode, String> templateTabActorSortModeNames = {
  TemplateTabActorSortMode.name: 'Sort by Name',
  TemplateTabActorSortMode.recent: 'Sort by Recent',
};

/// Stores a user's settings for a template tab.
class TemplateTabUserSettings extends ChangeNotifier {
  /// Paths of actors that the user has selected to multi-edit.
  final Set<String> _selectedActors = {};

  /// Paths of actors that the user has marked as favorites.
  final Set<String> _favoriteActors = {};

  /// The last time the actor with the given path was selected.
  final Map<String, DateTime> _lastSelectedTimeForActor = {};

  /// The metric by which to sort the actors.
  TemplateTabActorSortMode _actorSortMode = TemplateTabActorSortMode.name;

  /// Whether the list of actors should be filtered to favorites only.
  bool _bShouldFilterToFavorites = false;

  /// Whether to sort actors in descending order.
  bool _bShouldSortActorsDescending = true;

  /// If true, the map is in transform mode and the user can pinch/pan to adjust lightcard scale/rotation/location.
  /// If false, the map is in map mode, and the user can pinch/pan to move the map or long-press pins to drag them
  /// around.
  bool _bIsInTransformMode = false;

  /// If true, the user can select multiple light cards at once. Otherwise, only the most recently selected light card
  /// will be selected.
  bool _bIsInMultiSelectMode = false;

  /// Which side of the screen the preview map is on.
  PreviewMapSide _previewMapSide = PreviewMapSide.left;

  /// Whether the preview map is docked off-screen.
  bool _bIsPreviewMapDocked = false;

  /// The vertical position at which the map preview should sit (as a fraction of its container height).
  double _previewMapY = 1.0;

  /// Whether the outliner panel is open.
  bool _bIsOutlinerPanelOpen = false;

  /// The last used settings for a color wheel.
  ColorWheelUserSettings _colorWheelUserSettings = const ColorWheelUserSettings();

  /// The last color grading range selected for color grading control.
  ColorGradingRange _colorGradingRange = ColorGradingRange.global;

  /// The last color grading subproperty selected for color grading control.
  ColorGradingSubproperty _colorGradingSubproperty = ColorGradingSubproperty.gain;

  /// Which type of actor properties to display in the details panel.
  DetailsPropertyDisplayType _detailsPropertyDisplayType = DetailsPropertyDisplayType.appearance;

  /// Which type of highlights range slider to show when color grading.
  RangeLimitType _colorGradingHighlightsRangeLimitType = RangeLimitType.min;

  /// Paths of actors that the user has selected to multi-edit.
  UnmodifiableSetView<String> get selectedActors => UnmodifiableSetView<String>(_selectedActors);

  /// Paths of actors that the user has selected as favorites.
  UnmodifiableSetView<String> get favoriteActors => UnmodifiableSetView<String>(_favoriteActors);

  /// The metric by which to sort the actors.
  TemplateTabActorSortMode get actorSortMode => _actorSortMode;

  set actorSortMode(TemplateTabActorSortMode newValue) {
    if (newValue != _actorSortMode) {
      _actorSortMode = newValue;
      notifyListeners();
    }
  }

  /// Whether the list of actors should be filtered to favorites only.
  bool get bShouldFilterToFavorites => _bShouldFilterToFavorites;

  set bShouldFilterToFavorites(bool bNewValue) {
    if (bNewValue != _bShouldFilterToFavorites) {
      _bShouldFilterToFavorites = bNewValue;
      notifyListeners();
    }
  }

  /// Whether to sort actors in descending order.
  bool get bShouldSortActorsDescending => _bShouldSortActorsDescending;

  set bShouldSortActorsDescending(bool bNewValue) {
    if (bNewValue != _bShouldSortActorsDescending) {
      _bShouldSortActorsDescending = bNewValue;
      notifyListeners();
    }
  }

  /// If true, the map is in transform mode and the user can pinch/pan to adjust lightcard scale/rotation/location.
  /// If false, the map is in map mode, and the user can pinch/pan to move the map or long-press pins to drag them
  /// around.
  bool get bIsInTransformMode => _bIsInTransformMode;

  set bIsInTransformMode(bool bNewValue) {
    if (bNewValue != _bIsInTransformMode) {
      _bIsInTransformMode = bNewValue;
      notifyListeners();
    }
  }

  /// If true, the user can select multiple light cards at once. Otherwise, only the most recently selected light card
  /// will be selected.
  bool get bIsInMultiSelectMode => _bIsInMultiSelectMode;

  set bIsInMultiSelectMode(bool bNewValue) {
    if (bNewValue != _bIsInMultiSelectMode) {
      _bIsInMultiSelectMode = bNewValue;

      if (!_bIsInMultiSelectMode && _selectedActors.isNotEmpty) {
        // Reduce to one actor. Set is ordered, so this should give us the last selected actor.
        final String pathToSelect = _selectedActors.last;
        _selectedActors.clear();
        _selectedActors.add(pathToSelect);
      }

      notifyListeners();
    }
  }

  /// Which side of the screen the preview map is on.
  PreviewMapSide get previewMapSide => _previewMapSide;

  set previewMapSide(PreviewMapSide newValue) {
    if (newValue != _previewMapSide) {
      _previewMapSide = newValue;
      notifyListeners();
    }
  }

  /// Whether the preview map is docked off-screen.
  bool get bIsPreviewMapDocked => _bIsPreviewMapDocked;

  set bIsPreviewMapDocked(bool bNewValue) {
    if (bNewValue != _bIsPreviewMapDocked) {
      _bIsPreviewMapDocked = bNewValue;
      notifyListeners();
    }
  }

  /// The vertical position at which the map preview should sit (as a fraction of its container height).
  double get previewMapY => _previewMapY;

  set previewMapY(double newValue) {
    if (newValue != _previewMapY) {
      _previewMapY = newValue;
      notifyListeners();
    }
  }

  /// Whether the outliner panel is open.
  bool get bIsOutlinerPanelOpen => _bIsOutlinerPanelOpen;

  set bIsOutlinerPanelOpen(bool bNewValue) {
    if (bNewValue != _bIsOutlinerPanelOpen) {
      _bIsOutlinerPanelOpen = bNewValue;
      notifyListeners();
    }
  }

  /// The last used settings for a color wheel.
  ColorWheelUserSettings get colorWheelUserSettings => _colorWheelUserSettings;

  /// The last used settings for a color wheel.
  set colorWheelUserSettings(ColorWheelUserSettings newValue) {
    if (newValue != _colorWheelUserSettings) {
      _colorWheelUserSettings = newValue;
      notifyListeners();
    }
  }

  /// The last color range selected for color grading control.
  ColorGradingRange get colorGradingRange => _colorGradingRange;

  set colorGradingRange(ColorGradingRange newValue) {
    if (newValue != _colorGradingRange) {
      _colorGradingRange = newValue;
      notifyListeners();
    }
  }

  /// The last color grading subproperty selected for color grading control.
  ColorGradingSubproperty get colorGradingSubproperty => _colorGradingSubproperty;

  set colorGradingSubproperty(ColorGradingSubproperty newValue) {
    if (newValue != _colorGradingSubproperty) {
      _colorGradingSubproperty = newValue;
      notifyListeners();
    }
  }

  /// Which type of actor properties to display in the details panel.
  DetailsPropertyDisplayType get detailsPropertyDisplayType => _detailsPropertyDisplayType;

  set detailsPropertyDisplayType(DetailsPropertyDisplayType newValue) {
    if (newValue != _detailsPropertyDisplayType) {
      _detailsPropertyDisplayType = newValue;
      notifyListeners();
    }
  }

  /// Which type of highlights range slider to show when color grading.
  RangeLimitType get colorGradingHighlightsRangeLimitType => _colorGradingHighlightsRangeLimitType;

  set colorGradingHighlightsRangeLimitType(RangeLimitType newValue) {
    if (newValue != _colorGradingHighlightsRangeLimitType) {
      _colorGradingHighlightsRangeLimitType = newValue;
      notifyListeners();
    }
  }

  /// Select or deselect an actor for multi-edit.
  void selectActor(String path, {bool bShouldSelect = true}) {
    if (bShouldSelect) {
      if (!bIsInMultiSelectMode) {
        _selectedActors.clear();
      }

      if (_selectedActors.add(path)) {
        notifyListeners();
      }
    } else if (_selectedActors.remove(path)) {
      // The actor was deselected, so remember that it was selected until just now
      _lastSelectedTimeForActor[path] = DateTime.now();
      notifyListeners();
    }
  }

  /// Deselect all actors that are currently selected.
  void deselectAllActors() {
    _selectedActors.clear();
    notifyListeners();
  }

  /// Select or deselect an actor for multi-edit.
  void markActorFavorite(String path, {bool bShouldFavorite = true}) {
    if (bShouldFavorite) {
      if (_favoriteActors.add(path)) {
        notifyListeners();
      }
    } else if (_favoriteActors.remove(path)) {
      notifyListeners();
    }
  }

  /// Returns whether the actor with the given path is selected for multi-edit.
  bool isActorSelected(String path) {
    return _selectedActors.contains(path);
  }

  /// Returns whether the actor with the given path is in the user's favorites.
  bool isActorFavorite(String path) {
    return _favoriteActors.contains(path);
  }

  /// Get the last time an actor was still selected.
  /// If the actor was selected but no longer is, return the time at which it became deselected.
  /// If the actor is currently selected, return the current time.
  /// If the actor was never selected, return null.
  DateTime? getActorLastSelectedTime(String path) {
    if (isActorSelected(path)) {
      return DateTime.now();
    }

    return _lastSelectedTimeForActor[path];
  }
}
