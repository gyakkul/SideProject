// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/widgets.dart';

import 'widgets/screens/connect.dart';
import 'widgets/screens/main/stage_app_main_screen.dart';
import 'widgets/screens/manual_connect.dart';
import 'widgets/screens/view_logs.dart';

/// Contains data about a route in the app
class RouteData {
  const RouteData({required this.title, required this.createScreen});

  /// The title of the route as shown to the user.
  final String title;

  /// A function to create the screen widget for the route.
  final Widget Function(BuildContext context) createScreen;

  /// A list of all routes in the app.
  static final Map<String, RouteData> allRoutes = {
    ConnectScreen.route: RouteData(
      title: ConnectScreen.title,
      createScreen: (context) => const ConnectScreen(),
    ),
    ManualConnectScreen.route: RouteData(
      title: ManualConnectScreen.title,
      createScreen: (context) => const ManualConnectScreen(),
    ),
    StageAppMainScreen.route: RouteData(
      title: StageAppMainScreen.title,
      createScreen: (context) => const StageAppMainScreen(),
    ),
    ViewLogsScreen.route: RouteData(
      title: ViewLogsScreen.title,
      createScreen: (context) => const ViewLogsScreen(),
    ),
  };
}

final Map<String, String> routes = {};
