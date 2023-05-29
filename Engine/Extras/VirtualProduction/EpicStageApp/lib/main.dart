// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:async';
import 'dart:io';
import 'dart:isolate';

import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:intl/date_symbol_data_local.dart';
import 'package:logging/logging.dart';
import 'package:provider/provider.dart';

import 'models/engine_connection.dart';
import 'models/navigator_keys.dart';
import 'models/preview_render_manager.dart';
import 'models/settings/lightcard_tab_user_settings.dart';
import 'models/unreal_actor_creator.dart';
import 'models/unreal_actor_manager.dart';
import 'models/unreal_property_manager.dart';
import 'routes.dart';
import 'utilities/logging.dart';
import 'utilities/unreal_colors.dart';
import 'widgets/screens/connect.dart';

final _log = Logger('Main');

void main() async {
  await initializeDateFormatting(Platform.localeName);

  Logging.instance.initialize();

  final asyncLog = Logger('Async');
  final flutterLog = Logger('Flutter');
  final isolateLog = Logger('Isolate');

  // Catch any errors originating from or otherwise passed on by Flutter
  FlutterError.onError = (FlutterErrorDetails details) {
    flutterLog.severe(details.exception, details.exception, details.stack);
  };

  // Catch errors outside the Flutter context
  Isolate.current.addErrorListener(RawReceivePort((errorStackPair) {
    isolateLog.severe(errorStackPair.first, errorStackPair.first, StackTrace.fromString(errorStackPair.second));
  }).sendPort);

  // Catch any asynchronous errors
  runZonedGuarded(() {
    // Run the app itself
    runApp(const EpicStageApp());
  }, (error, stack) {
    asyncLog.severe(error, error, stack);
  });

  Logging.instance.cleanUp();
}

class EpicStageApp extends StatefulWidget {
  const EpicStageApp({Key? key}) : super(key: key);

  @override
  _EpicStageAppState createState() => _EpicStageAppState();
}

class _EpicStageAppState extends State<EpicStageApp> with TickerProviderStateMixin, WidgetsBindingObserver {
  // TODO: These settings only persist as long as the screen is open. They should be saved somewhere instead.
  final LightcardTabUserSettings _userSettings = LightcardTabUserSettings();

  @override
  void initState() {
    super.initState();

    _log.info('App initialized');

    WidgetsBinding.instance.addObserver(this);
  }

  @override
  void dispose() {
    WidgetsBinding.instance.removeObserver(this);

    _log.info('App disposed');

    super.dispose();
  }

  @override
  void didChangeAppLifecycleState(AppLifecycleState state) {
    super.didChangeAppLifecycleState(state);

    switch (state) {
      case AppLifecycleState.detached:
        _log.info('App detached');
        break;

      case AppLifecycleState.inactive:
        _log.info('App inactive');
        break;

      case AppLifecycleState.paused:
        _log.info('App paused');
        break;

      case AppLifecycleState.resumed:
        _log.info('App resumed');
        break;
    }
  }

  @override
  Widget build(BuildContext context) {
    // Force landscape layout on mobile devices
    SystemChrome.setPreferredOrientations([
      DeviceOrientation.landscapeLeft,
      DeviceOrientation.landscapeRight,
    ]);

    var routes = {for (var entry in RouteData.allRoutes.entries) entry.key: entry.value.createScreen};
    routes['/'] = routes[ConnectScreen.route]!;

    return Listener(
      onPointerDown: _onPointerDown,
      child: MultiProvider(
        providers: [
          Provider<EngineConnectionManager>(create: (context) => EngineConnectionManager(context)),
          Provider<UnrealPropertyManager>(create: (context) => UnrealPropertyManager(context)),
          Provider<UnrealActorManager>(create: (context) => UnrealActorManager(context)),
          ChangeNotifierProvider<LightcardTabUserSettings>(create: (_) => _userSettings),
          Provider<PreviewRenderManager>(
            create: (context) => PreviewRenderManager(context),
            dispose: (context, value) => value.dispose(),
          ),
          Provider<UnrealActorCreator>(
            create: (context) => UnrealActorCreator(context),
            dispose: (context, value) => value.dispose(),
          ),
        ],
        child: MaterialApp(
          theme: ThemeData(
            fontFamily: 'Roboto',

            // Disable Material "ink" splash effects
            splashFactory: NoSplash.splashFactory,

            scaffoldBackgroundColor: UnrealColors.gray1,
            hoverColor: Colors.transparent,
            highlightColor: Colors.transparent,

            colorScheme: const ColorScheme.dark(
              primary: UnrealColors.highlightBlue,
              secondary: Color(0xff575757),
              onPrimary: UnrealColors.white,
              onSecondary: UnrealColors.white,
              background: UnrealColors.black,
              surfaceVariant: UnrealColors.gray1,
              surface: UnrealColors.gray2,
              surfaceTint: UnrealColors.gray3,
              onSurface: UnrealColors.gray5,
              shadow: Colors.transparent,
            ),

            textButtonTheme: TextButtonThemeData(
              style: ButtonStyle(
                overlayColor: MaterialStateProperty.all(Colors.transparent),
              ),
            ),

            checkboxTheme: CheckboxThemeData(
              overlayColor: MaterialStateProperty.all(Colors.transparent),
            ),

            appBarTheme: const AppBarTheme(
              shadowColor: Colors.transparent,
            ),

            tooltipTheme: const TooltipThemeData(
              waitDuration: Duration(milliseconds: 700),
              decoration: BoxDecoration(
                image: DecorationImage(
                  image: AssetImage('assets/images/decoration/tooltip.png'),
                  centerSlice: Rect.fromLTRB(4, 4, 60, 60),
                ),
              ),
            ),

            textTheme: const TextTheme(
              bodyText2: TextStyle(
                color: UnrealColors.gray5,
                decorationColor: UnrealColors.gray5,
              ),
            ),

            listTileTheme: const ListTileThemeData(
              textColor: UnrealColors.gray5,
              iconColor: UnrealColors.gray5,
              selectedColor: UnrealColors.white,
              selectedTileColor: UnrealColors.highlightBlue,
            ),

            scrollbarTheme: const ScrollbarThemeData(
              thumbColor: MaterialStatePropertyAll(UnrealColors.gray4),
              thickness: MaterialStatePropertyAll(8),
              radius: Radius.circular(4),
            ),
          ),
          title: 'Epic Stage App',
          navigatorKey: rootNavigatorKey,
          onGenerateRoute: (RouteSettings settings) {
            Widget Function(BuildContext)? pageFunction = routes[settings.name];
            if (pageFunction != null) {
              return PageRouteBuilder(
                settings: settings,
                // Add safe area on all pages to avoid overlapping the status bar
                pageBuilder: (context, animation, secondaryAnimation) => Container(
                  color: Theme.of(context).colorScheme.background,
                  child: SafeArea(
                    left: false,
                    right: false,
                    bottom: false,
                    top: true,
                    child: pageFunction(context),
                  ),
                ),
                transitionDuration: Duration.zero,
              );
            }

            return MaterialPageRoute(builder: (_) => Text("Invalid page ${settings.name ?? "(null)"}"));
          },
        ),
      ),
    );
  }

  /// Unfocus the currently focused element if possible. This lets us close the keyboard overlay
  /// when tapping outside of it.
  void _onPointerDown(PointerDownEvent? event) {
    final FocusScopeNode currentFocus = FocusScope.of(context);

    // Flutter will throw an exception if we do this
    if (currentFocus.hasPrimaryFocus) {
      return;
    }

    currentFocus.focusedChild?.unfocus();
  }
}
