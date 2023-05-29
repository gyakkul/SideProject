// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:async';

import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

import '../../models/engine_connection.dart';
import '../../models/unreal_actor_creator.dart';
import '../../models/unreal_types.dart';
import '../search_bar.dart';
import 'list_menu.dart';

/// Drop-down menu shown to select a template to create an actor from.
class TemplatePickerMenu extends StatefulWidget {
  const TemplatePickerMenu({Key? key, this.actorMapPosition}) : super(key: key);

  /// If provided, override the actor's spawn position (in coordinates normalized to the preview map's size).
  final Offset? actorMapPosition;

  /// Show the template selection menu.
  static void show(
    BuildContext context, {
    Offset? actorScreenPosition,
  }) {
    showDialog(
      context: context,
      builder: (context) => TemplatePickerMenu(actorMapPosition: actorScreenPosition),
      barrierDismissible: true,
    );
  }

  @override
  State<TemplatePickerMenu> createState() => _TemplatePickerMenuState();
}

class _TemplatePickerMenuState extends State<TemplatePickerMenu> {
  /// How long to wait before showing a loading spinner.
  static const Duration _showSpinnerDelay = Duration(milliseconds: 500);

  /// Index of the currently selected template.
  int _selectedTemplateIndex = -1;

  /// Whether to show a spinner to indicate that we're waiting to receive data.
  bool _bShowSpinner = true;

  /// A timer that will show the loading spinner when it completes.
  Timer? _spinnerTimer = null;

  /// List of available templates.
  final List<UnrealTemplateData> _templates = [];

  final TextEditingController _searchTextController = TextEditingController();
  final ScrollController _scrollController = ScrollController();

  @override
  void initState() {
    super.initState();

    _fetchTemplates();

    _searchTextController.addListener(_onSearchTextChanged);
  }

  /// Called when a menu item with the given [templateIndex] is pressed.
  void _onItemPressed(int templateIndex) {
    setState(() {
      _selectedTemplateIndex = templateIndex;
    });
  }

  /// Close the menu.
  void _closeMenu() {
    Navigator.of(context).pop();
  }

  /// Place the selected template, then close the menu.
  void _placeAndClose() {
    final UnrealActorCreator actorCreator = Provider.of<UnrealActorCreator>(context, listen: false);

    if (_selectedTemplateIndex >= 0 && _selectedTemplateIndex < _templates.length) {
      final UnrealTemplateData templateData = _templates[_selectedTemplateIndex];
      actorCreator.createLightcard(ActorCreationSettings(
        template: templateData,
        mapPosition: widget.actorMapPosition,
      ));
    }

    _closeMenu();
  }

  /// Fetch the list of available templates from the engine.
  void _fetchTemplates() async {
    final EngineConnectionManager connectionManager = Provider.of<EngineConnectionManager>(context, listen: false);

    // Don't immediately show the spinner to avoid flickering, but start a timer to show it
    _spinnerTimer?.cancel();
    _spinnerTimer = Timer(_showSpinnerDelay, _showSpinner);

    final UnrealHttpResponse response = await connectionManager.sendHttpRequest(UnrealHttpRequest(
      url: '/remote/search/assets',
      verb: 'PUT',
      body: {
        'Query': _searchTextController.text,
        'Filter': {
          'ClassNames': ['/Script/DisplayClusterLightCardEditor.DisplayClusterLightCardTemplate'],
          'Limit': 100,
        },
      },
    ));

    // No need for spinner now that we've received data.
    _spinnerTimer?.cancel();

    _handleTemplatesResponse(response);

    setState(() {
      _bShowSpinner = false;
    });
  }

  /// Handle a response from the engine containing the list of templates.
  void _handleTemplatesResponse(UnrealHttpResponse response) {
    _selectedTemplateIndex = -1;
    _templates.clear();

    if (response.code != HttpResponseCode.ok) {
      return;
    }

    final dynamic assets = response.body['Assets'];
    if (assets == null || assets is! List<dynamic>) {
      return;
    }

    for (final dynamic entry in assets) {
      final String? name = entry['Name'];
      if (name == null) {
        continue;
      }

      final String? path = entry['Path'];
      if (path == null) {
        continue;
      }

      _templates.add(UnrealTemplateData(name: name, path: path));
    }
  }

  /// Called when the user's search query text has changed.
  void _onSearchTextChanged() {
    _fetchTemplates();
  }

  @override
  Widget build(BuildContext context) {
    final Widget itemsWidget;

    if (_bShowSpinner) {
      itemsWidget = Center(
        child: SizedBox.square(
          dimension: 60,
          child: CircularProgressIndicator(
            strokeWidth: 6,
          ),
        ),
      );
    } else {
      if (_templates.length == 0) {
        itemsWidget = ListMenuSimpleItem(title: 'No templates found.');
      } else {
        itemsWidget = Scrollbar(
          controller: _scrollController,
          child: ListView.builder(
            itemCount: _templates.length,
            controller: _scrollController,
            itemBuilder: (context, index) => _TemplateMenuItem(
              templateData: _templates[index],
              bIsSelected: index == _selectedTemplateIndex,
              onPressed: () => _onItemPressed(index),
            ),
          ),
        );
      }
    }

    return MediaQuery.removeViewInsets(
      context: context,
      removeLeft: true,
      removeTop: true,
      removeRight: true,
      removeBottom: true,
      child: Center(
        child: ListMenu(
          width: 360,
          children: [
            Container(
              height: defaultListMenuItemHeight,
              child: Row(
                mainAxisAlignment: MainAxisAlignment.spaceBetween,
                crossAxisAlignment: CrossAxisAlignment.stretch,
                children: [
                  _HeaderTextButton(
                    text: 'Cancel',
                    onPressed: _closeMenu,
                  ),
                  Center(
                    child: Text(
                      'All Templates',
                      style: Theme.of(context).textTheme.bodyText2!.copyWith(fontWeight: FontWeight.bold),
                    ),
                  ),
                  _HeaderTextButton(
                    text: 'Place',
                    onPressed: _placeAndClose,
                  ),
                ],
              ),
            ),
            const ListMenuSeparator(),
            Padding(
              padding: EdgeInsets.symmetric(
                horizontal: 18,
                vertical: 8,
              ),
              child: SearchBar(
                onChanged: (value) {},
                controller: _searchTextController,
              ),
            ),
            const ListMenuSeparator(),
            ConstrainedBox(
              constraints: BoxConstraints.expand(height: defaultListMenuItemHeight * 10),
              child: itemsWidget,
            ),
          ],
        ),
      ),
    );
  }

  /// Enable the spinner if safe.
  void _showSpinner() {
    if (!mounted) {
      return;
    }

    setState(() {
      _bShowSpinner = true;
    });
  }
}

/// A text-based button shown in the menu header.
class _HeaderTextButton extends StatelessWidget {
  const _HeaderTextButton({
    Key? key,
    required this.text,
    required this.onPressed,
  }) : super(key: key);

  final String text;
  final VoidCallback onPressed;

  @override
  Widget build(BuildContext context) {
    return TextButton(
      onPressed: onPressed,
      child: Text(text),
      style: ButtonStyle(
        padding: MaterialStatePropertyAll(EdgeInsets.symmetric(horizontal: 18)),
        shape: MaterialStatePropertyAll(
          RoundedRectangleBorder(
            borderRadius: BorderRadius.zero,
          ),
        ),
        foregroundColor: MaterialStatePropertyAll(Theme.of(context).textTheme.bodyText2!.color),
      ),
    );
  }
}

/// An item in the menu representing a placeable template.
class _TemplateMenuItem extends StatelessWidget {
  const _TemplateMenuItem({
    Key? key,
    required this.templateData,
    required this.bIsSelected,
    required this.onPressed,
  }) : super(key: key);

  final UnrealTemplateData templateData;
  final bool bIsSelected;
  final VoidCallback onPressed;

  @override
  Widget build(BuildContext context) {
    return ListMenuSimpleItem(
      title: templateData.name,
      iconPath: 'assets/images/icons/template.png',
      bIsSelected: bIsSelected,
      onTap: onPressed,
    );
  }
}
