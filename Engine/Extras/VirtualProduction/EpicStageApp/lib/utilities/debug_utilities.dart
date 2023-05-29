// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/cupertino.dart';
import 'package:logging/logging.dart';

import '../models/navigator_keys.dart';

final _log = Logger('DebugAlert');

/// Show an alert to the user with the given message.
void showDebugAlert(String message) {
  if (rootNavigatorKey.currentContext == null) {
    return;
  }

  _log.info(message);

  showCupertinoDialog(
      context: rootNavigatorKey.currentContext!,
      builder: (context) => CupertinoAlertDialog(
            content: Text(message),
            actions: [
              CupertinoDialogAction(
                isDefaultAction: true,
                child: const Text('OK'),
                onPressed: () => Navigator.of(context).pop(),
              )
            ],
          ),
      barrierDismissible: true);
}
