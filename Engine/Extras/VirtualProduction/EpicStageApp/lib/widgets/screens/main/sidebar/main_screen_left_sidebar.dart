// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

import '../../../../models/unreal_actor_creator.dart';
import '../../../elements/dropdown_list_menu.dart';
import '../../../elements/layout/sidebar.dart';
import '../../../elements/place_actor_menu.dart';

/// The main screen's left sidebar, containing buttons for creating actors.
class MainScreenLeftSidebar extends StatefulWidget {
  const MainScreenLeftSidebar({Key? key}) : super(key: key);

  @override
  State<MainScreenLeftSidebar> createState() => _MainScreenLeftSidebarState();
}

class _MainScreenLeftSidebarState extends State<MainScreenLeftSidebar> {
  /// Key for the "Place Actor" button.
  final GlobalKey _placeActorButtonKey = GlobalKey();

  /// Buttons to show in the sidebar.
  late final List<_SidebarButtonActionConfig> buttons;

  late final UnrealActorCreator _actorCreator;

  @override
  void initState() {
    super.initState();

    _actorCreator = Provider.of<UnrealActorCreator>(context, listen: false);

    buttons = [
      _SidebarButtonActionConfig(
        buttonData: SidebarButtonData(
          iconPath: 'assets/images/icons/place_actor_temp.png',
          tooltipMessage: 'Place Actor',
          key: _placeActorButtonKey,
        ),
        action: _openPlaceActorMenu,
      ),
      _SidebarButtonActionConfig(
        buttonData: const SidebarButtonData(
          iconPath: 'assets/images/icons/light_card.png',
          tooltipMessage: 'Place Lightcard',
        ),
        action: _actorCreator.createLightcard,
      ),
      _SidebarButtonActionConfig(
        buttonData: const SidebarButtonData(
          iconPath: 'assets/images/icons/color_correct_window.png',
          tooltipMessage: 'Place Color Correction Window',
        ),
        action: _actorCreator.createColorCorrectionWindow,
      ),
      _SidebarButtonActionConfig(
        buttonData: const SidebarButtonData(
          iconPath: 'assets/images/icons/paste.png',
          tooltipMessage: 'Duplicate Selected Actors',
        ),
        action: _actorCreator.duplicateSelectedActors,
      ),
    ];
  }

  @override
  Widget build(BuildContext context) {
    return Sidebar(
      buttons: buttons.map((config) => config.buttonData).toList(),
      onButtonPressed: _onButtonPressed,
    );
  }

  void _onButtonPressed(int buttonIndex) {
    if (buttonIndex >= buttons.length) {
      return;
    }

    buttons[buttonIndex].action();
  }

  /// Open the menu to create a variety of new actors.
  void _openPlaceActorMenu() {
    DropDownListMenu.showAtWidget(
      widgetKey: _placeActorButtonKey,
      builder: (context) => PlaceActorDropDownMenu(),
      rectPadding: 3,
    );
  }
}

/// Configuration for a button in this sidebar.
class _SidebarButtonActionConfig {
  const _SidebarButtonActionConfig({required this.buttonData, required this.action});

  final SidebarButtonData buttonData;
  final Function() action;
}
