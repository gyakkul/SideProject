// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:collection';

import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

import '../../../../models/engine_connection.dart';
import '../../../../models/property_modify_operations.dart';
import '../../../../models/settings/lightcard_tab_user_settings.dart';
import '../../../../models/settings/template_tab_user_settings.dart';
import '../../../../models/unreal_actor_manager.dart';
import '../../../../models/unreal_types.dart';
import '../../../../utilities/constants.dart';
import '../../../elements/delta_slider.dart';
import '../../../elements/dropdown_button.dart';
import '../../../elements/dropdown_text.dart';
import '../../../elements/layout/sidebar.dart';
import '../../../elements/toggle_buttons.dart';
import '../sidebar/outliner_panel.dart';
import 'base_color_tab.dart';

/// Which type of actor is being shown in the details tab.
enum _DetailsActorType {
  lightCard,
  colorCorrectWindow,
  colorCorrectRegion,
  multiple,
}

/// A tab that lets the user edit basic details of the selected actors.
class DetailsTab extends StatefulWidget {
  const DetailsTab({Key? key}) : super(key: key);

  static const String title = 'Details';
  static const String iconPath = 'assets/images/icons/details.png';

  @override
  State<DetailsTab> createState() => _DetailsTabState();
}

class _DetailsTabState extends State<DetailsTab> {
  late final UnrealActorManager _actorManager;
  late final LightcardTabUserSettings _userSettings;

  /// Map from actor path to whether the actor is a UV lightcard.
  Map<String, bool> _bAreActorsUV = {};

  /// Classes for which this tab can modify properties.
  Set<String> get validClasses {
    final Set<String> classes = {lightCardClassName, colorCorrectRegionClassName};
    classes.addAll(colorCorrectWindowClassNames);
    return classes;
  }

  @override
  void initState() {
    super.initState();

    _actorManager = Provider.of<UnrealActorManager>(context, listen: false);
    _actorManager.watchClassName(lightCardClassName, _onActorUpdate);

    _userSettings = Provider.of<LightcardTabUserSettings>(context, listen: false);
    _userSettings.addListener(_onUserSettingsChanged);

    _updateActorUVData();
  }

  @override
  void dispose() {
    _actorManager.stopWatchingClassName(lightCardClassName, _onActorUpdate);
    _userSettings.removeListener(_onUserSettingsChanged);

    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    final _DetailsActorType? actorType = _getActorType();

    return Row(children: [
      Expanded(
        child: Container(
          decoration: BoxDecoration(
            border: Border(
              right: BorderSide(color: Colors.black),
            ),
          ),
          child: SidebarDrawerPanel(
            title: _getTitle(),
            icon: 'assets/images/icons/details.png',
            child: _createInnerContents(actorType),
          ),
        ),
      ),
      OutlinerPanel(),
    ]);
  }

  /// Get the title to display at the top of the tab.
  String _getTitle() {
    String lightcardName = '';
    if (_userSettings.selectedActors.length == 1) {
      final UnrealObject? actor = _actorManager.getActorAtPath(_userSettings.selectedActors.first);

      if (actor != null) {
        lightcardName = '— ${actor.name}';
      }
    } else if (_userSettings.selectedActors.length > 1) {
      lightcardName = '— Multiple';
    }

    return 'Details $lightcardName';
  }

  /// Called when the user settings change.
  void _onUserSettingsChanged() {
    if (mounted) {
      _updateActorUVData();
      setState(() {});
    }
  }

  /// Called when an actor we're editing has an update from the actor manager.
  void _onActorUpdate(ActorUpdateDetails details) {
    if (mounted && (details.renamedActors.isNotEmpty || details.addedActors.isNotEmpty)) {
      // Force redraw in case we need to update the name/just got the name for an actor we were awaiting
      setState(() {});
    }
  }

  /// Determine the type of actors we're editing.
  _DetailsActorType? _getActorType() {
    _DetailsActorType? actorType;

    for (final String actorPath in _userSettings.selectedActors) {
      final UnrealObject? actor = _actorManager.getActorAtPath(actorPath);
      if (actor == null) {
        continue;
      }

      _DetailsActorType? newActorType;

      if (actor.isA(lightCardClassName)) {
        newActorType = _DetailsActorType.lightCard;
      }

      if (actor.isA(colorCorrectRegionClassName)) {
        newActorType = _DetailsActorType.colorCorrectRegion;
      }

      if (actor.isAny(colorCorrectWindowClassNames)) {
        newActorType = _DetailsActorType.colorCorrectWindow;
      }

      if (actorType != null && newActorType != null && newActorType != actorType) {
        return _DetailsActorType.multiple;
      }

      actorType = newActorType;
    }

    return actorType;
  }

  /// Create the inner contents of the tab (i.e. inside the panel UI).
  Widget _createInnerContents(_DetailsActorType? actorType) {
    if (actorType == null) {
      return _createInvalidMessageWidget(
          'Select one or more light cards, color correction windows, or color correct regions in the Outliner panel or '
          'Stage Map tab to view their properties here.');
    }

    if (actorType == _DetailsActorType.multiple) {
      return _createInvalidMessageWidget(
          'A mix of actor types are selected. Select only one type to see properties here.');
    }

    // Buttons to toggle between property display types
    Widget propertyDisplayTypeToggleButtons = EnumToggleButtons(
      value: _userSettings.detailsPropertyDisplayType,
      onSelected: (value) => _userSettings.detailsPropertyDisplayType = value as DetailsPropertyDisplayType,
      valueNames: {
        DetailsPropertyDisplayType.orientation: 'Orientation',
        DetailsPropertyDisplayType.appearance: 'Appearance',
      },
      buttonConstraints: BoxConstraints.tightFor(height: 36),
    );

    late final BaseColorTabMode mode;
    late final List<UnrealProperty> colorProperties;
    late final List<Widget> otherPropertyWidgets;

    switch (actorType) {
      case _DetailsActorType.lightCard:
        mode = BaseColorTabMode.color;
        colorProperties = _getPropertiesOnValidActors('Color');
        otherPropertyWidgets = _createLightCardPropertyWidgets();
        break;

      // We handle the OR case here because all CCWs are also CCRs, so they may be flagged as both
      case _DetailsActorType.colorCorrectWindow:
        mode = BaseColorTabMode.colorGrading;
        colorProperties = _getPropertiesOnValidActors('ColorGradingSettings');
        otherPropertyWidgets = _createColorCorrectWindowPropertyWidgets();
        break;

      case _DetailsActorType.colorCorrectRegion:
        mode = BaseColorTabMode.colorGrading;
        colorProperties = _getPropertiesOnValidActors('ColorGradingSettings');
        otherPropertyWidgets = _createColorCorrectRegionPropertyWidgets();

        // Can't control CCR orientation properties
        propertyDisplayTypeToggleButtons = const FakeToggleButton('Appearance');
        break;

      default:
        throw 'Invalid actor type for top widget in details panel';
    }

    return BaseColorTab(
      colorProperties: colorProperties,
      mode: mode,
      rightSideContents: Column(
        crossAxisAlignment: CrossAxisAlignment.center,
        children: [
          propertyDisplayTypeToggleButtons,
          SizedBox(height: 18),
          for (Widget propertyWidget in otherPropertyWidgets) propertyWidget,
        ],
      ),
    );
  }

  /// Create property widgets for a lightcard.
  List<Widget> _createLightCardPropertyWidgets() {
    switch (_userSettings.detailsPropertyDisplayType) {
      case DetailsPropertyDisplayType.orientation:
        return [
          UnrealDropdownButton(
            overrideName: 'Shape',
            unrealProperties: _getPropertiesOnValidActors('Mask'),
          ),
          for (final Widget slider in _createCommonStageActorOrientationPropertyWidgets()) slider,
        ];

      case DetailsPropertyDisplayType.appearance:
        return [
          UnrealDeltaSlider(
            unrealProperties: _getPropertiesOnValidActors('Temperature'),
          ),
          UnrealDeltaSlider(
            unrealProperties: _getPropertiesOnValidActors('Tint'),
          ),
          UnrealDeltaSlider(
            unrealProperties: _getPropertiesOnValidActors('Gain'),
            softMin: 0,
            softMax: 10,
          ),
          UnrealDeltaSlider(
            unrealProperties: _getPropertiesOnValidActors('Opacity'),
          ),
          UnrealDeltaSlider(
            unrealProperties: _getPropertiesOnValidActors('Feathering'),
          ),
          UnrealDeltaSlider(
            unrealProperties: _getPropertiesOnValidActors('Exposure'),
            softMin: -10,
            softMax: 10,
            steps: const [0.25, 0.5, 1.0],
          ),
        ];

      default:
        return [];
    }
  }

  /// Create property widgets for a CCR.
  List<Widget> _createColorCorrectRegionPropertyWidgets() {
    return [
      UnrealDeltaSlider(
        unrealProperties: _getPropertiesOnValidActors('Temperature'),
        buildLabel: (name) => Row(children: [
          Text('$name ('),
          Flexible(
            child: UnrealDropdownText(
              unrealProperties: _getPropertiesOnValidActors('TemperatureType'),
            ),
          ),
          Text(')'),
        ]),
      ),
      UnrealDeltaSlider(
        unrealProperties: _getPropertiesOnValidActors('Tint'),
      ),
      UnrealDeltaSlider(
        unrealProperties: _getPropertiesOnValidActors('Intensity'),
      ),
      UnrealDeltaSlider(
        unrealProperties: _getPropertiesOnValidActors('Inner'),
      ),
      UnrealDeltaSlider(
        unrealProperties: _getPropertiesOnValidActors('Outer'),
      ),
      UnrealDeltaSlider(
        unrealProperties: _getPropertiesOnValidActors('Falloff'),
      ),
    ];
  }

  /// Create property widgets for a CCW.
  List<Widget> _createColorCorrectWindowPropertyWidgets() {
    switch (_userSettings.detailsPropertyDisplayType) {
      case DetailsPropertyDisplayType.orientation:
        return [
          UnrealDropdownButton(
            overrideName: 'Shape',
            unrealProperties: _getPropertiesOnValidActors('WindowType'),
          ),
          for (final Widget slider in _createCommonStageActorOrientationPropertyWidgets()) slider,
          UnrealDeltaSlider(
            unrealProperties: _getPropertiesOnValidActors(
              'RadialOffset',
              modifierFunction: _modifyPositionalPropertyNameBasedOnClass,
            ),
          ),
        ];

      default:
        return _createColorCorrectRegionPropertyWidgets();
    }
  }

  /// Create property widgets for controlling the selected actors' orientations.
  List<Widget> _createCommonStageActorOrientationPropertyWidgets() {
    return _createScalePropertyWidgets() +
        _createPositionPropertyWidgets() +
        [
          UnrealDeltaSlider(
            key: Key('Spin'),
            unrealProperties: _getPropertiesOnValidActors(
              'Spin',
              modifierFunction: _modifyPositionalPropertyNameBasedOnClass,
            ),
            minMaxBehaviour: PropertyMinMaxBehaviour.loop,
          ),
        ];
  }

  /// Create sliders for controlling the position of the selected actors.
  List<Widget> _createPositionPropertyWidgets() {
    // Classes for actor that can be positioned
    final List<String> positionedActorClasses = [lightCardClassName];
    positionedActorClasses.addAll(colorCorrectWindowClassNames);

    // Determine which actors are UV/non-UV so we know which position sliders to show.
    final List<String> uvActorPaths = [];
    final List<String> nonUVActorPaths = [];

    for (final MapEntry<String, bool> actorUVData in _bAreActorsUV.entries) {
      final String actorPath = actorUVData.key;
      if (!(_actorManager.getActorAtPath(actorPath)?.isAny(positionedActorClasses) ?? false)) {
        // Actor is not a class with position properties, so leave it out entirely
        continue;
      }

      if (actorUVData.value) {
        uvActorPaths.add(actorUVData.key);
      } else {
        nonUVActorPaths.add(actorUVData.key);
      }
    }

    final List<Widget> positionSliders = [];
    if (nonUVActorPaths.isNotEmpty) {
      positionSliders.addAll([
        UnrealDeltaSlider(
          key: Key('Latitude'),
          unrealProperties: _getPropertiesOnActors(
            'Latitude',
            nonUVActorPaths,
            modifierFunction: _modifyPositionalPropertyNameBasedOnClass,
          ),
          minMaxBehaviour: PropertyMinMaxBehaviour.ignore,
        ),
        UnrealDeltaSlider(
          key: Key('Longitude'),
          unrealProperties: _getPropertiesOnActors(
            'Longitude',
            nonUVActorPaths,
            modifierFunction: _modifyPositionalPropertyNameBasedOnClass,
          ),
          minMaxBehaviour: PropertyMinMaxBehaviour.ignore,
        ),
      ]);
    } else if (uvActorPaths.isNotEmpty) {
      positionSliders.addAll([
        UnrealDeltaSlider(
          key: Key('UV X'),
          unrealProperties: _getPropertiesOnActors('UVCoordinates.X', uvActorPaths),
          overrideName: 'UV X',
          minMaxBehaviour: PropertyMinMaxBehaviour.clamp,
        ),
        UnrealDeltaSlider(
          key: Key('UV Y'),
          unrealProperties: _getPropertiesOnActors('UVCoordinates.Y', uvActorPaths),
          overrideName: 'UV Y',
          minMaxBehaviour: PropertyMinMaxBehaviour.clamp,
        ),
      ]);
    }

    return positionSliders;
  }

  /// Create sliders for controlling the scale of the selected actors.
  List<Widget> _createScalePropertyWidgets() {
    // Get actors that can be scaled
    final List<String> scalableActorClasses = [lightCardClassName];
    scalableActorClasses.addAll(colorCorrectWindowClassNames);

    final List<String> scalableActorPaths = _getValidActorPathsOfClasses(scalableActorClasses);

    final List<Widget> scaleSliders = [];
    if (scalableActorPaths.isNotEmpty) {
      scaleSliders.addAll([
        UnrealDeltaSlider(
          key: Key('Scale X'),
          unrealProperties: _getPropertiesOnActors(
            'Scale.X',
            scalableActorPaths,
            modifierFunction: _modifyPositionalPropertyNameBasedOnClass,
          ),
          overrideName: 'Scale X',
          hardMin: 0,
          softMax: 10,
        ),
        UnrealDeltaSlider(
          key: Key('Scale Y'),
          unrealProperties: _getPropertiesOnActors(
            'Scale.Y',
            scalableActorPaths,
            modifierFunction: _modifyPositionalPropertyNameBasedOnClass,
          ),
          overrideName: 'Scale Y',
          hardMin: 0,
          softMax: 10,
        ),
      ]);
    }

    return scaleSliders;
  }

  /// Create a widget with a message indicating that the details panel can't be shown.
  Widget _createInvalidMessageWidget(String text) {
    return Padding(
      padding: const EdgeInsets.symmetric(horizontal: 6, vertical: 6),
      child: Center(
        child: Text(
          text,
          textAlign: TextAlign.center,
        ),
      ),
    );
  }

  /// Update our cache of which actors are UV lightcards.
  void _updateActorUVData() async {
    final Set<String> oldPaths = _bAreActorsUV.keys.toSet();
    final List<UnrealHttpRequest> requests = [];
    final List<String> requestPaths = [];

    for (final String actorPath in _getValidActorPaths()) {
      if (oldPaths.remove(actorPath)) {
        // We already know about this actor
        continue;
      }

      final UnrealObject? actor = _actorManager.getActorAtPath(actorPath);
      if (actor == null) {
        continue;
      }

      if (actor.isA(lightCardClassName)) {
        // Request the actor's data
        requests.add(UnrealHttpRequest(
          url: '/remote/object/property',
          verb: 'PUT',
          body: {
            'objectPath': actorPath,
            'propertyName': 'bIsUVLightCard',
            'access': 'READ_ACCESS',
          },
        ));
        requestPaths.add(actorPath);
      } else {
        _bAreActorsUV[actorPath] = false;
      }
    }

    final EngineConnectionManager connectionManager = Provider.of<EngineConnectionManager>(context, listen: false);
    final UnrealHttpResponse batchResponse = await connectionManager.sendBatchedHttpRequest(requests);

    if (batchResponse.code != 200) {
      return;
    }

    assert(requests.length == requestPaths.length);

    // Update with data from the engine's response
    for (int requestIndex = 0; requestIndex < requests.length; ++requestIndex) {
      final UnrealHttpResponse? response = batchResponse.body[requestIndex];
      final bool? bIsActorUv = response?.body?['bIsUVLightCard'];

      if (bIsActorUv != null) {
        _bAreActorsUV[requestPaths[requestIndex]] = bIsActorUv;
      }
    }

    // Forget information for actors no longer in the list
    for (final String actorPath in oldPaths) {
      _bAreActorsUV.remove(actorPath);
    }

    if (mounted) {
      // Refresh the widget
      setState(() {});
    }
  }

  /// Given an [actorPath] and a [propertyName], return a modified positional property name accounting for the actor's
  /// type.
  String _modifyPositionalPropertyNameBasedOnClass(String actorPath, String propertyName) {
    final UnrealObject? actor = _actorManager.getActorAtPath(actorPath);

    if (actor != null && actor.isAny(colorCorrectWindowClassNames)) {
      // CCWs store their positional properties in a sub-structure.
      return 'PositionalParams.' + propertyName;
    }

    return propertyName;
  }

  /// Get a list of properties with the given [name] for all of the actors with paths in [actorPaths].
  /// If [modifierFunction] is provided, it will be called for each [actorPath] and the [propertyName] of the property,
  /// and its return value will be used in place of [name].
  List<UnrealProperty> _getPropertiesOnActors(
    String name,
    List<String> actorPaths, {
    String Function(String actorPath, String propertyName)? modifierFunction,
    String? typeNameOverride,
  }) {
    return actorPaths
        .map(
          (actorPath) => UnrealProperty(
            objectPath: actorPath,
            propertyName: (modifierFunction != null) ? modifierFunction(actorPath, name) : name,
            typeNameOverride: typeNameOverride,
          ),
        )
        .toList();
  }

  /// Get a list of properties with the given [name] for all selected actors that belong to a valid class.
  /// If [modifierFunction] is provided, it will be called for each [actorPath] and the [propertyName] of the property,
  /// and its return value will be used in place of [name].
  List<UnrealProperty> _getPropertiesOnValidActors(
    String name, {
    String Function(String actorPath, String propertyName)? modifierFunction,
    String? typeNameOverride,
  }) {
    return _getPropertiesOnActors(
      name,
      _getValidActorPaths(),
      modifierFunction: modifierFunction,
      typeNameOverride: typeNameOverride,
    );
  }

  /// Check if an actor is in the set of valid classes.
  bool _isActorOfValidClass(String actorPath) {
    final UnrealObject? actor = _actorManager.getActorAtPath(actorPath);
    if (actor == null) {
      return false;
    }

    final UnmodifiableSetView<String> actorClasses = actor.classNames;
    return validClasses.any((className) => actorClasses.contains(className));
  }

  /// Get a list of selected actor paths that we want to edit (i.e. have valid classes).
  List<String> _getValidActorPaths() {
    return _userSettings.selectedActors.where((actorPath) => _isActorOfValidClass(actorPath)).toList();
  }

  /// Return all valid selected actors actors that are a member of at least one class in [classNames].
  List<String> _getValidActorPathsOfClasses(List<String> classNames) => _getValidActorPaths()
      .where((path) => _actorManager.getActorAtPath(path)?.isAny(classNames) ?? false)
      .toList(growable: false);
}
