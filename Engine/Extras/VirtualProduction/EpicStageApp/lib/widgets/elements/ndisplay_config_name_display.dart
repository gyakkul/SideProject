// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

import '../../models/settings/lightcard_tab_user_settings.dart';
import '../../models/unreal_actor_manager.dart';
import '../../models/unreal_types.dart';
import '../../utilities/constants.dart';

class NDisplayConfigNameDisplay extends StatefulWidget {
  const NDisplayConfigNameDisplay({Key? key}) : super(key: key);

  @override
  State<NDisplayConfigNameDisplay> createState() => _NDisplayConfigNameDisplayState();
}

class _NDisplayConfigNameDisplayState extends State<NDisplayConfigNameDisplay> {
  late final UnrealActorManager _actorManager;

  @override
  void initState() {
    super.initState();

    _actorManager = Provider.of<UnrealActorManager>(context, listen: false);
    _actorManager.watchClassName(nDisplayRootActorClassName, _onRootActorsUpdated);
  }

  @override
  void dispose() {
    _actorManager.stopWatchingClassName(nDisplayRootActorClassName, _onRootActorsUpdated);
    
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    final LightcardTabUserSettings userSettings = Provider.of<LightcardTabUserSettings>(context);

    final UnrealObject? rootActor = userSettings.displayClusterRootPath != null
        ? _actorManager.getActorAtPath(userSettings.displayClusterRootPath!)
        : null;
    final String friendlyName = rootActor?.name ?? '(invalid)';

    return Row(
      crossAxisAlignment: CrossAxisAlignment.center,
      children: [
        Image.asset(
          'assets/images/icons/ndisplay.png',
          height: 20,
        ),
        const SizedBox(width: 8),
        ConstrainedBox(
          constraints: const BoxConstraints(maxWidth: 200),
          child: Text(
            friendlyName,
            overflow: TextOverflow.ellipsis,
            softWrap: false,
          ),
        )
      ],
    );
  }

  void _onRootActorsUpdated(ActorUpdateDetails details) {
    if (details.renamedActors.isNotEmpty || details.addedActors.isNotEmpty) {
      // Force redraw in case we need to update the name/just got the name for an actor we were awaiting
      setState(() {});
    }
  }
}
