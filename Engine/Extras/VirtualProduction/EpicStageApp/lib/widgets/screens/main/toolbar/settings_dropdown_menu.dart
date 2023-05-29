// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';

import '../../../elements/dropdown_list_menu.dart';
import '../../../elements/list_menu.dart';
import '../../view_logs.dart';

/// Drop-down menu to select which settings to change.
class SettingsDropDownMenu extends StatelessWidget {
  @override
  Widget build(BuildContext context) {
    return DropDownListMenu(children: [
      ListMenuSimpleItem(
        title: 'View Logs',
        onTap: () {
          final navigator = Navigator.of(context, rootNavigator: true);
          navigator.pop();
          navigator.pushNamed(ViewLogsScreen.route);
        },
        bShowArrow: true,
      ),
    ]);
  }
}
