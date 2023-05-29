// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';

import '../../utilities/unreal_colors.dart';

/// A standard-sized button with arbitrary contents.
class EpicGenericButton extends StatelessWidget {
  const EpicGenericButton({
    Key? key,
    required this.child,
    required this.tooltipMessage,
    required this.onPressed,
    this.size = const Size(40, 40),
    this.bIsToggledOn = false,
  }) : super(key: key);

  final Widget child;
  final String? tooltipMessage;
  final Function() onPressed;
  final Size size;
  final bool bIsToggledOn;

  @override
  Widget build(BuildContext context) {
    final button = Container(
      decoration: bIsToggledOn
          ? BoxDecoration(
              color: Theme.of(context).colorScheme.surfaceTint,
              borderRadius: BorderRadius.circular(5),
            )
          : null,
      child: IconButton(
        onPressed: onPressed,
        constraints: BoxConstraints.tight(size),
        icon: DefaultTextStyle(
          style: Theme.of(context).textTheme.bodyText2!.copyWith(color: UnrealColors.white),
          child: child,
        ),
      ),
    );

    if (tooltipMessage == null) {
      return button;
    }

    return Tooltip(
      message: tooltipMessage,
      child: button,
    );
  }
}

/// A standard-sized button with an icon.
class EpicIconButton extends StatelessWidget {
  const EpicIconButton({
    Key? key,
    required this.iconPath,
    required this.tooltipMessage,
    required this.onPressed,
    this.bIsToggledOn = false,
  }) : super(key: key);

  final bool bIsToggledOn;
  final String iconPath;
  final String? tooltipMessage;
  final Function() onPressed;

  @override
  Widget build(BuildContext context) {
    return EpicGenericButton(
      child: Image.asset(iconPath, width: 20),
      bIsToggledOn: bIsToggledOn,
      tooltipMessage: tooltipMessage,
      onPressed: onPressed,
    );
  }
}
