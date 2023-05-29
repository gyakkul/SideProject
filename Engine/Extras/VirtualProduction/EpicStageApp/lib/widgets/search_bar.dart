// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';

import '../utilities/unreal_colors.dart';

/// A text box used to search for things by name.
class SearchBar extends StatelessWidget {
  const SearchBar({
    Key? key,
    required this.onChanged,
    this.controller,
  }) : super(key: key);

  /// Callback for when the search bar's text changes.
  final ValueChanged<String> onChanged;

  /// Controller for text editing in the search bar.
  final TextEditingController? controller;

  static const double iconSize = 20;
  static const double iconRightPadding = 4;
  static const double iconLeftPadding = 6;

  @override
  Widget build(BuildContext context) {
    final border = OutlineInputBorder(borderRadius: BorderRadius.circular(21));

    return SizedBox(
      height: 28,
      child: TextField(
        onChanged: onChanged,
        controller: controller,
        style: Theme.of(context).textTheme.bodyText2,
        textAlignVertical: TextAlignVertical.center,
        cursorColor: UnrealColors.white,
        cursorWidth: 1,
        decoration: InputDecoration(
          hintText: 'Search',
          filled: true,
          fillColor: UnrealColors.gray0,
          hoverColor: UnrealColors.gray0,
          contentPadding: const EdgeInsets.symmetric(horizontal: 4),
          border: border,
          enabledBorder: border.copyWith(borderSide: const BorderSide(style: BorderStyle.none)),
          focusedBorder: border.copyWith(borderSide: BorderSide(color: Theme.of(context).colorScheme.primary)),
          prefixIcon: Padding(
            padding: const EdgeInsets.only(left: iconLeftPadding, right: iconRightPadding),
            child: Image.asset('assets/images/icons/search.png', width: 20),
          ),
          prefixIconConstraints: const BoxConstraints(maxWidth: iconSize + iconLeftPadding + iconRightPadding),
          hintStyle: Theme.of(context).textTheme.bodyText2!.copyWith(color: UnrealColors.gray5.withOpacity(0.4)),
        ),
      ),
    );
  }
}
