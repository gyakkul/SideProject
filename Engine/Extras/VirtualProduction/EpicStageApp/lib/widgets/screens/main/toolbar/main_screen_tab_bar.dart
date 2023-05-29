// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';

import '../../../../utilities/unreal_colors.dart';
import '../tabs/main_screen_tabs.dart';

/// The tab bar shown within the [MainScreenToolbar].
class MainScreenTabBar extends StatefulWidget {
  const MainScreenTabBar({
    Key? key,
    this.tabController,
  }) : super(key: key);

  final TabController? tabController;

  @override
  State<MainScreenTabBar> createState() => _MainScreenTabBarState();
}

class _MainScreenTabBarState extends State<MainScreenTabBar> {
  @override
  Widget build(BuildContext context) {
    return SizedBox(
      height: 40,
      child: TabBar(
        controller: widget.tabController,
        isScrollable: true, // This shrinks the tab buttons to fit their contents
        labelColor: UnrealColors.highlightBlue,
        unselectedLabelColor: UnrealColors.white,
        padding: EdgeInsets.zero,
        indicatorPadding: EdgeInsets.zero,
        labelPadding: const EdgeInsets.symmetric(horizontal: 8),
        indicator: BoxDecoration(
          borderRadius: BorderRadius.circular(5),
          color: UnrealColors.gray3,
        ),
        indicatorSize: TabBarIndicatorSize.label,
        tabs: MainScreenTabs.tabConfigs.map((tabConfig) => _MainScreenTabBarTab(tabConfig: tabConfig)).toList(),
      ),
    );
  }
}

class _MainScreenTabBarTab extends StatelessWidget {
  const _MainScreenTabBarTab({Key? key, required this.tabConfig}) : super(key: key);

  final MainScreenTabConfig tabConfig;

  @override
  Widget build(BuildContext context) {
    return Tooltip(
      message: tabConfig.title,
      child: SizedBox(
        width: 40,
        height: 40,
        child: Center(
          child: Image.asset(
            tabConfig.iconPath,
            height: 20,
            color: DefaultTextStyle.of(context).style.color,
          ),
        ),
      ),
    );
  }
}
