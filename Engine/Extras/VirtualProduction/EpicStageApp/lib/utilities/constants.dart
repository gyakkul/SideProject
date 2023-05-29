// Copyright Epic Games, Inc. All Rights Reserved.

const double dividerSize = 1.0;

/// The Unreal class for nDisplay root actors.
const String nDisplayRootActorClassName = '/Script/DisplayCluster.DisplayClusterRootActor';

/// The Unreal class name used for light cards.
const String lightCardClassName = '/Script/DisplayCluster.DisplayClusterLightCardActor';

/// The Unreal class names used for color correct windows.
/// The preferred class name must be FIRST in this list.
const List<String> colorCorrectWindowClassNames = [
  '/Script/ColorCorrectRegions.ColorCorrectionWindow',
  '/Script/ColorCorrectRegions.ColorCorrectWindow',
];

/// The Unreal class name used for color correct regions.
const String colorCorrectRegionClassName = '/Script/ColorCorrectRegions.ColorCorrectRegion';

/// List of names for scene actor classes that should be controllable from the app.
List<String> get controllableClassNames {
  if (_controllableClassNames == null) {
    _controllableClassNames = [lightCardClassName, colorCorrectRegionClassName];
    _controllableClassNames!.addAll(colorCorrectWindowClassNames);
  }

  return _controllableClassNames!;
}

List<String>? _controllableClassNames = null;
