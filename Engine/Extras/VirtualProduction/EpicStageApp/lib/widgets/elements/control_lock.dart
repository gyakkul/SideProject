// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';

class ControlLock extends StatefulWidget {
  const ControlLock({Key? key}) : super(key: key);

  @override
  State<ControlLock> createState() => _ControlLockState();
}

class _ControlLockState extends State<ControlLock> {
  final GlobalKey _buttonKey = GlobalKey();

  bool _bIsLocked = false;

  /// The context of the overlay shown when locked.
  BuildContext? _lockOverlayContext;

  @override
  Widget build(BuildContext context) {
    return _ControlLockButton(
      key: _buttonKey,
      bIsLocked: false,
      onPressed: _onLocked,
      bIsVisible: !_bIsLocked,
    );
  }

  void _onLocked() {
    if (_bIsLocked) {
      return;
    }

    final RenderBox? buttonBox = _buttonKey.currentContext?.findRenderObject() as RenderBox;
    if (buttonBox == null) {
      return;
    }

    showDialog(
      context: context,
      builder: (context) {
        final Offset buttonPosition = buttonBox.localToGlobal(Offset.zero);
        _lockOverlayContext = context;

        // Create the overlay
        return Material(
          color: Colors.transparent,
          surfaceTintColor: Colors.transparent,
          child: Stack(
            children: [
              Positioned(
                left: buttonPosition.dx,
                top: buttonPosition.dy,
                child: _ControlLockButton(
                  bIsLocked: true,
                  onPressed: _onUnlocked,
                ),
              ),
            ],
          ),
        );
      },
      barrierDismissible: false,
      barrierColor: const Color(0xC0000000),
    );

    setState(() {
      _bIsLocked = true;
    });
  }

  void _onUnlocked() {
    if (!_bIsLocked) {
      return;
    }

    if (_lockOverlayContext != null) {
      Navigator.of(_lockOverlayContext!).pop();
      _lockOverlayContext = null;
    }

    setState(() {
      _bIsLocked = false;
    });
  }
}

class _ControlLockButton extends StatelessWidget {
  const _ControlLockButton({
    Key? key,
    required this.onPressed,
    required this.bIsLocked,
    this.bIsVisible = true,
  }) : super(key: key);

  final Function() onPressed;
  final bool bIsLocked;
  final bool bIsVisible;

  @override
  Widget build(BuildContext context) {
    return SizedBox(
      width: 72,
      height: 40,
      child: !bIsVisible
          ? null
          : Tooltip(
              message: bIsLocked ? 'Unlock controls' : 'Lock controls',
              child: IconButton(
                constraints: const BoxConstraints.expand(),
                padding: EdgeInsets.zero,
                splashColor: Colors.transparent,
                hoverColor: Colors.transparent,
                icon: Image.asset(
                  bIsLocked ? 'assets/images/icons/locked_temp.png' : 'assets/images/icons/unlocked_temp.png',
                  height: 20,
                ),
                onPressed: onPressed,
              ),
            ),
    );
  }
}
