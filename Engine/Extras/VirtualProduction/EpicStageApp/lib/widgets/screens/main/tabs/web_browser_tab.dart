// Copyright Epic Games, Inc. All Rights Reserved.

import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import 'package:webview_flutter/webview_flutter.dart';

import '../../../../models/engine_connection.dart';
import '../../../../utilities/net_utilities.dart';
import '../../../elements/epic_icon_button.dart';
import '../../../elements/spinner_overlay.dart';

class WebBrowserTab extends StatefulWidget {
  const WebBrowserTab({Key? key}) : super(key: key);

  static const String title = 'Web Browser';
  static const String iconPath = 'assets/images/icons/web_browser.png';

  /// The list of buttons to add to the toolbar when this tab is active.
  static List<Widget> get toolbarButtons => [const _RefreshWebBrowserButton()];

  /// Browser tabs states that are currently active in the hierarchy.
  static final Set<_WebBrowserTabState> _activeBrowserTabs = {};

  @override
  State<WebBrowserTab> createState() => _WebBrowserTabState();

  /// Refresh all active web browser tabs.
  static void refreshAll() {
    for (_WebBrowserTabState tabState in _activeBrowserTabs) {
      tabState.refresh();
    }
  }
}

class _WebBrowserTabState extends State<WebBrowserTab> {
  late final EngineConnectionManager _connectionManager;

  WebViewController? _webViewController;
  String? _initialUrl;
  String? _errorMessage;
  bool _bIsPageLoaded = false;

  @override
  void initState() {
    super.initState();

    _connectionManager = Provider.of<EngineConnectionManager>(context, listen: false);
    _attemptToConnect(bCallSetState: false);

    WebBrowserTab._activeBrowserTabs.add(this);
  }

  @override
  void activate() {
    super.activate();

    WebBrowserTab._activeBrowserTabs.add(this);
  }

  @override
  void deactivate() {
    WebBrowserTab._activeBrowserTabs.remove(this);

    super.deactivate();
  }

  @override
  void dispose() {
    WebBrowserTab._activeBrowserTabs.remove(this);

    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    if (_errorMessage != null) {
      return Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Text(_errorMessage!, textAlign: TextAlign.center),
            const SizedBox(height: 16),
            ElevatedButton(
              style: ElevatedButton.styleFrom(minimumSize: const Size(0, 50)),
              child: const Text('Attempt to Reconnect'),
              onPressed: _attemptToConnect,
            ),
          ],
        ),
      );
    }

    return Stack(
      children: [
        if (!_bIsPageLoaded) const SpinnerOverlay(),
        if (_initialUrl != null)
          Center(
            child: WebView(
              backgroundColor: Theme.of(context).colorScheme.surface,
              initialUrl: _initialUrl!,
              javascriptMode: JavascriptMode.unrestricted,
              allowsInlineMediaPlayback: true,
              onPageFinished: _onPageFinished,
              onWebViewCreated: (controller) => _webViewController = controller,
            ),
          ),
      ],
    );
  }

  /// Refresh the currently loaded page, or attempt to reconnect if not currently showing a page.
  void refresh() {
    if (_webViewController == null) {
      _attemptToConnect();
      return;
    }

    _webViewController!.reload();
  }

  /// Try the full connection process from scratch, including retrieving the URI from the engine.
  void _attemptToConnect({bool bCallSetState = true}) {
    _initialUrl = null;
    _errorMessage = null;
    _bIsPageLoaded = false;

    try {
      WebView.platform;
    } catch (e) {
      _errorMessage = 'Web browser is unsupported on this platform.';
    }

    if (_errorMessage == null) {
      _connectionManager.getLastConnectionData().then(_findBrowserURI).onError((error, stackTrace) {
        setState(() {
          _errorMessage = 'Failed to get connection data.';
        });
      });
    }

    if (bCallSetState) {
      setState(() {});
    }
  }

  /// Request the port information for the web interface from the engine and construct the URL in [_initialUrl] if
  /// found.
  void _findBrowserURI(ConnectionData? connectionData) {
    if (connectionData == null) {
      return;
    }

    if (_connectionManager.connectionState != EngineConnectionState.connected) {
      return;
    }

    const request = UnrealHttpRequest(url: '/remote/object/property', verb: 'PUT', body: {
      'objectPath': '/Script/RemoteControlCommon.Default__RemoteControlSettings',
      'propertyName': 'RemoteControlWebInterfacePort',
      'access': 'READ_ACCESS',
    });
    _connectionManager.sendHttpRequest(request).then((UnrealHttpResponse response) {
      if (response.code != 200) {
        setState(() {
          _errorMessage = 'Request for web interface port failed (error ${response.code}).';

          final String? responseError = response.body?['errorMessage'];
          if (responseError != null) {
            _errorMessage = _errorMessage! + '\n\n$responseError';
          }
        });
        return;
      }

      final int? port = response.body?['RemoteControlWebInterfacePort'];
      if (port == null) {
        setState(() {
          _errorMessage = 'Response from engine did not contain a web interface port.';
        });
        return;
      }

      setState(() {
        _initialUrl = 'http://${connectionData.websocketAddress.address}:$port';
      });
    }).onError((error, stackTrace) {
      setState(() {
        _errorMessage = 'Failed to send request for web interface port.';
      });
    });
  }

  /// Called when the web view finishes loading a page.
  void _onPageFinished(String url) {
    if (!mounted) {
      return;
    }

    setState(() {
      _bIsPageLoaded = true;
    });
  }
}

/// Button that refreshes any open browser tabs.
class _RefreshWebBrowserButton extends StatelessWidget {
  const _RefreshWebBrowserButton({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return const EpicIconButton(
      iconPath: 'assets/images/icons/refresh.png',
      tooltipMessage: 'Refresh Browser',
      onPressed: WebBrowserTab.refreshAll,
    );
  }
}
