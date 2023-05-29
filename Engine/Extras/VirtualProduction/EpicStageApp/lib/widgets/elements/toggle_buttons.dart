// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';

/// Toggle buttons that operate on an enum value.
class EnumToggleButtons<EnumType> extends StatelessWidget {
  const EnumToggleButtons({
    Key? key,
    required this.value,
    required this.onSelected,
    required this.valueNames,
    this.buttonPadding,
    this.buttonConstraints,
  }) : super(key: key);

  /// The selected value.
  final EnumType value;

  /// Function called when a new value is selected.
  final Function(EnumType newValue) onSelected;

  /// Names to show for each enum value. Values not in this list will not be shown on the widget, which can be useful
  /// for e.g. a "none" value.
  final Map<EnumType, String> valueNames;

  /// Padding within each button.
  final EdgeInsetsGeometry? buttonPadding;

  /// Constraints for each button.
  final BoxConstraints? buttonConstraints;

  @override
  Widget build(BuildContext context) {
    final List<EnumType> validValues = valueNames.keys.toList();

    return ToggleButtons(
      children: validValues
          .map((EnumType validValue) => Padding(
                padding: buttonPadding ??
                    EdgeInsets.symmetric(
                      vertical: 6,
                      horizontal: 8,
                    ),
                child: Text(valueNames[validValue]!),
              ))
          .toList(growable: false),
      isSelected: validValues.map((EnumType validValue) => value == validValue).toList(growable: false),
      fillColor: Theme.of(context).colorScheme.primary,
      selectedColor: Theme.of(context).colorScheme.onPrimary,
      onPressed: (int index) => onSelected(validValues[index]),
      borderRadius: BorderRadius.circular(10),
      constraints: buttonConstraints,
    );
  }
}

/// "Ornamental" toggle button selector when there's only one value to show.
class FakeToggleButton extends StatelessWidget {
  const FakeToggleButton(this.valueName, {Key? key}) : super(key: key);

  /// The name to show on the button.
  final String valueName;

  @override
  Widget build(BuildContext context) {
    final theme = Theme.of(context);

    return ToggleButtons(
      isSelected: [true],
      borderRadius: BorderRadius.circular(10),
      constraints: BoxConstraints.tightFor(height: 36),
      fillColor: theme.colorScheme.primary,
      selectedColor: theme.colorScheme.onPrimary,
      onPressed: (_) {},
      children: [
        Padding(
          padding: EdgeInsets.symmetric(
            vertical: 6,
            horizontal: 8,
          ),
          child: Text(valueName),
        )
      ],
    );
  }
}
