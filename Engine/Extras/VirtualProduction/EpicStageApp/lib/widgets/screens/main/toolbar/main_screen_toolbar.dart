// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

import '../../../../models/settings/lightcard_tab_user_settings.dart';
import '../../../../utilities/constants.dart';
import '../../../../utilities/debug_utilities.dart';
import '../../../../utilities/unreal_colors.dart';
import '../../../elements/control_lock.dart';
import '../../../elements/dropdown_list_menu.dart';
import '../../../elements/epic_icon_button.dart';
import '../../../elements/ndisplay_config_name_display.dart';
import '../tabs/main_screen_tabs.dart';
import 'main_screen_tab_bar.dart';
import 'settings_dropdown_menu.dart';

const double _buttonSpacing = 16;

/// The toolbar shown at the top of the [StageAppMainScreen].
class MainScreenToolbar extends StatelessWidget implements PreferredSizeWidget {
  const MainScreenToolbar({
    Key? key,
    required this.bAppControlButtonsEnabled,
    required this.tabController,
  }) : super(key: key);

  /// Whether to show the standard app control buttons (multi-select, undo, redo).
  final bool bAppControlButtonsEnabled;

  final TabController tabController;

  @override
  Size get preferredSize => const Size.fromHeight(50.0 + dividerSize);

  @override
  Widget build(BuildContext context) {
    return Container(
      padding: const EdgeInsets.only(
        left: 16,
        right: 16,
        top: 2,
      ),
      decoration: BoxDecoration(
        color: Theme.of(context).colorScheme.surface,
        border: const Border(
          bottom: BorderSide(color: UnrealColors.black, width: dividerSize),
        ),
      ),
      height: preferredSize.height,
      child: Row(
        children: [
          const ControlLock(),
          const SizedBox(
            width: 30,
          ),
          const NDisplayConfigNameDisplay(),
          const SizedBox(
            width: 20,
          ),
          MainScreenTabBar(tabController: tabController),
          const Spacer(),
          _TabSpecificButtons(tabController: tabController),
          if (bAppControlButtonsEnabled) const _AppControlButtons(),
          Wrap(
            spacing: _buttonSpacing,
            children: const [
              HelpButton(),
              SettingsButton(),
              FullscreenButton(),
            ],
          ),
        ],
      ),
    );
  }
}

/// Main buttons used to control any operations in the app. Grouped so they can be easily disabled when irrelevant (e.g.
/// when the web browser is open, so they wouldn't do anything).
class _AppControlButtons extends StatelessWidget {
  const _AppControlButtons({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Padding(
      padding: const EdgeInsets.only(right: _buttonSpacing),
      child: Wrap(
        spacing: _buttonSpacing,
        children: const [
          ToggleMultiSelectButton(),
        ],
      ),
    );
  }
}

/// Displays buttons that are only available when the current tab is active.
class _TabSpecificButtons extends StatelessWidget {
  const _TabSpecificButtons({
    Key? key,
    required this.tabController,
  }) : super(key: key);

  final TabController tabController;

  @override
  Widget build(BuildContext context) {
    return ChangeNotifierProvider.value(
      value: tabController,
      builder: (context, child) {
        final List<Widget> buttons = MainScreenTabs.getToolbarButtons(tabController.index);
        if (buttons.isEmpty) {
          return const SizedBox();
        }

        return Padding(
          padding: const EdgeInsets.only(right: _buttonSpacing),
          child: Wrap(
            spacing: _buttonSpacing,
            children: buttons,
          ),
        );
      },
    );
  }
}

/// Button that shows a debug message indicating it's not yet implemented.
class UnimplementedButton extends StatelessWidget {
  const UnimplementedButton({Key? key, required this.iconPath, required this.tooltipMessage}) : super(key: key);

  final String iconPath;
  final String tooltipMessage;

  @override
  Widget build(BuildContext context) {
    return EpicIconButton(
      iconPath: iconPath,
      tooltipMessage: tooltipMessage,
      onPressed: _onPressed,
    );
  }

  void _onPressed() {
    showDebugAlert('Coming soon!');
  }
}

/// Button that toggles the multi-select mode.
class ToggleMultiSelectButton extends StatelessWidget {
  const ToggleMultiSelectButton({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    final userSettings = Provider.of<LightcardTabUserSettings>(context);

    return SizedBox(
      width: 64,
      child: EpicGenericButton(
        child: const Text('Select'),
        tooltipMessage: 'Toggle Multi-Select',
        onPressed: () => _onPressed(context),
        bIsToggledOn: userSettings.bIsInMultiSelectMode,
      ),
    );
  }

  void _onPressed(BuildContext context) {
    final userSettings = Provider.of<LightcardTabUserSettings>(context, listen: false);
    userSettings.bIsInMultiSelectMode = !userSettings.bIsInMultiSelectMode;
  }
}

/// Button that undoes the last action.
class UndoButton extends StatelessWidget {
  const UndoButton({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return const UnimplementedButton(
      iconPath: 'assets/images/icons/undo.png',
      tooltipMessage: 'Undo',
    );
  }
}

/// Button that redoes the last undone action.
class RedoButton extends StatelessWidget {
  const RedoButton({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return const UnimplementedButton(
      iconPath: 'assets/images/icons/redo.png',
      tooltipMessage: 'Redo',
    );
  }
}

/// Button that shows help for the current context.
class HelpButton extends StatelessWidget {
  const HelpButton({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return const UnimplementedButton(
      iconPath: 'assets/images/icons/help.png',
      tooltipMessage: 'Help',
    );
  }
}

/// Button that opens the settings menu.
class SettingsButton extends StatefulWidget {
  const SettingsButton({Key? key}) : super(key: key);

  @override
  State<SettingsButton> createState() => _SettingsButtonState();
}

class _SettingsButtonState extends State<SettingsButton> {
  final buttonKey = GlobalKey();

  @override
  Widget build(BuildContext context) {
    return EpicIconButton(
      key: buttonKey,
      iconPath: 'assets/images/icons/settings.png',
      tooltipMessage: 'Settings',
      onPressed: () => DropDownListMenu.showAtWidget(
        widgetKey: buttonKey,
        builder: (context) => SettingsDropDownMenu(),
      ),
    );
  }
}

/// Button that changes the app to fullscreen mode.
class FullscreenButton extends StatelessWidget {
  const FullscreenButton({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return const UnimplementedButton(
      iconPath: 'assets/images/icons/fullscreen.png',
      tooltipMessage: 'Enter Fullscreen',
    );
  }
}
