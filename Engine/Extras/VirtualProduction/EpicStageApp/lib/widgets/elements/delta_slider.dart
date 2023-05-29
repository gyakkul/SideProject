// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:math' as math;

import 'package:flutter/cupertino.dart';

import 'cupertino/cupertino_icon_button.dart';
import 'delta_widget_base.dart';
import 'unreal_widget_base.dart';

const double _dotSize = 18.0;
const double _trackPadding = DeltaWidgetConstants.widgetOuterXPadding + DeltaWidgetConstants.widgetInnerXPadding;
const double _trackHeight = 4.0;

typedef DeltaSliderValueData = DeltaWidgetValueData<double>;

/// A delta-based slider widget that controls a property remotely in Unreal Engine.
class UnrealDeltaSlider extends UnrealWidget {
  const UnrealDeltaSlider({
    super.key,
    super.overrideName,
    super.minMaxBehaviour,
    super.enableProperties,
    required super.unrealProperties,
    this.buildLabel,
    this.softMin,
    this.softMax,
    this.hardMin,
    this.hardMax,
    this.steps,
    this.bShowResetButton = true,
  });

  /// If provided, call this function to build the widget displayed as the slider's label. Otherwise, the label will be
  /// automatically generated.
  final Widget Function(String name)? buildLabel;

  /// If provided, ignore the engine-provided minimum value for the property and use this instead for display.
  /// Note that this changes the min value displayed on the slider, but the user can continue sliding to reach lower
  /// values.
  final double? softMin;

  /// If provided, ignore the engine-provided maximum value for the property and use this instead for display.
  /// Note that this changes the max value displayed on the slider, but the user can continue sliding to reach higher
  /// values.
  final double? softMax;

  /// If provided, ignore the engine-provided minimum value for the property and use this instead for clamping.
  /// This changes both the max value displayed on the slider and prevents sliding past this value.
  final double? hardMin;

  /// If provided, ignore the engine-provided maximum value for the property and use this instead for clamping.
  /// This changes both the max value displayed on the slider and prevents sliding past this value.
  final double? hardMax;

  /// If provided, buttons will be added on either side of the widget which decrease/increase the value by the amounts
  /// passed here. These should be positive values in ascending order.
  final List<double>? steps;

  /// If true, show the reset button.
  final bool bShowResetButton;

  @override
  _UnrealDeltaSliderState createState() => _UnrealDeltaSliderState();
}

class _UnrealDeltaSliderState extends State<UnrealDeltaSlider> with UnrealWidgetStateMixin<UnrealDeltaSlider, double> {
  @override
  double? get overrideMin => widget.hardMin ?? engineMin;

  @override
  double? get overrideMax => widget.hardMax ?? engineMax;

  @override
  Widget build(BuildContext context) {
    return DrivenDeltaSlider(
      values: makeValueDataList(),
      bShowResetButton: widget.bShowResetButton,
      onChanged: handleOnChangedByUser,
      onReset: handleOnResetByUser,
      onInteractionFinished: endTransaction,
      onStepButtonPressed: _onStepButtonPressed,
      min: widget.softMin ?? widget.hardMin ?? engineMin,
      max: widget.softMax ?? widget.hardMax ?? engineMax,
      label: propertyLabel,
      buildLabel: widget.buildLabel,
      steps: widget.steps,
    );
  }

  /// Called when a step button is pressed.
  void _onStepButtonPressed(double stepSize) {
    if (beginTransaction('Adjust $propertyLabel by $stepSize')) {
      final List<double> deltaValues = List.filled(propertyCount, stepSize);
      handleOnChangedByUser(deltaValues);

      endTransaction();
    }
  }
}

/// A DeltaSlider whose values are controlled from outside of the widget itself.
class DrivenDeltaSlider extends StatefulWidget {
  const DrivenDeltaSlider({
    Key? key,
    required this.values,
    required this.onChanged,
    this.label = '',
    this.buildLabel,
    this.min = 0.0,
    this.max = 1.0,
    this.bShowResetButton = true,
    this.defaultValue,
    this.onReset,
    this.onStepButtonPressed,
    this.onInteractionFinished,
    this.steps,
  }) : super(key: key);

  /// Values to display on the slider.
  final List<DeltaSliderValueData?> values;

  /// Name of the property this widget controls.
  final String label;

  /// If provided, call this function to build the widget displayed as the slider's label. Otherwise, the label will be
  /// automatically generated.
  final Widget Function(String name)? buildLabel;

  /// Minimum value the user can select.
  final double? min;

  /// Maximum value the user can select.
  final double? max;

  /// If true, show the reset button.
  final bool bShowResetButton;

  /// Default value to reset to when the reset button is pressed.
  final double? defaultValue;

  /// Function called when the reset button is pressed. Called after the value has been reset.
  final void Function()? onReset;

  /// Function called when a step button is pressed. Passes the size of the step.
  final void Function(double stepSize)? onStepButtonPressed;

  /// Function called when the user is done interacting with the widget.
  final void Function()? onInteractionFinished;

  /// Function called when the user changes the value of the slider.
  /// Passes the amount by which each value changed.
  final void Function(List<double>) onChanged;

  /// If provided, buttons will be added on either side of the widget which decrease/increase the value by the amounts
  /// passed here. These should be positive values in ascending order.
  final List<double>? steps;

  @override
  _DrivenDeltaSliderState createState() => _DrivenDeltaSliderState();
}

class _DrivenDeltaSliderState extends State<DrivenDeltaSlider> with DeltaWidgetStateMixin {
  /// How long the min/max labels take to fade in/out.
  static const _minMaxFadeDuration = Duration(milliseconds: 100);

  bool _bIsBeingDragged = false;

  /// Get the slider's minimum value.
  /// If the widget has a set minimum, return it. Otherwise, default to a minimum of 0, but extend the minimum to match
  /// the lowest controlled value.
  double get _min {
    if (widget.min != null) {
      return widget.min!;
    }

    double minValue = 0.0;
    for (final DeltaSliderValueData? valueData in widget.values) {
      if (valueData != null) {
        minValue = math.min(valueData.value, minValue);
      }
    }

    return minValue;
  }

  /// Get the slider's maximum value.
  /// If the widget has a set maximum, return it. Otherwise, default to a maximum of 1, but extend the maximum to match
  /// the highest controlled value.
  double get _max {
    if (widget.max != null) {
      return widget.max!;
    }

    double maxValue = 1.0;
    for (final DeltaSliderValueData? valueData in widget.values) {
      if (valueData != null) {
        maxValue = math.max(valueData.value, maxValue);
      }
    }

    return maxValue;
  }

  double get _valueSpan => _max - _min;

  TextStyle get labelStyle => TextStyle(
        color: CupertinoDynamicColor.resolve(CupertinoColors.inactiveGray, context),
        fontSize: 13,
      );

  @override
  Widget build(BuildContext context) {
    final String? valueString =
        (widget.values.length == 1 && widget.values[0] != null) ? _getStringForValue(widget.values[0]!.value) : null;

    // Build the list of slider values to pass to the slider widget
    final List<_DeltaSliderUIValue> uiValues = [];
    for (final DeltaSliderValueData? valueData in widget.values) {
      if (valueData != null) {
        uiValues.add(_DeltaSliderUIValue(valueData: valueData, normalizedValue: _getNormalizedValue(valueData.value)));
      }
    }

    final List<Widget> leftStepButtons = [];
    final List<Widget> rightStepButtons = [];

    if (widget.steps != null && widget.onStepButtonPressed != null) {
      for (int stepIndex = 0; stepIndex < widget.steps!.length; ++stepIndex) {
        final double stepSize = widget.steps![stepIndex];

        leftStepButtons.insert(
            0,
            _DeltaSliderStepButton(
              index: stepIndex,
              stepSize: -stepSize,
              propertyLabel: widget.label,
              onPressed: widget.onStepButtonPressed!,
            ));

        rightStepButtons.add(_DeltaSliderStepButton(
          index: stepIndex,
          stepSize: stepSize,
          propertyLabel: widget.label,
          onPressed: widget.onStepButtonPressed!,
        ));
      }
    }

    return Padding(
      padding: const EdgeInsets.only(bottom: 3),
      child: Row(children: [
        Expanded(
          child: Column(children: [
            Row(children: [
              DecreaseDeltaMultiplierButton(bEnabled: bCanDecreaseDeltaMultiplier, onPressed: decreaseDeltaMultiplier),

              // Main slider
              Expanded(
                child: GestureDetector(
                  onHorizontalDragStart: _onDragStart,
                  onHorizontalDragUpdate: _onDragUpdate,
                  onHorizontalDragEnd: (_) => _onDragEnd(),
                  onHorizontalDragCancel: _onDragEnd,
                  behavior: HitTestBehavior.opaque,
                  child: Column(
                    children: [
                      // Labels
                      Padding(
                        padding: const EdgeInsets.symmetric(horizontal: DeltaWidgetConstants.widgetOuterXPadding),
                        child: ConstrainedBox(
                          constraints: BoxConstraints.tightForFinite(),
                          child: Row(
                            mainAxisAlignment: MainAxisAlignment.spaceBetween,
                            children: [
                              Expanded(child: _buildLabel(widget.label)),
                              if (valueString != null)
                                Padding(
                                  padding: EdgeInsets.only(left: 6),
                                  child: Text(valueString),
                                ),
                            ],
                          ),
                        ),
                      ),

                      const SizedBox(height: 2),

                      // Slider
                      _DeltaSliderSlider(uiValues),

                      // Min/max labels
                      AnimatedOpacity(
                        opacity: _bIsBeingDragged ? 1 : 0,
                        duration: _minMaxFadeDuration,
                        child: Padding(
                          padding: const EdgeInsets.only(
                            top: 2,
                            left: DeltaWidgetConstants.widgetOuterXPadding,
                            right: DeltaWidgetConstants.widgetOuterXPadding,
                          ),
                          child: Row(
                            mainAxisAlignment: MainAxisAlignment.spaceBetween,
                            children: [
                              Text(_getStringForValue(_min), style: labelStyle),
                              Text(_getStringForValue(_max), style: labelStyle),
                            ],
                          ),
                        ),
                      ),
                    ],
                  ),
                ),
              ),

              IncreaseDeltaMultiplierButton(bEnabled: bCanIncreaseDeltaMultiplier, onPressed: increaseDeltaMultiplier),
            ]),
            if (widget.steps?.isNotEmpty == true)
              Row(children: [
                for (final Widget stepButton in leftStepButtons) stepButton,
                const Spacer(),
                for (final Widget stepButton in rightStepButtons) stepButton,
              ]),
          ]),
        ),
        if (widget.bShowResetButton)
          Center(
            child: ResetValueButton(onPressed: widget.onReset),
          ),
      ]),
    );
  }

  /// Normalize a controlled value to the actual range of the slider.
  double _getNormalizedValue(double value) {
    return ((value - _min) / _valueSpan).clamp(0, 1);
  }

  /// Format a value on the slider as a string for display to the user.
  String _getStringForValue(double value) {
    return value.toStringAsFixed(2);
  }

  /// Called when the user starts dragging on the slider.
  void _onDragStart(DragStartDetails details) {
    setState(() {
      _bIsBeingDragged = true;
    });
  }

  /// Called when the user drags on the slider.
  void _onDragUpdate(DragUpdateDetails details) {
    final double delta = details.primaryDelta! * _valueSpan * deltaMultiplier / (context.size?.width ?? 1.0);
    final List<double> deltaValues = List.filled(widget.values.length, delta);
    widget.onChanged(deltaValues);
  }

  /// Called when the user stops dragging on the slider.
  void _onDragEnd() {
    widget.onInteractionFinished?.call();
    setState(() {
      _bIsBeingDragged = false;
    });
  }

  /// Build the widget to display as the slider's label.
  Widget _buildLabel(String name) {
    if (widget.buildLabel != null) {
      return widget.buildLabel!(name);
    }

    return Text(name);
  }
}

/// The interactive slider within the slider widget.
class _DeltaSliderSlider extends StatelessWidget {
  const _DeltaSliderSlider(this.uiValues, {Key? key}) : super(key: key);

  final List<_DeltaSliderUIValue> uiValues;

  @override
  Widget build(BuildContext context) {
    List<_DeltaSliderValueDot> dots;

    if (uiValues.isNotEmpty) {
      dots = [
        for (int i = 0; i < uiValues.length; ++i)
          _DeltaSliderValueDot(
            uiValues[i],
            // If there's only one dot, we don't need a label
            label: (uiValues.length > 1) ? (i + 1).toString() : '',
          ),
      ];
    } else {
      // If there are no values, show a single disabled dot
      dots = [
        const _DeltaSliderValueDot(
          _DeltaSliderUIValue(valueData: DeltaSliderValueData(value: 0.0), normalizedValue: 0.5),
          bIsEnabled: false,
        )
      ];
    }

    return Column(mainAxisSize: MainAxisSize.min, children: [
      Stack(alignment: Alignment.center, children: <Widget>[
        Padding(
          padding: const EdgeInsets.symmetric(horizontal: _trackPadding),
          child: Container(
            height: _trackHeight,
            decoration: BoxDecoration(
                color: CupertinoDynamicColor.resolve(CupertinoColors.systemFill, context),
                borderRadius: BorderRadius.circular(_trackHeight)),
          ),
        ),
        Padding(
          padding: const EdgeInsets.symmetric(horizontal: _trackPadding - (_dotSize / 2.0)),
          child: Stack(children: dots),
        ),
      ])
    ]);
  }
}

/// Dots shown on the slider track to indicate the value of properties being edited.
class _DeltaSliderValueDot extends StatelessWidget {
  const _DeltaSliderValueDot(this.value, {this.bIsEnabled = true, this.label = '', Key? key}) : super(key: key);

  final bool bIsEnabled;
  final String label;
  final _DeltaSliderUIValue value;

  @override
  Widget build(BuildContext context) {
    final Color color = bIsEnabled ? CupertinoColors.white : CupertinoColors.inactiveGray;

    return Align(
        alignment: Alignment(value.normalizedValue * 2.0 - 1.0, 0.0),
        child: Container(
          width: _dotSize,
          height: _dotSize,
          alignment: Alignment.center,
          decoration: BoxDecoration(
            shape: BoxShape.circle,
            color: CupertinoDynamicColor.resolve(color, context),
            boxShadow: [
              BoxShadow(
                blurRadius: 4,
                spreadRadius: 1,
                color: CupertinoColors.black.withOpacity(0.4),
              ),
            ],
          ),
          child: Text(
            label,
            style: TextStyle(
                fontSize: 12,
                fontWeight: FontWeight.bold,
                color: CupertinoDynamicColor.resolve(CupertinoColors.darkBackgroundGray, context)),
          ),
        ));
  }
}

/// Represents a value displayed on the delta slider in a format easier to use for UI purposes.
class _DeltaSliderUIValue {
  const _DeltaSliderUIValue({required this.valueData, required this.normalizedValue});

  /// The value of the dot.
  final DeltaSliderValueData valueData;

  /// The value of the dot normalized to the slider's range.
  final double normalizedValue;
}

/// A button to apply an increase/decrease in value.
class _DeltaSliderStepButton extends StatelessWidget {
  const _DeltaSliderStepButton({
    Key? key,
    required this.index,
    required this.stepSize,
    required this.onPressed,
    this.propertyLabel,
  }) : super(key: key);

  /// The index into the array of step values.
  final int index;

  /// The actual size of the step that will be passed in [onPressed].
  final double stepSize;

  /// The label of the property this is modifying.
  final String? propertyLabel;

  /// Callback for when the button is pressed. Passes the size of the step.
  final void Function(double stepSize) onPressed;

  IconData get _icon {
    switch (index) {
      case 0:
        return stepSize.isNegative ? CupertinoIcons.chevron_left : CupertinoIcons.chevron_right;

      case 1:
        return stepSize.isNegative ? CupertinoIcons.chevron_left_2 : CupertinoIcons.chevron_right_2;

      case 2:
        return stepSize.isNegative ? CupertinoIcons.backward_fill : CupertinoIcons.forward_fill;
    }

    throw Exception('No icon available for step index $index');
  }

  @override
  Widget build(BuildContext context) {
    return CupertinoIconButton(
      onPressed: () => onPressed(stepSize),
      icon: _icon,
      description: '${propertyLabel ?? 'Value'} ${stepSize > 0 ? '+' : ''}$stepSize',
      xPadding: DeltaWidgetConstants.defaultButtonXPadding,
      iconSize: DeltaWidgetConstants.deltaButtonIconSize,
    );
  }
}
