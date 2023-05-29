// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

import '../../models/settings/lightcard_tab_user_settings.dart';
import '../../models/unreal_actor_creator.dart';
import '../../models/unreal_types.dart';
import 'dropdown_list_menu.dart';
import 'epic_icon_button.dart';
import 'list_menu.dart';
import 'template_menu.dart';

/// Drop-down menu shown to select an actor to place.
class PlaceActorDropDownMenu extends StatelessWidget {
  const PlaceActorDropDownMenu({Key? key, this.actorMapPosition}) : super(key: key);

  /// If provided, override the actor's spawn position (in coordinates normalized to the preview map's size).
  final Offset? actorMapPosition;

  @override
  Widget build(BuildContext context) {
    final UnrealActorCreator actorCreator = Provider.of<UnrealActorCreator>(context, listen: false);
    final LightcardTabUserSettings userSettings = Provider.of<LightcardTabUserSettings>(context);

    final actorSettings = ActorCreationSettings(mapPosition: actorMapPosition);

    return DropDownListMenu(
      children: [
        SizedBox(
          height: 44,
          child: Row(
            mainAxisAlignment: MainAxisAlignment.center,
            crossAxisAlignment: CrossAxisAlignment.center,
            children: [
              EpicIconButton(
                iconPath: 'assets/images/icons/light_card.png',
                tooltipMessage: 'Create Light Card',
                onPressed: () {
                  actorCreator.createLightcard(actorSettings);
                  _closeMenu(context);
                },
              ),
              EpicIconButton(
                iconPath: 'assets/images/icons/color_correct_window.png',
                tooltipMessage: 'Create Color Correction Window',
                onPressed: () {
                  actorCreator.createColorCorrectionWindow(actorSettings);
                  _closeMenu(context);
                },
              ),
              EpicIconButton(
                iconPath: 'assets/images/icons/light_card_flag.png',
                tooltipMessage: 'Create Flag',
                onPressed: () {
                  actorCreator.createFlag(actorSettings);
                  _closeMenu(context);
                },
              ),
            ],
          ),
        ),
        const ListMenuSeparator(),
        ListMenuSimpleItem(
          title: 'All Templates',
          iconPath: 'assets/images/icons/template.png',
          bShowArrow: true,
          onTap: () {
            _closeMenu(context);
            TemplatePickerMenu.show(context, actorScreenPosition: actorMapPosition);
          },
        ),
        if (userSettings.recentlyPlacedActors.isNotEmpty) const ListMenuSeparator(),
        if (userSettings.recentlyPlacedActors.isNotEmpty) const ListMenuHeader('Recently Placed'),
        for (final RecentlyPlacedActorData actorData in userSettings.recentlyPlacedActors)
          _RecentlyPlacedMenuItem(actorData, actorMapPosition: actorMapPosition),
      ],
    );
  }

  /// Close the menu.
  void _closeMenu(BuildContext context) {
    Navigator.of(context).pop();
  }
}

/// An item in the menu representing a recently placed actor type.
class _RecentlyPlacedMenuItem extends StatelessWidget {
  const _RecentlyPlacedMenuItem(this.actorData, {Key? key, this.actorMapPosition}) : super(key: key);

  /// Data about the actor to place.
  final RecentlyPlacedActorData actorData;

  /// If provided, override the actor's spawn position (in coordinates normalized to the preview map's size).
  final Offset? actorMapPosition;

  /// The path of the icon to display for this item.
  String? get _iconPath {
    if (actorData.templatePath != null) {
      return 'assets/images/icons/template.png';
    }

    switch (actorData.type) {
      case RecentlyPlacedActorType.lightCard:
        return 'assets/images/icons/light_card.png';

      case RecentlyPlacedActorType.flag:
        return 'assets/images/icons/light_card_flag.png';

      case RecentlyPlacedActorType.colorCorrectWindow:
        return 'assets/images/icons/color_correct_window.png';

      default:
        return null;
    }
  }

  @override
  Widget build(BuildContext context) {
    return ListMenuSimpleItem(
      title: actorData.name,
      iconPath: _iconPath,
      onTap: () => _createActor(context),
    );
  }

  /// Create an actor of the type indicated by this menu item.
  void _createActor(BuildContext context) {
    final UnrealActorCreator actorCreator = Provider.of<UnrealActorCreator>(context, listen: false);

    final actorSettings = ActorCreationSettings(mapPosition: actorMapPosition);

    if (actorData.templatePath != null) {
      actorCreator.createLightcard(actorSettings.copyWith(
        template: UnrealTemplateData(
          name: actorData.name,
          path: actorData.templatePath!,
        ),
      ));
    } else {
      switch (actorData.type) {
        case RecentlyPlacedActorType.lightCard:
          actorCreator.createLightcard(actorSettings);
          break;

        case RecentlyPlacedActorType.flag:
          actorCreator.createFlag(actorSettings);
          break;

        case RecentlyPlacedActorType.colorCorrectWindow:
          actorCreator.createColorCorrectionWindow(actorSettings);
          break;

        default:
          throw 'Can\'t create actor of type ${actorData.type}';
      }
    }

    _closeMenu(context);
  }

  /// Close the menu.
  void _closeMenu(BuildContext context) {
    Navigator.of(context).pop();
  }
}
