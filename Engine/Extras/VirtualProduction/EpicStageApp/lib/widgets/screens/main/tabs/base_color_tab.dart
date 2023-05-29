// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

import '../../../../models/settings/lightcard_tab_user_settings.dart';
import '../../../../models/settings/template_tab_user_settings.dart';
import '../../../../models/unreal_types.dart';
import '../../../../utilities/unreal_utilities.dart';
import '../../../elements/color_grading_wheel.dart';
import '../../../elements/delta_slider.dart';
import '../../../elements/dropdown_text.dart';
import '../../../elements/toggle_buttons.dart';

/// Modes the base color tab can operate in.
enum BaseColorTabMode {
  /// Edit FColor properties in Unreal.
  color,

  /// Edit FVector color grading property groups in Unreal.
  colorGrading,
}

/// Names for each of the highlight color ranges.
const Map<RangeLimitType, String> _highlightRangeLimitNames = {
  RangeLimitType.min: 'Min',
  RangeLimitType.max: 'Max',
};

/// Base widget for tabs that let users change color properties.
class BaseColorTab extends StatelessWidget {
  const BaseColorTab({
    Key? key,
    required this.colorProperties,
    required this.mode,
    required this.rightSideContents,
    this.miscPropertyPrefix = '',
    this.bUseEnableProperties = false,
  }) : super(key: key);

  /// Which mode to operate in. [colorProperties] must match the appropriate type.
  final BaseColorTabMode mode;

  /// Properties for the color values to be controlled.
  final List<UnrealProperty> colorProperties;

  /// Contents of the right side column of the tab.
  final Widget rightSideContents;

  /// Prefix for miscellaneous properties of the color grading settings.
  final String miscPropertyPrefix;

  /// Whether to control the enable/override properties for each property in the tab.
  final bool bUseEnableProperties;

  /// Get the name of the highlights range property to display.
  String? _getHighlightsRangePropertyName(LightcardTabUserSettings userSettings) {
    String? rangeLimitName = _highlightRangeLimitNames[userSettings.colorGradingHighlightsRangeLimitType];
    if (rangeLimitName == null) {
      return null;
    }

    return 'Highlights$rangeLimitName';
  }

  Widget build(BuildContext context) {
    final LightcardTabUserSettings userSettings = Provider.of<LightcardTabUserSettings>(context);

    late final Widget colorWheel; // The widget used to control the color property.
    Widget? extraWheelControls = null; // Extra controls shown on top of the color wheel.
    List<Widget> miscPropertyControls = []; // Extra controls shown under the color wheel.

    switch (mode) {
      case BaseColorTabMode.color:
        colorWheel = UnrealColorWheel(
          unrealProperties: colorProperties,
          bShowAlpha: false,
          userSettings: userSettings.colorWheelUserSettings,
          onUserSettingsChanged: (newSettings) => userSettings.colorWheelUserSettings = newSettings,
          label: const SizedBox(),
        );

        extraWheelControls = const FakeToggleButton('Color');
        break;

      case BaseColorTabMode.colorGrading:
        final String rangeName = getColorGradingRangePropertyName(userSettings.colorGradingRange)!;
        final ColorGradingSubpropertyConfig subpropertyConfig =
            getColorGradingSubpropertyConfig(userSettings.colorGradingSubproperty)!;

        colorWheel = UnrealColorGradingWheel(
          unrealProperties: getSubproperties(
            colorProperties,
            '$rangeName.${subpropertyConfig.name}',
            typeNameOverride: 'FVector4_Color',
          ),
          enableProperties: bUseEnableProperties
              ? getSubproperties(colorProperties, '$rangeName.bOverride_${subpropertyConfig.name}')
              : null,
          minValue: subpropertyConfig.minValue,
          maxValue: subpropertyConfig.maxValue,
          saturationExponent: subpropertyConfig.saturationExponent,
          userSettings: userSettings.colorWheelUserSettings,
          onUserSettingsChanged: (newSettings) => userSettings.colorWheelUserSettings = newSettings,
          label: DrivenDropdownText(
            value: userSettings.colorGradingSubproperty,
            items: ColorGradingSubproperty.values,
            makeItemName: (value) =>
                (value != null ? getColorGradingSubpropertyConfig(value as ColorGradingSubproperty)?.name : null) ??
                'Unknown',
            onChanged: (value) => userSettings.colorGradingSubproperty = value as ColorGradingSubproperty,
          ),
        );

        extraWheelControls = const ColorGradingRangeToggleButtons();

        // Add widgets under the wheel based on the grading range
        switch (userSettings.colorGradingRange) {
          case ColorGradingRange.shadows:
            miscPropertyControls.add(UnrealDeltaSlider(
              overrideName: 'Shadows Max',
              unrealProperties: getSubproperties(
                colorProperties,
                '${miscPropertyPrefix}ShadowsMax',
              ),
              enableProperties: bUseEnableProperties
                  ? getSubproperties(
                      colorProperties,
                      'bOverride_${miscPropertyPrefix}ShadowsMax',
                    )
                  : null,
            ));
            break;

          case ColorGradingRange.highlights:
            final String? highlightsPropertyName = _getHighlightsRangePropertyName(userSettings);

            if (highlightsPropertyName != null) {
              miscPropertyControls.add(UnrealDeltaSlider(
                overrideName: 'Highlights',
                buildLabel: (String name) => Row(
                  mainAxisSize: MainAxisSize.min,
                  children: [
                    Text('$name ('),
                    Flexible(
                      child: DrivenDropdownText(
                        value: userSettings.colorGradingHighlightsRangeLimitType,
                        items: RangeLimitType.values,
                        makeItemName: (item) => _highlightRangeLimitNames[item] ?? '???',
                        onChanged: (RangeLimitType value) => userSettings.colorGradingHighlightsRangeLimitType = value,
                      ),
                    ),
                    Text(')'),
                  ],
                ),
                unrealProperties: getSubproperties(
                  colorProperties,
                  '${miscPropertyPrefix}$highlightsPropertyName',
                ),
                enableProperties: bUseEnableProperties
                    ? getSubproperties(
                        colorProperties,
                        'bOverride_${miscPropertyPrefix}$highlightsPropertyName',
                      )
                    : null,
              ));
            }
            break;

          default:
            break;
        }
        break;

      default:
        throw 'Invalid actor type for top widget in details panel';
    }

    return Padding(
      padding: const EdgeInsets.only(top: 12, left: 6, right: 6),
      child: Row(
        crossAxisAlignment: CrossAxisAlignment.end,
        children: [
          Expanded(
            child: Column(children: [
              // Color wheel and its extra controls
              SizedBox(
                height: 38,
                child: extraWheelControls,
              ),
              const SizedBox(height: 11),
              colorWheel,
              for (Widget widget in miscPropertyControls) widget,
            ]),
          ),

          const SizedBox(width: 10),

          // Other properties
          Expanded(child: rightSideContents),
        ],
      ),
    );
  }
}
