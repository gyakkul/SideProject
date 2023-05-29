// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';

import '../../models/property_modify_operations.dart';
import 'delta_widget_base.dart';
import 'unreal_widget_base.dart';

/// A dropdown that controls one or more enum properties in Unreal Engine.
class UnrealDropdownButton extends UnrealWidget {
  const UnrealDropdownButton({
    super.key,
    super.overrideName,
    super.enableProperties,
    required super.unrealProperties,
  });

  @override
  _UnrealDropdownButtonState createState() => _UnrealDropdownButtonState();
}

class _UnrealDropdownButtonState extends State<UnrealDropdownButton>
    with UnrealWidgetStateMixin<UnrealDropdownButton, String> {
  @override
  PropertyModifyOperation get modifyOperation => const SetOperation();

  @override
  Widget build(BuildContext context) {
    final SingleSharedValue<String> sharedValue = getSingleSharedValue();

    return Padding(
      padding: EdgeInsets.only(bottom: 4),
      child: Row(
        children: [
          const SizedBox(
            width: DeltaWidgetConstants.deltaButtonSize + DeltaWidgetConstants.widgetOuterXPadding,
          ),
          Expanded(
            child: Column(
              mainAxisAlignment: MainAxisAlignment.start,
              crossAxisAlignment: CrossAxisAlignment.start,
              children: [
                Text(propertyLabel),
                Padding(
                  padding: const EdgeInsets.symmetric(horizontal: DeltaWidgetConstants.widgetInnerXPadding),
                  child: DropdownButton<String>(
                    isExpanded: true,
                    items: [
                      for (String value in propertyEnumValues)
                        DropdownMenuItem(
                          child: Text(value),
                          value: value,
                        ),
                    ],
                    value: sharedValue.value,
                    onChanged: _onChanged,
                    hint: Text(sharedValue.bHasMultipleValues ? 'Multiple values' : ''),
                  ),
                ),
              ],
            ),
          ),
          const SizedBox(
            width: DeltaWidgetConstants.deltaButtonSize + DeltaWidgetConstants.widgetOuterXPadding,
          ),
          ResetValueButton(onPressed: handleOnResetByUser),
        ],
      ),
    );
  }

  void _onChanged(dynamic newValue) {
    assert(newValue is String);
    assert(propertyEnumValues.contains(newValue));

    handleOnChangedByUser(List.filled(widget.unrealProperties.length, newValue));
    endTransaction();
  }
}
