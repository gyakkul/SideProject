// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';

import 'dropdown_list_menu.dart';
import 'list_menu.dart';
import 'unreal_widget_base.dart';

class UnrealDropdownText extends UnrealWidget {
  const UnrealDropdownText({
    super.key,
    super.overrideName,
    super.enableProperties,
    required super.unrealProperties,
    this.makeItemName,
  });

  /// Optional function to convert items to a display string. If not provided, the items will be converted implicitly.
  final String Function(String enumValueName)? makeItemName;

  @override
  State<UnrealDropdownText> createState() => _UnrealDropdownTextState();
}

class _UnrealDropdownTextState extends State<UnrealDropdownText>
    with UnrealWidgetStateMixin<UnrealDropdownText, String> {
  @override
  Widget build(BuildContext context) {
    final SingleSharedValue<String> sharedValue = getSingleSharedValue();

    return DrivenDropdownText<SingleSharedValue<String>>(
      value: sharedValue,
      items: propertyEnumValues
          .map((enumValue) => SingleSharedValue(
                value: enumValue,
                bHasMultipleValues: false,
              ))
          .toList(growable: false),
      makeItemName: _makeItemName,
      onChanged: _onChanged,
    );
  }

  String? _makeItemName(SingleSharedValue<String> value) {
    if (value.bHasMultipleValues) {
      return 'Multiple Values';
    }

    if (value.value == null) {
      return null;
    }

    return value.value!;
  }

  void _onChanged(dynamic newValue) {
    assert(newValue is SingleSharedValue<String>);

    final sharedValue = newValue as SingleSharedValue<String>;

    assert(propertyEnumValues.contains(sharedValue.value));

    handleOnChangedByUser(List.filled(widget.unrealProperties.length, sharedValue.value!));
    endTransaction();
  }
}

/// Text which acts as a dropdown, but otherwise remains inline.
class DrivenDropdownText<ItemType> extends StatefulWidget {
  const DrivenDropdownText({
    Key? key,
    required this.value,
    required this.items,
    required this.onChanged,
    this.makeItemName,
  }) : super(key: key);

  /// The currently selected value.
  final ItemType value;

  /// The list of selectable items in the order in which they should be displayed.
  final List<ItemType> items;

  /// Function called when a new value is selected.
  final void Function(ItemType newValue) onChanged;

  /// Optional function to convert items to a display string. If not provided, the items will be converted implicitly.
  final String? Function(ItemType item)? makeItemName;

  @override
  State<StatefulWidget> createState() => _DrivenDropdownTextState<ItemType>();
}

class _DrivenDropdownTextState<ItemType> extends State<DrivenDropdownText<ItemType>> {
  /// Key used to identify the widget from which the dropdown originates.
  final GlobalKey dropdownOriginator = GlobalKey();

  @override
  Widget build(BuildContext context) {
    // Align the row based on text directionality, respecting the text direction.
    late final MainAxisAlignment alignment;
    switch (DefaultTextStyle.of(context).textAlign) {
      case TextAlign.start:
        alignment = MainAxisAlignment.start;
        break;

      case TextAlign.end:
        alignment = MainAxisAlignment.end;
        break;

      case TextAlign.center:
        alignment = MainAxisAlignment.center;
        break;

      case TextAlign.left:
        alignment = (Directionality.of(context) == TextDirection.ltr) ? MainAxisAlignment.start : MainAxisAlignment.end;
        break;

      case TextAlign.right:
        alignment = (Directionality.of(context) == TextDirection.ltr) ? MainAxisAlignment.end : MainAxisAlignment.start;
        break;

      default:
        alignment = MainAxisAlignment.start;
    }

    return Semantics(
      button: true,
      child: MouseRegion(
        cursor: MaterialStateMouseCursor.clickable,
        child: GestureDetector(
          onTap: _onTap,
          child: Row(
            mainAxisSize: MainAxisSize.min,
            mainAxisAlignment: alignment,
            children: [
              Flexible(
                child: Text(
                  key: dropdownOriginator,
                  _makeItemName(widget.value),
                  style: Theme.of(context).textTheme.bodyText2!.copyWith(decoration: TextDecoration.underline),
                  overflow: TextOverflow.ellipsis,
                ),
              ),
              Icon(
                Icons.arrow_drop_down_sharp,
                color: Theme.of(context).textTheme.bodyText2!.color,
                size: 18,
              )
            ],
          ),
        ),
      ),
    );
  }

  /// Called when the user taps the text.
  void _onTap() {
    DropDownListMenu.showAtWidget(
      widgetKey: dropdownOriginator,
      builder: (context) => _DropDownTextMenu(
        value: widget.value,
        items: widget.items,
        onChanged: _onValueSelected,
        makeItemName: _makeItemName,
      ),
    );
  }

  /// Convert an item to a display name, using the user-provided function if possible.
  String _makeItemName(ItemType item) {
    if (item == null) {
      return '...';
    }

    if (widget.makeItemName != null) {
      return widget.makeItemName!(item) ?? '...';
    }

    return item.toString();
  }

  /// Called when an item is selected.
  void _onValueSelected(ItemType value) {
    final navigator = Navigator.of(context, rootNavigator: true);
    navigator.pop();

    widget.onChanged(value);
  }
}

/// Drop-down menu to select a value of a [DropdownText].
class _DropDownTextMenu<ItemType> extends StatelessWidget {
  const _DropDownTextMenu({
    Key? key,
    required this.value,
    required this.items,
    required this.onChanged,
    required this.makeItemName,
  }) : super(key: key);

  /// The currently selected value.
  final ItemType? value;

  /// The list of selectable items in the order in which they should be displayed.
  final List<ItemType> items;

  /// Function called when a new value is selected.
  final void Function(ItemType newValue) onChanged;

  /// Function to convert items to a display string.
  final String Function(ItemType item) makeItemName;

  @override
  Widget build(BuildContext context) {
    return DropDownListMenu(children: [
      for (ItemType item in this.items)
        ListMenuSimpleItem(
          title: makeItemName(item),
          onTap: () => this.onChanged(item),
          bShowArrow: false,
          bIsSelected: item == value,
        ),
    ]);
  }
}
