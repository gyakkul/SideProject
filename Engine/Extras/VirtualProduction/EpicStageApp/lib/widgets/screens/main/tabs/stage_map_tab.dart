// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

import '../../../../models/settings/lightcard_tab_user_settings.dart';
import '../../../elements/lightcard_map.dart';
import '../sidebar/main_screen_left_sidebar.dart';
import '../sidebar/outliner_panel.dart';

class StageMapTab extends StatefulWidget {
  const StageMapTab({Key? key}) : super(key: key);

  static const String title = 'Stage Map';
  static const String iconPath = 'assets/images/icons/world.png';

  @override
  State<StageMapTab> createState() => _StageMapTabState();
}

class _StageMapTabState extends State<StageMapTab> {
  @override
  void initState() {
    super.initState();
  }

  @override
  void dispose() {
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    final lightcardTab = Provider.of<LightcardTabUserSettings>(context);

    return Row(children: [
      const MainScreenLeftSidebar(),
      Expanded(
        child: Stack(
          children: [
            const StageMap(
              key: Key('StageMap'),
            ),

            // Outliner panel
            if (lightcardTab.bIsOutlinerPanelOpen)
              Positioned(
                key: Key('OutlinerPanel'),
                right: 0,
                top: 0,
                bottom: 0,
                child: const OutlinerPanel(),
              ),

            // Outliner toggle button
            Positioned(
              key: Key('OutlinerToggleButton'),
              left: 10,
              bottom: 160,
              child: SizedBox(
                width: 66,
                height: 66,
                child: FloatingActionButton(
                  child: Image.asset(
                    'assets/images/icons/outliner.png',
                    width: 20,
                  ),
                  backgroundColor: lightcardTab.bIsOutlinerPanelOpen
                      ? Theme.of(context).colorScheme.primary
                      : Theme.of(context).colorScheme.secondary,
                  onPressed: () => lightcardTab.bIsOutlinerPanelOpen = !lightcardTab.bIsOutlinerPanelOpen,
                ),
              ),
            ),
          ],
        ),
      ),
    ]);
  }
}
