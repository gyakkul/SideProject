// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:collection';

import 'package:flutter/material.dart';

import 'color_grading_tab.dart';
import 'details_tab.dart';
import 'stage_map_tab.dart';
import 'web_browser_tab.dart';

/// The tab bar shown within the [MainScreenToolbar].
class MainScreenTabs {
  static final List<MainScreenTabConfig> _tabs = [
    MainScreenTabConfig(
      title: StageMapTab.title,
      iconPath: StageMapTab.iconPath,
      bShowMapPreview: false,
      createTabContents: (context) => const StageMapTab(),
    ),
    MainScreenTabConfig(
      title: DetailsTab.title,
      iconPath: DetailsTab.iconPath,
      createTabContents: (context) => const DetailsTab(),
    ),
    MainScreenTabConfig(
      title: ColorGradingTab.title,
      iconPath: ColorGradingTab.iconPath,
      createTabContents: (context) => const ColorGradingTab(),
    ),
    MainScreenTabConfig(
      title: WebBrowserTab.title,
      iconPath: WebBrowserTab.iconPath,
      bKeepAlive: true,
      bHideAppControls: true,
      bShowMapPreview: false,
      createTabContents: (context) => const WebBrowserTab(),
      toolbarButtons: WebBrowserTab.toolbarButtons,
    ),
  ];

  /// The list of tab configurations in display order.
  static UnmodifiableListView<MainScreenTabConfig> get tabConfigs => UnmodifiableListView(_tabs);

  /// Create the contents of one of the tabs by its index.
  static Widget createTabContents(BuildContext context, int index) {
    return _tabs[index].createTabContents(context);
  }

  /// Check whether the given tab's contents should be kept alive when not visible.
  static bool shouldKeepTabAlive(int index) {
    return _tabs[index].bKeepAlive;
  }

  /// Check whether the given tab should hide app-specific controls.
  static bool shouldTabHideAppControls(int index) {
    return _tabs[index].bHideAppControls;
  }

  /// Check whether the given tab should show the map preview.
  static bool shouldShowMapPreview(int index) {
    return _tabs[index].bShowMapPreview;
  }

  /// Get the buttons to show in the main toolbar when this tab is active.
  static UnmodifiableListView<Widget> getToolbarButtons(int index) {
    final List<Widget> buttons = _tabs[index].toolbarButtons ?? [];

    return UnmodifiableListView(buttons);
  }
}

/// Configuration for an entry in the main screen's tab bar.
class MainScreenTabConfig {
  const MainScreenTabConfig({
    required this.title,
    required this.iconPath,
    required this.createTabContents,
    this.bKeepAlive = false,
    this.bHideAppControls = false,
    this.bShowMapPreview = true,
    this.toolbarButtons,
  });

  /// The title of the tab as shown to the user.
  final String title;

  /// The path of the icon representing this tab.
  final String iconPath;

  /// A function to create the widget for the tab's contents.
  final Widget Function(BuildContext context) createTabContents;

  /// If true, keep this tab's contents alive even when it's not visible.
  /// If false, dispose of the tab's contents when it's not visible.
  final bool bKeepAlive;

  /// Whether app-specific controls (sidebars, undo/redo, etc.) should be hidden while this tab is open.
  final bool bHideAppControls;

  /// Whether the floating map preview should be visible when this tab is open.
  final bool bShowMapPreview;

  /// A list of button widgets to add to the main toolbar when this tab is active.
  final List<Widget>? toolbarButtons;
}
