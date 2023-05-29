// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:math' as math;

import 'package:flutter/cupertino.dart';
import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

import '../../../models/color.dart';
import '../../../models/property_modify_operations.dart';
import '../../../utilities/math_utilities.dart';
import '../../models/settings/lightcard_tab_user_settings.dart';
import '../../utilities/unreal_colors.dart';
import '../../utilities/unreal_utilities.dart';
import 'color_slider.dart';
import 'delta_slider.dart';
import 'delta_widget_base.dart';
import 'toggle_buttons.dart';
import 'unreal_widget_base.dart';

/// Radius of a dot on the color wheel indicating a value.
const double _dotRadius = 14.0;

/// Radius of the color wheel.
const double _wheelRadius = 120;

/// Diameter of a dot on the color wheel indicating a value.
const double _dotDiameter = _dotRadius * 2;

/// Diameter of the color wheel.
const double _wheelDiameter = _wheelRadius * 2;

/// Diameter of the color wheel including extra padding needed so dots don't overflow the container when at edges.
const double _wheelAndDotDiameter = _wheelDiameter + _dotDiameter;

/// How much the controls overlaid at the top of the color wheel should be inset from the wheel's actual top point.
const double _wheelTopControlsInset = 0;

/// How much space to place between the controls overlaid at the top of the color wheel such that they won't draw over
/// the wheel itself.
const double _wheelTopControlsCenterSpaceSize = _wheelDiameter * 0.65;

typedef ColorWheelValueData = DeltaWidgetValueData<WheelColor>;

/// Settings that the user can change on a color wheel.
class ColorWheelUserSettings {
  const ColorWheelUserSettings({
    this.editMode = ColorWheelEditMode.wheel,
    this.colorMode = ColorWheelColorMode.rgb,
  });

  /// What type of color editor to display.
  final ColorWheelEditMode editMode;

  /// Which color components to display.
  final ColorWheelColorMode colorMode;
}

/// What type of color editor to display.
enum ColorWheelEditMode {
  wheel,
  sliders,
}

/// Which color components to display.
enum ColorWheelColorMode {
  rgb,
  hsv,
}

/// How to display the alpha value of a color.
enum AlphaDisplayMode {
  /// Don't let the user modify the alpha value at all.
  hide,

  /// Show the alpha value as an alpha slider.
  alpha,

  /// Show the alpha value as a luminance slider.
  luminance,
}

/// Color ranges that the user can control separately.
enum ColorGradingRange {
  global,
  shadows,
  midtones,
  highlights,
}

/// Color grading color properties that the user can control in each range.
enum ColorGradingSubproperty {
  saturation,
  contrast,
  gamma,
  gain,
  offset,
}

/// Property names for each color grading range.
const Map<ColorGradingRange, String> _colorGradingRangePropertyNames = {
  ColorGradingRange.global: 'Global',
  ColorGradingRange.shadows: 'Shadows',
  ColorGradingRange.midtones: 'Midtones',
  ColorGradingRange.highlights: 'Highlights',
};

/// Settings to use for each color grading subproperty.
const Map<ColorGradingSubproperty, ColorGradingSubpropertyConfig> _colorGradingSubpropertyConfig = {
  ColorGradingSubproperty.gain: ColorGradingSubpropertyConfig(name: 'Gain'),
  ColorGradingSubproperty.gamma: ColorGradingSubpropertyConfig(name: 'Gamma'),
  ColorGradingSubproperty.saturation: ColorGradingSubpropertyConfig(name: 'Saturation'),
  ColorGradingSubproperty.contrast: ColorGradingSubpropertyConfig(name: 'Contrast'),
  ColorGradingSubproperty.offset: ColorGradingSubpropertyConfig(
    name: 'Offset',
    minValue: -1.0,
    maxValue: 1.0,
    saturationExponent: 3.0,
  ),
};

/// Get the property name corresponding to a color grading range.
String? getColorGradingRangePropertyName(ColorGradingRange range) {
  return _colorGradingRangePropertyNames[range];
}

/// Get the configuration data corresponding to a color grading range.
ColorGradingSubpropertyConfig? getColorGradingSubpropertyConfig(ColorGradingSubproperty subproperty) {
  return _colorGradingSubpropertyConfig[subproperty];
}

/// Configuration data indicating how to display and control a color grading subproperty.
class ColorGradingSubpropertyConfig {
  const ColorGradingSubpropertyConfig({
    required this.name,
    this.minValue = 0.0,
    this.maxValue = 2.0,
    this.saturationExponent = 2.4,
  });

  /// The name of the subproperty to control.
  final String name;

  /// The minimum value of the color's components.
  final double minValue;

  /// The maximum value of the color's components.
  final double maxValue;

  /// Exponent applied to the saturation component of the wheel, making it less sensitive towards the center.
  final double saturationExponent;
}

/// A delta-based color wheel widget that controls a LinearColor property remotely in Unreal Engine.
class UnrealColorWheel extends UnrealWidget {
  const UnrealColorWheel({
    super.key,
    super.overrideName,
    required super.unrealProperties,
    this.label,
    this.onUserSettingsChanged,
    this.userSettings,
    this.bShowAlpha = true,
    this.bShowValueWithWheel = false,
  });

  /// If provided, replace the label widget with this one.
  final Widget? label;

  /// Function called when the user changes the wheel's user settings.
  final void Function(ColorWheelUserSettings)? onUserSettingsChanged;

  /// User-configurable settings for the color wheel. If not provided, the wheel will manage these settings by itself.
  final ColorWheelUserSettings? userSettings;

  /// If false, hide the alpha slider.
  final bool bShowAlpha;

  /// If false, hide the value slider when in wheel mode.
  final bool bShowValueWithWheel;

  @override
  _UnrealColorWheelState createState() => _UnrealColorWheelState();
}

class _UnrealColorWheelState extends State<UnrealColorWheel>
    with UnrealWidgetStateMixin<UnrealColorWheel, WheelColor>, _UnrealRgbaComponentSliderCreator<UnrealColorWheel> {
  @override
  List<String> get rgbaComponentNames => const ['R', 'G', 'B', 'A'];

  @override
  double? get minComponentValue => null;

  @override
  double? get maxComponentValue => null;

  @override
  PropertyModifyOperation get modifyOperation => const WheelColorAddOperation();

  @override
  Widget build(BuildContext context) {
    return DrivenColorWheel(
      wheelValues: makeValueDataList(),
      onValueChanged: handleOnChangedByUser,
      onReset: handleOnResetByUser,
      onInteractionFinished: endTransaction,
      onUserSettingsChanged: widget.onUserSettingsChanged,
      userSettings: widget.userSettings,
      label: widget.label ??
          Text(
            propertyLabel,
            textAlign: TextAlign.center,
          ),
      alphaMode: widget.bShowAlpha ? AlphaDisplayMode.alpha : AlphaDisplayMode.hide,
      createRgbaSlider: createComponentSlider,
    );
  }
}

/// A delta-based color grading wheel widget that controls a Vector4 color property remotely in Unreal Engine.
class UnrealColorGradingWheel extends UnrealWidget {
  const UnrealColorGradingWheel({
    super.key,
    super.overrideName,
    super.enableProperties,
    required super.unrealProperties,
    this.label,
    this.onUserSettingsChanged,
    this.userSettings,
    this.saturationExponent = 2.4,
    this.minValue = 0.0,
    this.maxValue = 2.0,
    this.bShowLuminance = true,
    this.bShowValueWithWheel = false,
  });

  /// If provided, replace the label widget with this one.
  final Widget? label;

  /// Function called when the user changes the wheel's user settings.
  final void Function(ColorWheelUserSettings)? onUserSettingsChanged;

  /// User-configurable settings for the color wheel. If not provided, the wheel will manage these settings by itself.
  final ColorWheelUserSettings? userSettings;

  /// Exponent applied to the saturation component of the wheel, making it less sensitive towards the center.
  final double saturationExponent;

  /// The minimum value of the color's components. The value will be clamped in this range and scaled based on the
  /// min/max range when received in the engine.
  final double minValue;

  /// The maximum value of the color's components. The value will be clamped in this range and scaled based on the
  /// min/max range when received in the engine.
  final double maxValue;

  /// If false, hide the value slider.
  final bool bShowLuminance;

  /// If false, hide the value slider when in wheel mode.
  final bool bShowValueWithWheel;

  @override
  _UnrealColorGradingWheelState createState() => _UnrealColorGradingWheelState();
}

class _UnrealColorGradingWheelState extends State<UnrealColorGradingWheel>
    with
        UnrealWidgetStateMixin<UnrealColorGradingWheel, WheelColor>,
        _UnrealRgbaComponentSliderCreator<UnrealColorGradingWheel> {
  @override
  List<String> get rgbaComponentNames => const ['X', 'Y', 'Z', 'W'];

  @override
  double? get minComponentValue => widget.minValue;

  @override
  double? get maxComponentValue => widget.maxValue;

  @override
  PropertyModifyOperation get modifyOperation => WheelColorGradingAddOperation(
        saturationExponent: widget.saturationExponent,
        minValue: widget.minValue,
        maxValue: widget.maxValue,
      );

  @override
  Map<String, dynamic>? get conversionMetadata => {
        'minValue': widget.minValue,
        'maxValue': widget.maxValue,
      };

  @override
  Widget build(BuildContext context) {
    return DrivenColorWheel(
      wheelValues: makeValueDataList(),
      onValueChanged: handleOnChangedByUser,
      onReset: handleOnResetByUser,
      onInteractionFinished: endTransaction,
      onUserSettingsChanged: widget.onUserSettingsChanged,
      userSettings: widget.userSettings,
      label: DefaultTextStyle(
        style: DefaultTextStyle.of(context).style,
        textAlign: TextAlign.center,
        child: widget.label ?? Text(propertyLabel),
      ),
      saturationExponent: widget.saturationExponent,
      minValue: widget.minValue,
      maxValue: widget.maxValue,
      alphaMode: widget.bShowLuminance ? AlphaDisplayMode.luminance : AlphaDisplayMode.hide,
      createRgbaSlider: createComponentSlider,
    );
  }
}

mixin _UnrealRgbaComponentSliderCreator<WidgetType extends UnrealWidget> on State<WidgetType> {
  /// The names of the 4 subproperties used to access color components.
  List<String> get rgbaComponentNames;

  /// The minimum value of a component slider.
  double? get minComponentValue;

  /// The maximum value of a component slider.
  double? get maxComponentValue;

  /// Create a slider that directly controls color component values. This lets us avoid converting from a
  /// Vector4/LinearColor to a WheelColor and back (which causes precision loss) and instead directly accessing the
  /// color's components by tracking subproperties of the color properties.
  Widget createComponentSlider(int componentIndex, String componentLabel) {
    return UnrealDeltaSlider(
      unrealProperties: getSubproperties(widget.unrealProperties, rgbaComponentNames[componentIndex]),
      hardMin: minComponentValue,
      hardMax: maxComponentValue,
      bShowResetButton: false,
      overrideName: componentLabel,
      enableProperties: widget.enableProperties,
    );
  }
}

/// A color wheel which supports editing multiple objects and uses delta-based modification.
/// Its values are controlled from outside of the widget itself.
class DrivenColorWheel extends StatefulWidget {
  const DrivenColorWheel({
    Key? key,
    required this.wheelValues,
    required this.onValueChanged,
    this.label,
    this.onReset,
    this.onInteractionFinished,
    this.onUserSettingsChanged,
    this.userSettings,
    this.saturationExponent = 1.0,
    this.minValue = 0.0,
    this.maxValue = 1.0,
    this.alphaMode = AlphaDisplayMode.alpha,
    this.createRgbaSlider,
  }) : super(key: key);

  /// If provided, replace the label widget with this one.
  final Widget? label;

  /// List of wheel colors for each property this widget is controlling.
  final List<ColorWheelValueData?> wheelValues;

  /// Function called when the user changes the color values.
  /// Passes the amount by which each value changed. Note that color values may be negative to indicate a decrease.
  final void Function(List<WheelColor>) onValueChanged;

  /// Function called when the user is done interacting with the widget.
  final void Function()? onInteractionFinished;

  /// Function called when the reset button is pressed. Called after the value has been reset.
  final void Function()? onReset;

  /// Function called when the user changes the wheel's user settings.
  final void Function(ColorWheelUserSettings)? onUserSettingsChanged;

  /// User-configurable settings for the color wheel. If not provided, the wheel will manage these settings by itself.
  final ColorWheelUserSettings? userSettings;

  /// Exponent applied to the saturation component of the wheel, making it less sensitive towards the center.
  final double saturationExponent;

  /// Minimum value of color's value range.
  final double minValue;

  /// Maximum value of color's value range.
  final double maxValue;

  /// How to display the color's alpha value to the user.
  final AlphaDisplayMode alphaMode;

  /// An optional function used to create the RGBA component slider widgets. If provided, changes to the sliders will
  /// not result in [onValueChanged] callbacks, so they are responsible for reporting any changes.
  /// [componentIndex] is an index into [rgbaSubpropertyNames] and [componentLabel] is the label to display on the widget.
  final Widget Function(int componentIndex, String componentLabel)? createRgbaSlider;

  @override
  _DrivenColorWheelState createState() => _DrivenColorWheelState();
}

class _DrivenColorWheelState extends State<DrivenColorWheel> with DeltaWidgetStateMixin {
  /// Labels to show for the first three components of an RGB value.
  static const List<String> _rgbComponentLabels = ['Red', 'Green', 'Blue'];

  /// User settings managed internally in case no settings are provided to the widget.
  late ColorWheelUserSettings _internalUserSettings;

  ColorWheelUserSettings get _activeUserSettings => widget.userSettings ?? _internalUserSettings;

  @override
  void initState() {
    super.initState();

    _internalUserSettings = widget.userSettings ??
        ColorWheelUserSettings(
          editMode: ColorWheelEditMode.wheel,
          colorMode: ColorWheelColorMode.hsv,
        );
  }

  @override
  void didUpdateWidget(covariant DrivenColorWheel oldWidget) {
    super.didUpdateWidget(oldWidget);

    if (oldWidget.userSettings != widget.userSettings && widget.userSettings != null) {
      setState(() {
        _internalUserSettings = widget.userSettings!;
      });
    }
  }

  @override
  Widget build(BuildContext context) {
    late final Widget mainBody; // The main content of the wheel itself
    late final List<Widget>? otherSliders; // Any other sliders we need to display under the wheel

    final double enumButtonHeight = 36;

    switch (_activeUserSettings.editMode) {
      case ColorWheelEditMode.sliders:
        final List<Widget> sliders = [];

        switch (_activeUserSettings.colorMode) {
          case ColorWheelColorMode.rgb:
            if (widget.createRgbaSlider != null) {
              // Create custom widgets for the first 3 components (R/G/B)
              for (int componentIndex = 0; componentIndex < 3; ++componentIndex) {
                sliders.add(widget.createRgbaSlider!(componentIndex, _rgbComponentLabels[componentIndex]));
              }
            } else {
              // Use sliders that convert to components from the wheel value
              sliders.addAll([
                DrivenColorRedSlider(
                  key: Key('Red'),
                  values: widget.wheelValues,
                  onChanged: widget.onValueChanged,
                  onInteractionFinished: widget.onInteractionFinished,
                  min: widget.minValue,
                  max: widget.maxValue,
                ),
                DrivenColorGreenSlider(
                  key: Key('Green'),
                  values: widget.wheelValues,
                  onChanged: widget.onValueChanged,
                  onInteractionFinished: widget.onInteractionFinished,
                  min: widget.minValue,
                  max: widget.maxValue,
                ),
                DrivenColorBlueSlider(
                  key: Key('Blue'),
                  values: widget.wheelValues,
                  onChanged: widget.onValueChanged,
                  onInteractionFinished: widget.onInteractionFinished,
                  min: widget.minValue,
                  max: widget.maxValue,
                ),
              ]);
            }

            break;

          case ColorWheelColorMode.hsv:
            sliders.addAll([
              DrivenColorHueSlider(
                key: Key('Hue'),
                values: widget.wheelValues,
                onChanged: widget.onValueChanged,
                onInteractionFinished: widget.onInteractionFinished,
                min: widget.minValue,
                max: widget.maxValue,
              ),
              DrivenColorSaturationSlider(
                key: Key('Saturation'),
                values: widget.wheelValues,
                onChanged: widget.onValueChanged,
                onInteractionFinished: widget.onInteractionFinished,
                min: widget.minValue,
                max: widget.maxValue,
              ),
              DrivenColorValueSlider(
                key: Key('Value'),
                values: widget.wheelValues,
                onChanged: widget.onValueChanged,
                onInteractionFinished: widget.onInteractionFinished,
                min: widget.minValue,
                max: widget.maxValue,
              ),
            ]);
            break;
        }

        // Add alpha/luminance slider
        final Widget? alphaSlider = _makeAlphaSlider();
        if (alphaSlider != null) {
          sliders.add(alphaSlider);
        }

        mainBody = SizedBox(
          height: _wheelAndDotDiameter,
          child: Padding(
            padding: EdgeInsets.only(bottom: 0),
            child: Column(
              mainAxisAlignment: MainAxisAlignment.end,
              children: sliders,
            ),
          ),
        );

        otherSliders = null;

        break;

      case ColorWheelEditMode.wheel:
        final List<Widget>? colorComponentWidgets = _makeColorComponentWidgets();

        mainBody = Column(children: [
          // The color wheel itself
          Stack(children: [
            _ColorWheelWheel(
              uiValues: widget.wheelValues,
              saturationExponent: widget.saturationExponent,
              onPanUpdate: _onWheelDragUpdate,
              onPanEnd: (_) => widget.onInteractionFinished?.call(),
              onPanCancel: () => widget.onInteractionFinished?.call(),
            ),
            if (colorComponentWidgets != null)
              Positioned(
                right: 0,
                bottom: 6,
                child: Wrap(
                  spacing: 6,
                  direction: Axis.vertical,
                  children: colorComponentWidgets,
                ),
              ),
          ]),
        ]);

        otherSliders = [
          DrivenDeltaSlider(
            label: 'Value',
            defaultValue: (widget.minValue + widget.maxValue) / 2,
            min: widget.minValue,
            max: widget.maxValue,
            onChanged: _handleValueSliderChanged,
            onInteractionFinished: widget.onInteractionFinished,
            values: widget.wheelValues
                .map((ColorWheelValueData? valueData) =>
                    valueData != null ? DeltaSliderValueData(value: valueData.value.value) : null)
                .toList(),
            bShowResetButton: false,
          ),
          if (widget.alphaMode == AlphaDisplayMode.luminance) _makeAlphaSlider()!,
        ];

        break;
    }

    return Column(children: [
      // Color wheel
      Stack(children: [
        mainBody,

        // Label/reset
        Padding(
          padding: const EdgeInsets.symmetric(vertical: _wheelTopControlsInset),
          child: Row(
            crossAxisAlignment: CrossAxisAlignment.center,
            children: [
              Expanded(
                child: widget.label ?? const SizedBox(),
              ),
              SizedBox(
                width: _wheelTopControlsCenterSpaceSize,
              ),
              Expanded(
                child: ResetValueButton(onPressed: widget.onReset),
              ),
            ],
          ),
        ),
      ]),

      SizedBox(height: 20),

      // Toggles
      Row(
        mainAxisAlignment: MainAxisAlignment.spaceBetween,
        children: [
          // Color mode toggle
          EnumToggleButtons(
            value: _activeUserSettings.colorMode,
            onSelected: _onColorModeChangedByUser,
            buttonConstraints: BoxConstraints.tightFor(width: 50, height: enumButtonHeight),
            valueNames: {
              ColorWheelColorMode.rgb: 'RGB',
              ColorWheelColorMode.hsv: 'HSV',
            },
          ),

          // Edit mode toggle
          EnumToggleButtons(
            value: _activeUserSettings.editMode,
            onSelected: _onEditModeChangedByUser,
            buttonConstraints: BoxConstraints.tightFor(width: 60, height: enumButtonHeight),
            valueNames: {
              ColorWheelEditMode.wheel: 'Wheel',
              ColorWheelEditMode.sliders: 'Sliders',
            },
          ),
        ],
      ),

      SizedBox(height: 40),

      if (otherSliders != null) Column(children: otherSliders),
    ]);
  }

  /// Make the alpha or luminance slider for the controlled color.
  Widget? _makeAlphaSlider() {
    if (widget.alphaMode != AlphaDisplayMode.hide) {
      final String alphaLabel = (widget.alphaMode == AlphaDisplayMode.luminance) ? 'Luminance' : 'Alpha';

      if (widget.createRgbaSlider != null) {
        return widget.createRgbaSlider!(3, alphaLabel);
      } else {
        return DrivenColorAlphaSlider(
          key: Key('Alpha'),
          label: alphaLabel,
          values: widget.wheelValues,
          onChanged: widget.onValueChanged,
          onInteractionFinished: widget.onInteractionFinished,
          min: widget.minValue,
          max: widget.maxValue,
        );
      }
    }

    return null;
  }

  /// Make a list of widgets to display the current values of the color's components.
  List<Widget>? _makeColorComponentWidgets() {
    WheelColor? currentColor = null;
    if (widget.wheelValues.length == 1 && widget.wheelValues[0] != null) {
      currentColor = widget.wheelValues[0]!.value;
    }

    if (currentColor == null) {
      return null;
    }

    late final String? alphaLetter;
    switch (widget.alphaMode) {
      case AlphaDisplayMode.alpha:
        alphaLetter = 'A';
        break;

      case AlphaDisplayMode.luminance:
        alphaLetter = 'Y';
        break;

      default:
        alphaLetter = null;
        break;
    }

    switch (_activeUserSettings.colorMode) {
      case ColorWheelColorMode.rgb:
        final FloatColor floatColor = currentColor.toFloatColor();
        return [
          _ColorComponentIndicator(
            letter: 'R',
            color: Colors.red,
            value: floatColor.red,
          ),
          _ColorComponentIndicator(
            letter: 'G',
            color: Colors.green,
            value: floatColor.green,
          ),
          _ColorComponentIndicator(
            letter: 'B',
            color: Colors.blue,
            value: floatColor.blue,
          ),
          if (alphaLetter != null)
            _ColorComponentIndicator(
              letter: alphaLetter,
              color: Colors.white,
              value: floatColor.alpha,
            ),
        ];

      case ColorWheelColorMode.hsv:
        return [
          _ColorComponentIndicator(
            letter: 'H',
            value: currentColor.hue,
            precision: 0,
          ),
          _ColorComponentIndicator(
            letter: 'S',
            value: currentColor.saturation,
          ),
          _ColorComponentIndicator(
            letter: 'V',
            value: currentColor.value,
          ),
          if (alphaLetter != null)
            _ColorComponentIndicator(
              letter: alphaLetter,
              color: Colors.white,
              value: currentColor.alpha,
            ),
        ];
    }
  }

  /// Called when the color wheel portion of the widget is dragged.
  void _onWheelDragUpdate(DragUpdateDetails details) {
    final Offset scaledDeltaOffset = details.delta * deltaMultiplier / _wheelDiameter;
    final List<WheelColor> deltaColors = List.filled(widget.wheelValues.length, WheelColor(scaledDeltaOffset, 0, 0));
    widget.onValueChanged(deltaColors);
  }

  /// Called when the user changes the value of the value slider.
  void _handleValueSliderChanged(List<double> deltaValues) {
    assert(deltaValues.length == widget.wheelValues.length);

    widget.onValueChanged(
      deltaValues
          .map(
            (delta) => WheelColor(Offset.zero, delta, 0),
          )
          .toList(growable: false),
    );
  }

  /// Called when the user changes the edit mode.
  void _onEditModeChangedByUser(ColorWheelEditMode newEditMode) {
    setState(() {
      _internalUserSettings = ColorWheelUserSettings(editMode: newEditMode, colorMode: _internalUserSettings.colorMode);
    });

    if (widget.onUserSettingsChanged != null) {
      widget.onUserSettingsChanged!(_internalUserSettings);
    }
  }

  /// Called when the user changes the color mode.
  void _onColorModeChangedByUser(ColorWheelColorMode newColorMode) {
    setState(() {
      _internalUserSettings = ColorWheelUserSettings(editMode: _internalUserSettings.editMode, colorMode: newColorMode);
    });

    if (widget.onUserSettingsChanged != null) {
      widget.onUserSettingsChanged!(_internalUserSettings);
    }
  }
}

/// The wheel portion of the color wheel widget, which maps hue and saturation onto a plane.
class _ColorWheelWheel extends StatelessWidget {
  const _ColorWheelWheel({
    required this.uiValues,
    this.onPanUpdate,
    this.onPanEnd,
    this.onPanCancel,
    required this.saturationExponent,
    Key? key,
  }) : super(key: key);

  final Function(DragUpdateDetails)? onPanUpdate;
  final Function(DragEndDetails)? onPanEnd;
  final Function()? onPanCancel;
  final List<ColorWheelValueData?> uiValues;
  final double saturationExponent;

  @override
  Widget build(BuildContext context) {
    // Create the widgets for each of the dots on the wheel
    final List<_ColorWheelValueDot> dotWidgets = [];

    for (int i = 0; i < uiValues.length; ++i) {
      if (uiValues[i] != null) {
        dotWidgets.add(_ColorWheelValueDot(
          valueData: uiValues[i]!,
          saturationExponent: saturationExponent,
          label: (uiValues.length > 1) ? (i + 1).toString() : '',
        ));
      }
    }

    // Use a clipper so we can ignore touches outside of the circle
    return Center(
      child: SizedBox(
        width: _wheelAndDotDiameter,
        height: _wheelAndDotDiameter,
        child: Stack(
          alignment: Alignment.center,
          children: [
            // Color wheel
            SizedBox(
              width: _wheelDiameter,
              height: _wheelDiameter,
              child: CustomPaint(
                painter: _ColorWheelPainter(context),
              ),
            ),

            // Value dots
            Stack(children: dotWidgets),

            // Gesture detector clipped to circle shape
            SizedBox(
              width: _wheelAndDotDiameter,
              height: _wheelAndDotDiameter,
              child: ClipOval(
                clipBehavior: Clip.hardEdge,
                clipper: _CenteredSquareClipper(),
                child: GestureDetector(
                  onPanUpdate: onPanUpdate,
                  onPanEnd: onPanEnd,
                  onPanCancel: onPanCancel,
                  behavior: HitTestBehavior.translucent,
                ),
              ),
            ),
          ],
        ),
      ),
    );
  }
}

/// Dot shown on the color wheel to indicate the value of properties being edited.
class _ColorWheelValueDot extends StatelessWidget {
  const _ColorWheelValueDot({
    required this.valueData,
    required this.saturationExponent,
    this.label = '',
    Key? key,
  }) : super(key: key);

  final String label;
  final ColorWheelValueData valueData;
  final double saturationExponent;

  @override
  Widget build(BuildContext context) {
    final Color color = valueData.value.toFloatColor().toColor();

    /// Apply the inverse of the exponent to convert our linear position to the correct position on the circle
    final Offset position = exponentiateCirclePosition(
      valueData.value.position,
      saturationExponent,
      true,
    );

    return Align(
        alignment: Alignment(position.dx, position.dy),
        child: Container(
            width: _dotDiameter,
            height: _dotDiameter,
            decoration: BoxDecoration(
              shape: BoxShape.circle,
              boxShadow: [
                BoxShadow(
                  blurRadius: 4,
                  spreadRadius: 1,
                  color: CupertinoColors.black.withOpacity(0.4),
                ),
              ],
            ),
            child: Stack(
              children: [
                SizedBox(
                  width: _dotDiameter,
                  height: _dotDiameter,
                  child: CustomPaint(
                    painter: _ColorWheelDotPainter(context, color.withOpacity(1)),
                  ),
                ),
                Align(
                  alignment: Alignment.center,
                  child: Text(
                    label,
                    textAlign: TextAlign.center,
                    style: TextStyle(
                      fontSize: 12,
                      fontWeight: FontWeight.bold,
                      color: CupertinoDynamicColor.resolve(CupertinoColors.darkBackgroundGray, context),
                    ),
                  ),
                ),
              ],
            )));
  }
}

/// Painter for the wheel image of the color wheel.
class _ColorWheelPainter extends CustomPainter {
  const _ColorWheelPainter(this.context) : super();

  final BuildContext context;

  /// Paint the wheel widget.
  @override
  void paint(Canvas canvas, Size size) {
    const int ringAlpha = 230; // Alpha value of the ring (max 255)
    const double ringWidth = 16; // Width of the gradient ring
    const double ringCrossSpace = 3; // Space between the ring and the cross inside the widget

    const SweepGradient colorWheelGradient = SweepGradient(colors: [
      Color.fromARGB(ringAlpha, 255, 0, 0),
      Color.fromARGB(ringAlpha, 255, 255, 0),
      Color.fromARGB(ringAlpha, 0, 255, 0),
      Color.fromARGB(ringAlpha, 0, 255, 255),
      Color.fromARGB(ringAlpha, 0, 0, 255),
      Color.fromARGB(ringAlpha, 255, 0, 255),
      Color.fromARGB(ringAlpha, 255, 0, 0),
    ]);

    final Rect canvasRect = Offset.zero & size;
    final double radius = math.min(size.width, size.height) / 2;
    final double ringRadius = radius - ringWidth;
    final Offset center = canvasRect.center;

    // Draw the "rainbow" ring
    final Paint gradientPaint = Paint()
      ..shader = colorWheelGradient.createShader(canvasRect)
      ..style = PaintingStyle.stroke
      ..strokeWidth = ringWidth;

    final Rect ringRect = canvasRect.inflate(-ringWidth / 2);
    canvas.drawArc(ringRect, 0, math.pi * 2, false, gradientPaint);

    // Draw the cross in the center
    final Paint crossPaint = Paint()
      ..color = CupertinoDynamicColor.resolve(CupertinoColors.systemFill, context)
      ..strokeWidth = 2
      ..style = PaintingStyle.stroke;

    final Offset xOffset = Offset(ringRadius - ringCrossSpace, 0);
    final Offset yOffset = Offset(0, ringRadius - ringCrossSpace);

    final Path crossPath = Path()
      ..addPolygon([center - xOffset, center + xOffset], false)
      ..addPolygon([center - yOffset, center + yOffset], false);

    canvas.drawPath(crossPath, crossPaint);
  }

  /// Only repaint if the widget has been replaced.
  @override
  bool shouldRepaint(covariant CustomPainter oldDelegate) {
    return oldDelegate != this;
  }
}

/// Painter for the value dots indicating a value being edited in the color wheel.
class _ColorWheelDotPainter extends CustomPainter {
  const _ColorWheelDotPainter(this.context, this.color) : super();

  final BuildContext context;
  final Color color;

  @override
  void paint(Canvas canvas, Size size) {
    const double ringWidth = 4; // Width of the colored ring
    const double ringSpace = 2; // Distance between inside of ring and background

    final Rect canvasRect = Offset.zero & size;
    final double radius = math.min(size.width, size.height) / 2;

    // Inset the inner radius slightly so the background doesn't peek out through the colored ring's anti-aliasing
    final double backgroundRadius = radius - ringWidth - ringSpace;

    // Draw the background circle
    final Paint backgroundPaint = Paint();
    backgroundPaint.color = CupertinoDynamicColor.resolve(CupertinoColors.white, context);
    canvas.drawCircle(canvasRect.center, backgroundRadius, backgroundPaint);

    // Draw the colored ring
    final Paint ringPaint = Paint()
      ..style = PaintingStyle.stroke
      ..strokeWidth = ringWidth
      ..color = color;

    final Rect ringRect = canvasRect.inflate(-ringWidth / 2);
    canvas.drawArc(ringRect, 0, math.pi * 2, false, ringPaint);
  }

  @override
  bool shouldRepaint(covariant CustomPainter oldDelegate) {
    return oldDelegate != this;
  }
}

/// A clipper that returns a square in the center of the canvas area.
class _CenteredSquareClipper extends CustomClipper<Rect> {
  @override
  getClip(Size size) {
    final double squareSize = math.min(size.width, size.height);
    return Rect.fromCenter(center: size.center(Offset.zero), width: squareSize, height: squareSize);
  }

  @override
  bool shouldReclip(covariant CustomClipper<Rect> oldClipper) {
    return this != oldClipper;
  }
}

/// Indicator for a component of the color being edited.
class _ColorComponentIndicator extends StatelessWidget {
  const _ColorComponentIndicator({
    Key? key,
    required this.letter,
    required this.value,
    this.precision = 2,
    this.color = UnrealColors.gray5,
  }) : super(key: key);

  /// The short-form letter for this color.
  final String letter;

  /// The color of the indicator's border.
  final Color color;

  /// The number of fixed digits of decimal precision.
  final int precision;

  /// The value of the color component.
  final double value;

  @override
  Widget build(BuildContext context) {
    return Row(children: [
      Text(letter),
      SizedBox(width: 6),
      Container(
        decoration: BoxDecoration(
          borderRadius: BorderRadius.circular(2),
          border: Border.all(
            color: color,
            width: 0.5,
          ),
        ),
        width: 40,
        padding: EdgeInsets.symmetric(vertical: 2),
        child: Text(
          value.toStringAsFixed(precision),
          textAlign: TextAlign.center,
        ),
      ),
    ]);
  }
}

/// Toggle button selector for the color grading range to control.
class ColorGradingRangeToggleButtons extends StatelessWidget {
  const ColorGradingRangeToggleButtons({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    final LightcardTabUserSettings userSettings = Provider.of<LightcardTabUserSettings>(context);

    return EnumToggleButtons(
      value: userSettings.colorGradingRange,
      onSelected: (newValue) => userSettings.colorGradingRange = newValue as ColorGradingRange,
      buttonConstraints: BoxConstraints.tightFor(width: 80, height: 36),
      valueNames: _colorGradingRangePropertyNames,
    );
  }
}
