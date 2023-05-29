// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/cupertino.dart';

import 'cupertino/cupertino_icon_button.dart';

class DeltaWidgetConstants {
  /// Size of icon buttons used for delta widgets.
  static const double deltaButtonIconSize = 32.0;

  /// Default horizontal padding for delta buttons.
  static const double defaultButtonXPadding = 6.0;

  /// Size of an icon button including the default padding on both sides.
  static const double deltaButtonSize = deltaButtonIconSize + defaultButtonXPadding * 2;

  /// Padding between the outer edge of a widget and its delta buttons.
  static const double widgetOuterXPadding = 10.0;

  /// Horizontal offset between a widget's label and the widget control itself.
  static const double widgetInnerXPadding = 8.0;
}

/// A button to decrease the delta multiplier.
class DecreaseDeltaMultiplierButton extends StatelessWidget {
  const DecreaseDeltaMultiplierButton(
      {this.onPressed, this.bEnabled = true, this.xPadding = DeltaWidgetConstants.defaultButtonXPadding, Key? key})
      : super(key: key);

  /// Callback for when the button is pressed.
  final Function()? onPressed;

  /// Whether the button is enabled. If false, events won't be called and the app_icon will be greyed out.
  final bool bEnabled;

  /// Padding along the x-axis on either side.
  final double? xPadding;

  @override
  Widget build(BuildContext context) {
    return CupertinoIconButton(
      onPressed: onPressed,
      bEnabled: bEnabled,
      icon: CupertinoIcons.chevron_down,
      description: 'Adjust slower',
      xPadding: xPadding,
      iconSize: DeltaWidgetConstants.deltaButtonIconSize,
    );
  }
}

/// A button to increase the delta multiplier.
class IncreaseDeltaMultiplierButton extends StatelessWidget {
  const IncreaseDeltaMultiplierButton(
      {this.onPressed, this.bEnabled = true, this.xPadding = DeltaWidgetConstants.defaultButtonXPadding, Key? key})
      : super(key: key);

  /// Callback for when the button is pressed.
  final Function()? onPressed;

  /// Whether the button is enabled. If false, events won't be called and the app_icon will be greyed out.
  final bool bEnabled;

  /// Padding along the x-axis on either side.
  final double? xPadding;

  @override
  Widget build(BuildContext context) {
    return CupertinoIconButton(
      onPressed: onPressed,
      bEnabled: bEnabled,
      icon: CupertinoIcons.chevron_up,
      description: 'Adjust faster',
      xPadding: xPadding,
      iconSize: DeltaWidgetConstants.deltaButtonIconSize,
    );
  }
}

/// A button to reset the value controlled by a widget.
class ResetValueButton extends StatelessWidget {
  const ResetValueButton(
      {this.onPressed, this.bEnabled = true, this.xPadding = DeltaWidgetConstants.defaultButtonXPadding, Key? key})
      : super(key: key);

  /// Callback for when the button is pressed.
  final Function()? onPressed;

  /// Whether the button is enabled. If false, events won't be called and the app_icon will be greyed out.
  final bool bEnabled;

  /// Padding along the x-axis on either side.
  final double? xPadding;

  @override
  Widget build(BuildContext context) {
    return CupertinoIconButton(
      color: CupertinoDynamicColor.resolve(CupertinoColors.destructiveRed, context),
      onPressed: onPressed,
      bEnabled: bEnabled,
      icon: CupertinoIcons.arrow_counterclockwise_circle,
      description: 'Reset',
      xPadding: xPadding,
      iconSize: DeltaWidgetConstants.deltaButtonIconSize,
    );
  }
}

/// Mixin that adds state for any widgets that use delta-based controls.
mixin DeltaWidgetStateMixin<T extends StatefulWidget> on State<T> {
  /// Additional multipliers applied to the scroll delta. When the user presses the slower/faster buttons, they
  /// decrement/increment the index into this list.
  static const List<double> _deltaMultiplierScalars = [0.25, 0.5, 1.0, 2.0, 4.0];

  /// Base scroll rate of a value (generally multiplied by the gesture's delta movement divided the widget's size).
  /// Override this to change the base scroll rate for a widget.
  double get baseDeltaMultiplier => 0.4;

  /// The effective multiplier, combining the base rate and any other scalars.
  double get deltaMultiplier => baseDeltaMultiplier * _deltaMultiplierScalars[_deltaMultiplierScalarIndex];

  /// Whether the delta multiplier can be decreased any further.
  bool get bCanDecreaseDeltaMultiplier => _deltaMultiplierScalarIndex > 0;

  /// Whether the delta multiplier can be increased any further.
  bool get bCanIncreaseDeltaMultiplier => _deltaMultiplierScalarIndex < _deltaMultiplierScalars.length - 1;

  /// The currently selected index into _deltaMultiplierScalars.
  int _deltaMultiplierScalarIndex = 3;

  /// Call this when the user decreases the adjustment speed multiplier.
  void decreaseDeltaMultiplier() {
    setState(() {
      _deltaMultiplierScalarIndex = (_deltaMultiplierScalarIndex - 1).clamp(0, _deltaMultiplierScalars.length - 1);
    });
  }

  /// Call this when the user increases the adjustment speed multiplier.
  void increaseDeltaMultiplier() {
    setState(() {
      _deltaMultiplierScalarIndex = (_deltaMultiplierScalarIndex + 1).clamp(0, _deltaMultiplierScalars.length - 1);
    });
  }
}

/// Data needed to display a control representing a single object's property on a delta-based widget.
class DeltaWidgetValueData<T> {
  const DeltaWidgetValueData({required this.value});

  /// The value the dot represents.
  final T value;
}
