// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

import '../../../models/settings/lightcard_tab_user_settings.dart';
import '../../../models/unreal_actor_manager.dart';
import '../../../models/unreal_types.dart';
import '../../../utilities/constants.dart';
import '../../../utilities/debug_utilities.dart';
import '../../../utilities/unreal_colors.dart';
import '../../elements/floating_map_preview.dart';
import '../../elements/layout/lazy_tab_view.dart';
import 'tabs/main_screen_tabs.dart';
import 'toolbar/main_screen_toolbar.dart';

/// The main screen of the app shown once the user is connected to the engine.
class StageAppMainScreen extends StatefulWidget {
  const StageAppMainScreen({Key? key}) : super(key: key);

  static const String title = 'Main screen';
  static const String route = '/main';

  @override
  State<StageAppMainScreen> createState() => _StageAppMainScreenState();
}

class _StageAppMainScreenState extends State<StageAppMainScreen>
    with SingleTickerProviderStateMixin, WidgetsBindingObserver {
  late final UnrealActorManager _actorManager;
  late final TabController _tabController;
  late final LightcardTabUserSettings _userSettings;

  /// Whether to show generic app controls like undo/redo/multi-select.
  bool _bShowAppControls = true;

  /// Whether to show the floating stage map preview.
  bool _bShowMapPreview = false;

  /// Set of classes for which we already received the initial list of actors.
  Set<String> _classesWithFirstUpdate = {};

  @override
  void initState() {
    super.initState();

    _tabController = TabController(
      animationDuration: Duration.zero,
      length: MainScreenTabs.tabConfigs.length,
      vsync: this,
    );
    _tabController.addListener(_onActiveTabChanged);
    _onActiveTabChanged();

    _actorManager = Provider.of<UnrealActorManager>(context, listen: false);
    _actorManager.watchClassName(nDisplayRootActorClassName, _onRootActorUpdate);

    _userSettings = Provider.of<LightcardTabUserSettings>(context, listen: false);

    final List<Future<Set<UnrealObject>>> initialActorFutures = [];

    /// Subscribe to classes that we always want to know about regardless of the current tab.
    /// This prevents us from constantly sending unsubscribe and resubscribe messages when changing tabs.
    for (final String className in controllableClassNames) {
      _actorManager.watchClassName(className, _onControllableActorUpdate);
      initialActorFutures.add(_actorManager.getInitialActorsOfClass(className));
    }

    Future.wait(initialActorFutures).then(_handleInitialControllableActorList);
  }

  @override
  void dispose() {
    _tabController.dispose();
    _actorManager.stopWatchingClassName(nDisplayRootActorClassName, _onRootActorUpdate);

    for (final String className in controllableClassNames) {
      _actorManager.stopWatchingClassName(className, _onControllableActorUpdate);
    }

    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      resizeToAvoidBottomInset: false,
      appBar: MainScreenToolbar(
        tabController: _tabController,
        bAppControlButtonsEnabled: _bShowAppControls,
      ),
      body: Stack(
        clipBehavior: Clip.none,
        children: [
          Container(
            key: Key('Tab View'),
            color: UnrealColors.gray2,
            child: LazyTabView(
              controller: _tabController,
              builder: MainScreenTabs.createTabContents,
              keepAlive: MainScreenTabs.shouldKeepTabAlive,
            ),
          ),
          if (_bShowMapPreview) const FloatingMapPreview(key: Key('Map Preview')),
        ],
      ),
    );
  }

  /// Called when the actors in the engine have changed.
  void _onRootActorUpdate(ActorUpdateDetails details) {
    final Set<UnrealObject> rootActors = _actorManager.getActorsOfClass(nDisplayRootActorClassName);

    final UnrealObject? root;
    if (rootActors.isEmpty) {
      root = null;
    } else {
      root = rootActors.first;
    }

    _userSettings.displayClusterRootPath = root?.path;

    if (rootActors.isEmpty) {
      showDebugAlert(
          'There are no active nDisplay root actors in the editor. Load a map with one to start using the Stage App.');
    } else if (rootActors.length > 1) {
      showDebugAlert(
          'Multiple nDisplay root actors are present, but the Stage App currently only supports one at a time. '
          'The root actor "$root" will be used.');
    }
  }

  /// Called when the active tab changes.
  void _onActiveTabChanged() {
    final bool bNewHideAppControls = !MainScreenTabs.shouldTabHideAppControls(_tabController.index);
    if (bNewHideAppControls != _bShowAppControls) {
      setState(() {
        _bShowAppControls = bNewHideAppControls;
      });
    }

    final bool bNewShowMapPreview = MainScreenTabs.shouldShowMapPreview(_tabController.index);
    if (bNewShowMapPreview != _bShowMapPreview) {
      setState(() {
        _bShowMapPreview = bNewShowMapPreview;
      });
    }
  }

  /// Called a controllable actor has changed.
  void _onControllableActorUpdate(ActorUpdateDetails details) {
    if (!_classesWithFirstUpdate.contains(details.className)) {}

    for (final UnrealObject actor in details.deletedActors) {
      if (_userSettings.isActorSelected(actor.path)) {
        _userSettings.selectActor(actor.path, bShouldSelect: false);
      }
    }
  }

  /// Handle the initial list of [actors] received from the engine.
  void _handleInitialControllableActorList(List<Set<UnrealObject>> actors) {
    // Deselect any actors that no longer exist
    final staleActorPaths = Set<String>();

    for (final String actorPath in _userSettings.selectedActors) {
      if (_actorManager.getActorAtPath(actorPath) == null) {
        staleActorPaths.add(actorPath);
      }
    }

    for (final String actorPath in staleActorPaths) {
      _userSettings.selectActor(actorPath, bShouldSelect: false);
    }
  }
}
