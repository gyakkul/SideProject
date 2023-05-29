// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:async';

import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

import '../../../../models/engine_connection.dart';
import '../../../../models/settings/lightcard_tab_user_settings.dart';
import '../../../../models/unreal_types.dart';
import '../../../../utilities/unreal_utilities.dart';
import '../../../elements/delta_slider.dart';
import '../../../elements/dropdown_text.dart';
import '../../../elements/layout/sidebar.dart';
import '../../../elements/toggle_buttons.dart';
import 'base_color_tab.dart';

class ColorGradingTab extends StatefulWidget {
  const ColorGradingTab({Key? key}) : super(key: key);

  static const String title = 'Color Grading';
  static const String iconPath = 'assets/images/icons/color_grading.png';

  @override
  State<StatefulWidget> createState() => _ColorGradingTabState();
}

class _ColorGradingTabState extends State<ColorGradingTab> {
  static const Duration _refreshRate = Duration(seconds: 3);

  late final EngineConnectionManager _connectionManager;

  final List<_ColorGradingTargetListEntryData> _targets = [];
  Timer? _refreshTimer;
  bool _bIsRefreshing = false;

  @override
  void initState() {
    super.initState();

    _connectionManager = Provider.of<EngineConnectionManager>(context, listen: false);

    _refreshTimer = Timer.periodic(_refreshRate, (timer) => _refreshTargetList());
    _refreshTargetList();
  }

  @override
  void dispose() {
    _refreshTimer?.cancel();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    final userSettings = Provider.of<LightcardTabUserSettings>(context);

    return Row(children: [
      Expanded(
        child: Container(
          decoration: BoxDecoration(
              border: Border(
            right: BorderSide(color: Colors.black),
          )),
          child: SidebarDrawerPanel(
            title: _getTitle(),
            icon: 'assets/images/icons/details.png',
            child: _ColorGradingMainControls(targetProperty: userSettings.colorGradingTarget),
          ),
        ),
      ),
      SizedBox(
        width: 320,
        child: SidebarDrawerPanel(
          title: 'Outliner',
          icon: 'assets/images/icons/outliner.png',
          child: _ColorGradingTargetList(
            targets: _targets,
            onTargetChanged: (newTarget) => userSettings.colorGradingTarget = newTarget,
            currentTarget: userSettings.colorGradingTarget,
          ),
        ),
      ),
    ]);
  }

  /// Get the title to display at the top of the tab.
  String _getTitle() {
    // Try to get the name of the current target
    final userSettings = Provider.of<LightcardTabUserSettings>(context, listen: false);
    String? targetName;

    for (final _ColorGradingTargetListEntryData targetData in _targets) {
      if (targetData.property == userSettings.colorGradingTarget) {
        targetName = targetData.name;
        break;
      }
    }

    return targetName == null ? 'Color Grading' : 'Color Grading — $targetName';
  }

  /// Refresh the list of possible color grading targets.
  Future<void> _refreshTargetList() async {
    if (_bIsRefreshing) {
      return;
    }

    _bIsRefreshing = true;
    _targets.clear();

    final userSettings = Provider.of<LightcardTabUserSettings>(context, listen: false);
    if (userSettings.displayClusterRootPath == null) {
      return;
    }
    final String rootActorPath = userSettings.displayClusterRootPath!;

    // Find the path of the current nDisplay cluster's config data, as well as all of its components in case any of
    // them are cameras.
    final List<UnrealHttpRequest> requests = [
      UnrealHttpRequest(url: '/remote/object/property', verb: 'PUT', body: {
        'objectPath': rootActorPath,
        'propertyName': 'CurrentConfigData',
        'access': 'READ_ACCESS',
      }),
      UnrealHttpRequest(url: '/remote/object/property', verb: 'PUT', body: {
        'objectPath': rootActorPath,
        'propertyName': 'BlueprintCreatedComponents',
        'access': 'READ_ACCESS',
      }),
    ];

    final UnrealHttpResponse batchResponse = await _connectionManager.sendBatchedHttpRequest(requests);
    if (batchResponse.code != 200) {
      return;
    }

    await _addTargetsForConfigResponse(batchResponse.body[0]);
    await _addTargetsForComponentsResponse(batchResponse.body[1]);

    // If the current target isn't valid anymore, deselect it
    if (!_targets.any((targetData) => targetData.property == userSettings.colorGradingTarget)) {
      userSettings.colorGradingTarget = null;
    }

    _bIsRefreshing = false;

    if (mounted) {
      setState(() {});
    }
  }

  /// Given a response from querying an nDisplay root actor's configuration data, add all of its color grading targets
  /// to the target list.
  Future<void> _addTargetsForConfigResponse(UnrealHttpResponse? response) async {
    if (response?.code != 200) {
      return;
    }

    final String? configPath = response!.body?['CurrentConfigData'];
    if (configPath == null) {
      return;
    }

    // Add the config's entire cluster color grading
    _targets.add(
      _ColorGradingTargetListEntryData(
        name: 'Entire Cluster',
        property: UnrealProperty(
          objectPath: configPath,
          propertyName: 'StageSettings.EntireClusterColorGrading.ColorGradingSettings',
        ),
      ),
    );

    // Get the config's per-viewport color grading settings
    final perViewportRequest = UnrealHttpRequest(url: '/remote/object/property', verb: 'PUT', body: {
      'objectPath': configPath,
      'propertyName': 'StageSettings.PerViewportColorGrading',
      'access': 'READ_ACCESS',
    });

    final UnrealHttpResponse perViewportResponse = await _connectionManager.sendHttpRequest(perViewportRequest);
    if (perViewportResponse.code != 200) {
      return;
    }

    final List<dynamic>? perViewportEntries = perViewportResponse.body['PerViewportColorGrading'];
    if (perViewportEntries == null) {
      return;
    }

    for (int entryIndex = 0; entryIndex < perViewportEntries.length; ++entryIndex) {
      final dynamic entry = perViewportEntries[entryIndex];
      final String? entryName = entry['Name'];
      if (entryName == null) {
        continue;
      }

      _targets.add(_ColorGradingTargetListEntryData(
        name: 'Viewport: $entryName',
        property: UnrealProperty(
          objectPath: configPath,
          propertyName: 'StageSettings.PerViewportColorGrading[$entryIndex].ColorGradingSettings',
        ),
      ));
    }
  }

  /// Given a response from querying an nDisplay root actor's components list, find any ICVFX cameras and add their
  /// color grading targets to the target list.
  Future<void> _addTargetsForComponentsResponse(UnrealHttpResponse? response) async {
    if (response?.code != 200) {
      return;
    }

    final List<dynamic>? componentPaths = response!.body?['BlueprintCreatedComponents'];
    if (componentPaths == null) {
      return;
    }

    // Try to get the per-node color grading settings from each component as if it's an ICVFX camera. If it succeeds,
    // we can treat it as one and add all its targets to the list.
    final List<UnrealHttpRequest> describeRequests = [];
    for (final dynamic componentPath in componentPaths) {
      if (componentPath is! String) {
        continue;
      }

      describeRequests.add(UnrealHttpRequest(url: '/remote/object/describe', verb: 'PUT', body: {
        'objectPath': componentPath,
        'access': 'READ_ACCESS',
      }));
    }

    final UnrealHttpResponse batchDescribeResponse = await _connectionManager.sendBatchedHttpRequest(describeRequests);
    if (batchDescribeResponse.code != 200) {
      return;
    }

    // Find which of the described responses are actually cameras
    final List<String> cameraPaths = [];
    for (int componentIndex = 0; componentIndex < componentPaths.length; ++componentIndex) {
      final UnrealHttpResponse? describeResponse = batchDescribeResponse.body[componentIndex];
      if (describeResponse == null || describeResponse.code != 200) {
        continue;
      }

      if (describeResponse.body?['Class'] == '/Script/DisplayCluster.DisplayClusterICVFXCameraComponent') {
        cameraPaths.add(componentPaths[componentIndex]);
      }
    }

    // Now that we know which are cameras, query them all for their color grading targets and add them to the list
    final List<UnrealHttpRequest> propertyRequests = [];
    for (final String cameraPath in cameraPaths) {
      propertyRequests.add(UnrealHttpRequest(url: '/remote/object/property', verb: 'PUT', body: {
        'objectPath': cameraPath,
        'propertyName': 'CameraSettings.PerNodeColorGrading',
        'access': 'READ_ACCESS',
      }));
    }

    final UnrealHttpResponse batchPropertyResponse = await _connectionManager.sendBatchedHttpRequest(propertyRequests);
    if (batchPropertyResponse.code != 200) {
      return;
    }

    for (int cameraIndex = 0; cameraIndex < cameraPaths.length; ++cameraIndex) {
      final UnrealHttpResponse? propertyResponse = batchPropertyResponse.body[cameraIndex];
      _addTargetsForICVFXCameraResponse(cameraPaths[cameraIndex], propertyResponse);
    }
  }

  /// Given a response from querying an ICVFX camera's list of per-node color grading settings, add all of its color
  /// grading targets to the target list.
  void _addTargetsForICVFXCameraResponse(String cameraPath, UnrealHttpResponse? response) {
    if (response?.code != 200) {
      return;
    }

    final int lastDotIndex = cameraPath.lastIndexOf('.');
    final String cameraName = cameraPath.substring(lastDotIndex + 1);

    // All nodes color grading is always available
    _targets.add(_ColorGradingTargetListEntryData(
      name: '$cameraName: All Nodes',
      property: UnrealProperty(
        objectPath: cameraPath,
        propertyName: 'CameraSettings.AllNodesColorGrading.ColorGradingSettings',
      ),
    ));

    // Add targets for each per-node entry
    final List<dynamic>? perNodeEntries = response!.body['PerNodeColorGrading'];
    if (perNodeEntries == null) {
      return;
    }

    for (int entryIndex = 0; entryIndex < perNodeEntries.length; ++entryIndex) {
      final dynamic entry = perNodeEntries[entryIndex];
      final String? entryName = entry['Name'];
      if (entryName == null) {
        continue;
      }

      _targets.add(_ColorGradingTargetListEntryData(
        name: '$cameraName: $entryName',
        property: UnrealProperty(
          objectPath: cameraPath,
          propertyName: 'CameraSettings.PerNodeColorGrading[$entryIndex].ColorGradingSettings',
        ),
      ));
    }
  }
}

/// The list of possible targets for color grading.
class _ColorGradingTargetList extends StatefulWidget {
  const _ColorGradingTargetList({
    Key? key,
    required this.targets,
    required this.currentTarget,
    required this.onTargetChanged,
  }) : super(key: key);

  /// The list of possible color grading targets.
  final List<_ColorGradingTargetListEntryData> targets;

  /// The currently selected target color grading property.
  final UnrealProperty? currentTarget;

  /// A function called when the target property changes.
  final Function(UnrealProperty? newTarget) onTargetChanged;

  @override
  State<_ColorGradingTargetList> createState() => _ColorGradingTargetListState();
}

class _ColorGradingTargetListState extends State<_ColorGradingTargetList> {
  final ScrollController _scrollController = ScrollController();

  @override
  Widget build(BuildContext context) {
    return ListView.builder(
      controller: _scrollController,
      itemCount: widget.targets.length,
      itemBuilder: (BuildContext context, int targetIndex) {
        final _ColorGradingTargetListEntryData entryData = widget.targets[targetIndex];
        return _ColorGradingTargetListEntry(
          data: entryData,
          onTap: () => widget.onTargetChanged(entryData.property),
          bIsSelected: entryData.property == widget.currentTarget,
        );
      },
      scrollDirection: Axis.vertical,
    );
  }
}

/// The main controls of the color grading tab.
class _ColorGradingMainControls extends StatelessWidget {
  const _ColorGradingMainControls({
    Key? key,
    required this.targetProperty,
  }) : super(key: key);

  /// The base color grading property being controlled.
  final UnrealProperty? targetProperty;

  @override
  Widget build(BuildContext context) {
    if (targetProperty == null) {
      return Padding(
        padding: const EdgeInsets.symmetric(horizontal: 6, vertical: 6),
        child: Center(
          child: Text(
            'Select a target in the Outliner panel to edit its properties here.',
            textAlign: TextAlign.center,
          ),
        ),
      );
    }

    return BaseColorTab(
      mode: BaseColorTabMode.colorGrading,
      colorProperties: [targetProperty!],
      miscPropertyPrefix: 'ColorCorrection',
      bUseEnableProperties: true,
      rightSideContents: Column(
        crossAxisAlignment: CrossAxisAlignment.center,
        children: [
          FakeToggleButton('Color Grading'),
          SizedBox(height: 18),
          UnrealDeltaSlider(
            unrealProperties: getSubproperties([targetProperty!], 'WhiteBalance.WhiteTemp'),
            enableProperties: getSubproperties([targetProperty!], 'WhiteBalance.bOverride_WhiteTemp'),
            overrideName: 'Temperature',
            buildLabel: (name) => Row(children: [
              Text('$name ('),
              Flexible(
                child: UnrealDropdownText(
                  unrealProperties: getSubproperties([targetProperty!], 'WhiteBalance.TemperatureType'),
                  enableProperties: getSubproperties([targetProperty!], 'WhiteBalance.bOverride_TemperatureType'),
                ),
              ),
              Text(')'),
            ]),
          ),
          UnrealDeltaSlider(
            unrealProperties: getSubproperties([targetProperty!], 'WhiteBalance.WhiteTint'),
            enableProperties: getSubproperties([targetProperty!], 'WhiteBalance.bOverride_WhiteTint'),
            overrideName: 'Tint',
          ),
          UnrealDeltaSlider(
            unrealProperties: getSubproperties([targetProperty!], 'Misc.BlueCorrection'),
            enableProperties: getSubproperties([targetProperty!], 'Misc.bOverride_BlueCorrection'),
          ),
          UnrealDeltaSlider(
            unrealProperties: getSubproperties([targetProperty!], 'Misc.ExpandGamut'),
            enableProperties: getSubproperties([targetProperty!], 'Misc.bOverride_ExpandGamut'),
          ),
          UnrealDeltaSlider(
            unrealProperties: getSubproperties([targetProperty!], 'AutoExposureBias'),
            enableProperties: getSubproperties([targetProperty!], 'bOverride_AutoExposureBias'),
            steps: const [0.25, 0.5, 1.0],
          ),
        ],
      ),
    );
  }
}

/// Data about an entry in the list of color grading targets.
class _ColorGradingTargetListEntryData {
  const _ColorGradingTargetListEntryData({required this.name, required this.property});

  final String name;
  final UnrealProperty property;
}

/// Widget representing an entry in the list of color grading targets.
class _ColorGradingTargetListEntry extends StatelessWidget {
  const _ColorGradingTargetListEntry({
    required this.data,
    required this.onTap,
    required this.bIsSelected,
    Key? key,
  }) : super(key: key);

  final Function() onTap;
  final _ColorGradingTargetListEntryData data;
  final bool bIsSelected;

  @override
  Widget build(BuildContext context) {
    return PanelListTile(
      bIsSelected: bIsSelected,
      title: data.name,
      iconPath: 'assets/images/icons/viewports.png',
      onTap: onTap,
    );
  }
}
