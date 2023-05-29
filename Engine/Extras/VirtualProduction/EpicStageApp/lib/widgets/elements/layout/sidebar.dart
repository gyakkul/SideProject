// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';

import '../../../utilities/constants.dart';
import '../../../utilities/unreal_colors.dart';
import '../epic_icon_button.dart';

/// Data used to create a button in a [Sidebar].
class SidebarButtonData {
  const SidebarButtonData({
    required this.iconPath,
    this.tooltipMessage,
    this.bIsToggleable = false,
    this.key,
  });

  /// The path of the icon image's asset.
  final String iconPath;

  /// Text to show in the tooltip for this button.
  final String? tooltipMessage;

  /// If true, the button is toggled on and off with each press. If false, it never becomes active.
  final bool bIsToggleable;

  /// Key to use to refer to the button later.
  final Key? key;
}

/// A bar with buttons shown at the side of the screen.
class Sidebar extends StatelessWidget {
  const Sidebar({
    Key? key,
    required this.buttons,
    required this.onButtonPressed,
    this.bShowDrawer = false,
    this.toggledOnButtons,
  })  : assert(toggledOnButtons == null || (toggledOnButtons.length == buttons.length)),
        super(key: key);

  /// List of data from which to create buttons.
  final List<SidebarButtonData> buttons;

  /// A callback function to call when a button is pressed. Passes the [index] of the button in [buttons].
  final Function(int index) onButtonPressed;

  /// If true, show a drawer of panels provided in [drawerPanels] next to the sidebar.
  final bool bShowDrawer;

  /// Optional list indicating which buttons are toggled on. Must be either null or match the length of [buttons].
  final List<bool>? toggledOnButtons;

  @override
  Widget build(BuildContext context) {
    return Container(
      padding: const EdgeInsets.all(2),
      color: Theme.of(context).colorScheme.surfaceVariant,
      width: 44,
      child: ListView.separated(
        itemCount: buttons.length,
        itemBuilder: (BuildContext context, int buttonIndex) {
          final SidebarButtonData buttonData = buttons[buttonIndex];
          return EpicIconButton(
            key: buttonData.key,
            iconPath: buttonData.iconPath,
            tooltipMessage: buttonData.tooltipMessage,
            bIsToggledOn: toggledOnButtons?[buttonIndex] ?? false,
            onPressed: () => onButtonPressed.call(buttonIndex),
          );
        },
        separatorBuilder: (_, __) => const SizedBox(height: 2),
      ),
    );
  }
}

/// A drawer that can open next to a [Sidebar] and contain [SidebarDrawerPanel].
class SidebarDrawer extends StatelessWidget {
  const SidebarDrawer({Key? key, required this.children}) : super(key: key);

  final List<Widget> children;

  @override
  Widget build(BuildContext context) {
    return Container(
      width: 260,
      decoration: BoxDecoration(
        color: Theme.of(context).colorScheme.surface,
        border: Border(
          right: BorderSide(
            color: Theme.of(context).colorScheme.background,
            width: dividerSize,
          ),
        ),
      ),
      child: Column(children: children),
    );
  }
}

/// A panel displayed inside a [SidebarDrawer].
class SidebarDrawerPanel extends StatefulWidget {
  const SidebarDrawerPanel({
    Key? key,
    required this.child,
    required this.title,
    required this.icon,
  }) : super(key: key);

  /// The widget this contains.
  final Widget child;

  /// The title to show on the panel.
  final String title;

  /// The path of the icon to show in the panel's title area.
  final String icon;

  @override
  State<SidebarDrawerPanel> createState() => _SidebarDrawerPanelState();
}

class _SidebarDrawerPanelState extends State<SidebarDrawerPanel> {
  @override
  Widget build(BuildContext context) {
    return Container(
      color: Theme.of(context).colorScheme.surface,
      child: Column(children: [
        Container(
          height: 32,
          padding: const EdgeInsets.symmetric(horizontal: 18),
          decoration: const BoxDecoration(
            color: UnrealColors.gray3,
            border: Border(bottom: BorderSide(color: UnrealColors.black, width: dividerSize)),
          ),
          child: Row(children: [
            Image.asset(
              widget.icon,
              width: 20,
            ),
            const SizedBox(width: 5),
            Text(
              widget.title,
              style: Theme.of(context).textTheme.bodyText2!.copyWith(fontWeight: FontWeight.bold),
            ),
          ]),
        ),
        Expanded(child: widget.child),
      ]),
    );
  }
}

/// A list tile shown in a panel.
class PanelListTile extends StatelessWidget {
  const PanelListTile({
    Key? key,
    required this.title,
    required this.bIsSelected,
    this.iconPath,
    this.textColor,
    this.trailing,
    this.onTap,
  }) : super(key: key);

  /// The label to display on the item.
  final String title;

  /// Whether this is currently selected.
  final bool bIsSelected;

  /// If provided, show an icon with the image at this path.
  final String? iconPath;

  /// The color of the text shown next to the icon.
  final Color? textColor;

  /// Optional widget to show after the title.
  final Widget? trailing;

  /// Function called when the user taps this item.
  final void Function()? onTap;

  @override
  Widget build(BuildContext context) {
    return Container(
      color: bIsSelected ? Theme.of(context).colorScheme.primary : Colors.transparent,
      child: ListTile(
        selected: bIsSelected,
        leading: iconPath != null
            ? Image.asset(
                iconPath!,
                width: 20,
              )
            : null,
        trailing: trailing,
        title: Text(
          title,
          style: Theme.of(context).textTheme.bodyText2!.copyWith(color: textColor),
          softWrap: false,
          overflow: TextOverflow.ellipsis,
        ),
        horizontalTitleGap: 6,
        minLeadingWidth: 0,
        contentPadding: const EdgeInsets.symmetric(horizontal: 18),
        visualDensity: const VisualDensity(vertical: -3),
        onTap: onTap,
      ),
    );
  }
}
