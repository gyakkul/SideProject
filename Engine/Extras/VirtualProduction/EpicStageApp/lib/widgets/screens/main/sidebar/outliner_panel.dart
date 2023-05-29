// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

import '../../../../models/engine_connection.dart';
import '../../../../models/property_modify_operations.dart';
import '../../../../models/settings/lightcard_tab_user_settings.dart';
import '../../../../models/settings/template_tab_user_settings.dart';
import '../../../../models/unreal_actor_manager.dart';
import '../../../../models/unreal_property_manager.dart';
import '../../../../models/unreal_types.dart';
import '../../../../utilities/constants.dart';
import '../../../../utilities/debug_utilities.dart';
import '../../../../utilities/unreal_colors.dart';
import '../../../elements/layout/sidebar.dart';
import '../../../search_bar.dart';

/// A sidebar panel that lets the user view and interact with the list of actors.
class OutlinerPanel extends StatefulWidget {
  const OutlinerPanel({Key? key}) : super(key: key);

  @override
  State<OutlinerPanel> createState() => _OutlinerPanelState();
}

class _OutlinerPanelState extends State<OutlinerPanel> {
  late final EngineConnectionManager _connectionManager;
  late final UnrealActorManager _actorManager;
  late final UnrealPropertyManager _propertyManager;

  final TextEditingController _searchTextController = TextEditingController();
  final ScrollController _actorListScrollController = ScrollController();

  /// Filtered list of actor names to show.
  List<UnrealObject> _filteredActors = [];

  /// User-supplied text used to filter the list of actors by name.
  String _filterText = '';

  /// Map from actor paths to tracking ID for the property indicating whether the actor is hidden.
  Map<String, TrackedPropertyId> _trackedHiddenProperties = {};

  /// This will be replaced in build(), but gives us reasonable default values for the first build.
  LightcardTabUserSettings _userSettings = LightcardTabUserSettings();

  @override
  void initState() {
    super.initState();

    _connectionManager = Provider.of<EngineConnectionManager>(context, listen: false);
    _actorManager = Provider.of<UnrealActorManager>(context, listen: false);
    _propertyManager = Provider.of<UnrealPropertyManager>(context, listen: false);

    for (final String className in controllableClassNames) {
      _actorManager.watchClassName(className, _onActorsChanged);
    }
  }

  @override
  void dispose() {
    for (final String className in controllableClassNames) {
      _actorManager.stopWatchingClassName(className, _onActorsChanged);
    }

    for (final TrackedPropertyId propertyId in _trackedHiddenProperties.values) {
      _propertyManager.stopTrackingProperty(propertyId, _onActorHiddenValueChanged);
    }

    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    _userSettings = Provider.of<LightcardTabUserSettings>(context);
    _updateFilteredActors();

    return SizedBox(
      width: 320,
      child: SidebarDrawerPanel(
        title: 'Outliner',
        icon: 'assets/images/icons/outliner.png',
        child: Column(children: [
          // Button bar
          _OutlinerPanelSubHeader(
            padding: const EdgeInsets.symmetric(horizontal: 12),
            child: Row(children: [
              Wrap(
                spacing: 24,
                children: [
                  _OutlinerPanelHeaderButton(
                    iconPath: 'assets/images/icons/filter.png',
                    tooltipMessage: 'Filter Actors',
                    onPressed: _showFilterPulldown,
                  ),
                  _OutlinerPanelHeaderButton(
                    iconPath: 'assets/images/icons/visible.png',
                    tooltipMessage: 'Show Actors',
                    onPressed: () => _setActorsHidden(false),
                  ),
                  _OutlinerPanelHeaderButton(
                    iconPath: 'assets/images/icons/hidden.png',
                    tooltipMessage: 'Hide Actors',
                    onPressed: () => _setActorsHidden(true),
                  ),
                  _OutlinerPanelHeaderButton(
                    iconPath: 'assets/images/icons/favorite.png',
                    tooltipMessage: 'Toggle Favorite',
                    onPressed: _toggleFavoriteOnSelectedActors,
                  ),
                ],
              ),
              const Spacer(),
              _OutlinerPanelHeaderButton(
                iconPath: 'assets/images/icons/delete.png',
                tooltipMessage: 'Delete',
                onPressed: _deleteSelectedActors,
              ),
            ]),
          ),

          // Search bar
          _OutlinerPanelSubHeader(
            padding: const EdgeInsets.symmetric(horizontal: 18, vertical: 8),
            child: SearchBar(
              controller: _searchTextController,
              onChanged: _onFilterTextChanged,
            ),
          ),

          // List of actors
          Expanded(
            child: ListView.builder(
              itemCount: _filteredActors.length,
              itemBuilder: (BuildContext context, int actorIndex) => _OutlinerPanelActor(
                actorData: _filteredActors[actorIndex],
                bHidden: _isActorHidden(actorIndex),
              ),
              controller: _actorListScrollController,
            ),
          ),
        ]),
      ),
    );
  }

  /// Called when the user changes the filter text input.
  void _onFilterTextChanged(String newValue) {
    _filterText = newValue;
    _updateFilteredActors();
  }

  /// Update the filtered and sorted list of actors in the dropdown menu.
  void _updateFilteredActors() {
    setState(() {
      final Set<UnrealObject> listedActors = {};

      for (final String className in controllableClassNames) {
        for (final UnrealObject actor in _actorManager.getActorsOfClass(className)) {
          listedActors.add(actor);
        }
      }

      _filteredActors = listedActors.where(_filterActor).toList();

      int Function(UnrealObject, UnrealObject) compareFunction;
      switch (_userSettings.actorSortMode) {
        case TemplateTabActorSortMode.name:
          compareFunction = _compareActorsByName;
          break;

        case TemplateTabActorSortMode.recent:
          compareFunction = _compareActorsByRecency;
          break;

        default:
          throw Exception('No comparison function for sort type ${_userSettings.actorSortMode}');
      }

      // Reverse the comparison function if we're sorting in ascending order.
      if (!_userSettings.bShouldSortActorsDescending) {
        final int Function(UnrealObject, UnrealObject) baseCompareFunction = compareFunction;
        compareFunction = (UnrealObject a, UnrealObject b) => -baseCompareFunction(a, b);
      }

      _filteredActors.sort(compareFunction);
    });

    _trackHiddenProperties();
  }

  /// Return true if the actor with the given path should be included in the list shown to the user.
  bool _filterActor(UnrealObject actorData) {
    // Check that the actor is a favorite if required
    if (_userSettings.bShouldFilterToFavorites && !_userSettings.isActorFavorite(actorData.path)) {
      return false;
    }

    // Check that the actor name contains the filter text
    if (_filterText.isNotEmpty) {
      return actorData.name.toLowerCase().contains(_filterText.toLowerCase());
    }

    return true;
  }

  /// Comparison function to sort actors by name.
  int _compareActorsByName(UnrealObject actorA, UnrealObject actorB) {
    return actorA.name.compareTo(actorB.name);
  }

  /// Comparison function to sort actors by recency.
  int _compareActorsByRecency(UnrealObject actorA, UnrealObject actorB) {
    // First, check if the actors are currently selected
    final bool bIsASelected = _userSettings.isActorSelected(actorA.path);
    final bool bIsBSelected = _userSettings.isActorSelected(actorB.path);

    if (bIsASelected && bIsBSelected) {
      // Use name as tie-breaker if both are selected
      return _compareActorsByName(actorA, actorB);
    }

    if (bIsASelected) {
      return -1;
    }

    if (bIsBSelected) {
      return 1;
    }

    // Neither actor is currently selected, so compare based on when they were last selected (if ever)
    final DateTime? selectedTimeA = _userSettings.getActorLastSelectedTime(actorB.path);
    final DateTime? selectedTimeB = _userSettings.getActorLastSelectedTime(actorB.path);

    if (selectedTimeA == null && selectedTimeB == null) {
      // Use name as tie-breaker if neither have ever been selected
      return _compareActorsByName(actorA, actorB);
    }

    if (selectedTimeA == null) {
      return 1;
    }

    if (selectedTimeB == null) {
      return -1;
    }

    return -selectedTimeA.compareTo(selectedTimeB);
  }

  /// Show the pulldown menu with actor filtering options.
  void _showFilterPulldown() {
    showDebugAlert('Coming soon!');
  }

  /// Toggle whether all of the selected actors are favorites.
  void _toggleFavoriteOnSelectedActors() {
    if (_userSettings.selectedActors.isEmpty) {
      return;
    }

    final bool bShouldFavorite = !_userSettings.isActorFavorite(_userSettings.selectedActors.first);

    for (final String actorPath in _userSettings.selectedActors) {
      _userSettings.markActorFavorite(actorPath, bShouldFavorite: bShouldFavorite);
    }
  }

  /// Enable/disable visibility for the selected actors.
  void _setActorsHidden(bool bHidden) {
    if (!_propertyManager.beginTransaction(bHidden ? 'Hide Actors' : 'Show Actors')) {
      return;
    }

    for (final String actorPath in _userSettings.selectedActors) {
      final TrackedPropertyId? propertyId = _trackedHiddenProperties[actorPath];
      if (propertyId == null) {
        continue;
      }

      _propertyManager.modifyTrackedPropertyValue(propertyId, const SetOperation(), deltaValue: bHidden);
    }

    _propertyManager.endTransaction();
  }

  /// Send a message to the engine requesting the deletion of the selected actors.
  void _deleteSelectedActors() {
    if (_userSettings.selectedActors.isEmpty) {
      return;
    }

    // Create a delete request for each actor
    final requests = _userSettings.selectedActors
        .map(
          (String actorPath) => UnrealHttpRequest(
            url: '/remote/object/call',
            verb: 'PUT',
            body: {
              'objectPath': actorPath,
              'functionName': 'K2_DestroyActor',
              'generateTransaction': true,
            },
          ),
        )
        .toList(growable: false);

    // Send a batched message containing all the requests we want to execute
    _connectionManager.sendBatchedHttpRequest(requests).then((batchResponse) {
      // Check that the batched request succeeded
      if (batchResponse.code != HttpResponseCode.ok) {
        showDebugAlert('Failed to delete actors (error ${batchResponse.code})');
        return;
      }

      // Check that each delete succeeded and deselect the corresponding actor
      List<UnrealHttpResponse?> responses = batchResponse.body;
      for (int i = 0; i < responses.length; ++i) {
        String actorPath = requests[i].body['objectPath'];
        UnrealHttpResponse? response = responses[i];
        if (response?.code != HttpResponseCode.ok) {
          showDebugAlert('Failed to delete actor "$actorPath" (error ${response?.code})');
        } else {
          // Actor is confirmed deleted, so deselect it
          _userSettings.selectActor(actorPath, bShouldSelect: false);
        }
      }
    });
  }

  /// Called when the list of actors provided by the engine changes.
  void _onActorsChanged(ActorUpdateDetails details) {
    _updateFilteredActors();
  }

  /// Track (or stop tracking) the properties indicating which of the listed actors are hidden.
  void _trackHiddenProperties() {
    final Set<String> remainingPaths = _trackedHiddenProperties.keys.toSet();
    final List<Future<void>> pendingProperties = [];

    // Track any new properties
    for (final UnrealObject actor in _filteredActors) {
      final String actorPath = actor.path;
      remainingPaths.remove(actorPath);

      if (!_trackedHiddenProperties.containsKey(actorPath)) {
        final TrackedPropertyId propertyId = _propertyManager.trackProperty(
          UnrealProperty(
            objectPath: actorPath,
            propertyName: 'bHidden',
          ),
          _onActorHiddenValueChanged,
        );

        _trackedHiddenProperties[actorPath] = propertyId;
        pendingProperties.add(_propertyManager.waitForProperty(propertyId));
      }
    }

    // Stop tracking any old properties
    for (final String actorPath in remainingPaths) {
      _propertyManager.stopTrackingProperty(
        _trackedHiddenProperties[actorPath]!,
        _onActorHiddenValueChanged,
      );
      _trackedHiddenProperties.remove(actorPath);
    }

    // When all pending properties are exposed, update the widget
    Future.wait(pendingProperties).then((_) {
      if (mounted) {
        setState(() {});
      }
    });
  }

  /// Called when one of the tracked actors is hidden or unhidden.
  void _onActorHiddenValueChanged(_) {
    if (mounted) {
      setState(() {});
    }
  }

  /// Check whether the actor with the given [index] into [filteredActors] is hidden.
  bool _isActorHidden(int index) {
    assert(index >= 0 && index < _filteredActors.length);

    final TrackedPropertyId? propertyId = _trackedHiddenProperties[_filteredActors[index].path];
    assert(propertyId != null);

    if (!_propertyManager.isPropertyExposed(propertyId!)) {
      return false;
    }

    return _propertyManager.getTrackedPropertyValue(propertyId) != false;
  }
}

/// A sub-header in the outliner panel, including a border before the next element.
class _OutlinerPanelSubHeader extends StatelessWidget {
  const _OutlinerPanelSubHeader({Key? key, required this.child, this.padding}) : super(key: key);

  final Widget child;
  final EdgeInsetsGeometry? padding;

  @override
  Widget build(BuildContext context) {
    return Container(
      padding: padding,
      height: 45,
      decoration:
          const BoxDecoration(border: Border(bottom: BorderSide(color: UnrealColors.black, width: dividerSize))),
      child: child,
    );
  }
}

/// An icon button shown in the header of the outliner panel.
class _OutlinerPanelHeaderButton extends StatelessWidget {
  const _OutlinerPanelHeaderButton({
    Key? key,
    required this.iconPath,
    required this.tooltipMessage,
    required this.onPressed,
  }) : super(key: key);

  final String iconPath;
  final String tooltipMessage;
  final Function() onPressed;

  @override
  Widget build(BuildContext context) {
    return Tooltip(
      message: tooltipMessage,
      child: IconButton(
        padding: EdgeInsets.zero,
        constraints: BoxConstraints.tight(const Size(40, 40)),
        onPressed: onPressed,
        icon: Image.asset(
          iconPath,
          width: 20,
        ),
      ),
    );
  }
}

/// An entry for an actor in the outliner panel's actor list.
class _OutlinerPanelActor extends StatelessWidget {
  const _OutlinerPanelActor({Key? key, required this.actorData, required this.bHidden}) : super(key: key);

  final UnrealObject actorData;
  final bool bHidden;

  @override
  Widget build(BuildContext context) {
    final userSettings = Provider.of<LightcardTabUserSettings>(context);

    final bool bIsSelected = userSettings.isActorSelected(actorData.path);
    final bool bIsFavorite = userSettings.isActorFavorite(actorData.path);

    Color textColor = bIsSelected ? UnrealColors.white : UnrealColors.gray5;
    if (bHidden) {
      textColor = textColor.withOpacity(0.4);
    }

    return PanelListTile(
      title: actorData.name,
      trailing: bIsFavorite ? Image.asset('assets/images/icons/favorite.png', width: 20) : null,
      bIsSelected: bIsSelected,
      iconPath: actorData.getIconPath(),
      textColor: textColor,
      onTap: () => userSettings.selectActor(actorData.path, bShouldSelect: !bIsSelected),
    );
  }
}
