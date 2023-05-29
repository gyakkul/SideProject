// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';

/// Width of a list menu's body.
const double defaultListMenuBodyWidth = 260;

/// Default padding for a list menu item.
const EdgeInsetsGeometry defaultListMenuItemPadding = EdgeInsets.fromLTRB(18, 2, 4, 2);

/// Default height for a list menu item.
const double defaultListMenuItemHeight = 44;

/// A menu containing a vertical list of items.
class ListMenu extends StatelessWidget {
  const ListMenu({
    Key? widgetKey,
    required this.children,
    this.width,
    this.minHeight,
  }) : super(key: widgetKey);

  final List<Widget> children;
  final double? width;
  final double? minHeight;

  @override
  Widget build(BuildContext context) {
    final color = Theme.of(context).colorScheme.surfaceTint;

    return Container(
      constraints: BoxConstraints(
        maxWidth: width ?? defaultListMenuBodyWidth,
        minWidth: width ?? defaultListMenuBodyWidth,
        minHeight: minHeight ?? 0.0,
      ),
      decoration: BoxDecoration(
        color: color,
        borderRadius: BorderRadius.circular(12.5),
      ),
      clipBehavior: Clip.antiAlias,
      child: Material(
        color: Colors.transparent,
        child: Column(
          mainAxisSize: MainAxisSize.min,
          crossAxisAlignment: CrossAxisAlignment.stretch,
          children: children,
        ),
      ),
    );
  }
}

/// An item shown in a [ListMenu] with a standard icon + text layout.
class ListMenuSimpleItem extends StatelessWidget {
  const ListMenuSimpleItem({
    Key? key,
    required this.title,
    this.bShowArrow = false,
    this.bIsSelected = false,
    this.iconPath,
    this.onTap,
  }) : super(key: key);

  /// The text to show on the item.
  final String title;

  /// Whether to show an arrow on the right side of the item.
  final bool bShowArrow;

  /// Whether the tile is selected.
  final bool bIsSelected;

  /// An optional path to an image file to show as an icon before the item's name.
  final String? iconPath;

  /// An optional function to call when this list item is tapped.
  final void Function()? onTap;

  @override
  Widget build(BuildContext context) {
    const double iconSize = 20;

    return ListTile(
      dense: true,
      contentPadding: defaultListMenuItemPadding,
      minLeadingWidth: 30,
      horizontalTitleGap: 0,
      leading: iconPath != null
          ? Image.asset(
              iconPath!,
              width: iconSize,
              height: iconSize,
            )
          : null,
      trailing: bShowArrow ? Icon(Icons.chevron_right_rounded) : null,
      title: Text(
        title,
      ),
      onTap: onTap,
      selected: bIsSelected,
    );
  }
}

/// A title shown in a [ListMenu] to categorize items.
class ListMenuHeader extends StatelessWidget {
  const ListMenuHeader(this.text, {Key? key}) : super(key: key);

  final String text;

  @override
  Widget build(BuildContext context) {
    final TextStyle textStyle = Theme.of(context).textTheme.bodyText2!.copyWith(
          fontWeight: FontWeight.bold,
        );

    return Container(
      height: 32,
      padding: defaultListMenuItemPadding,
      child: Align(
        alignment: AlignmentDirectional.bottomStart,
        child: Text(text, style: textStyle),
      ),
    );
  }
}

/// A separator between sections in a [ListMenu].
class ListMenuSeparator extends StatelessWidget {
  const ListMenuSeparator({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Container(
      height: 1,
      color: Theme.of(context).colorScheme.onSurface.withOpacity(0.25),
    );
  }
}
