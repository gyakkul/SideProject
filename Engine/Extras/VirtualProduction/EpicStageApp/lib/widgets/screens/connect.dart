// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:async';
import 'dart:io';
import 'dart:typed_data';

import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:logging/logging.dart';
import 'package:provider/provider.dart';
import 'package:web_socket_channel/web_socket_channel.dart';

import '../../models/engine_connection.dart';
import '../../utilities/debug_utilities.dart';
import '../../utilities/net_utilities.dart';
import 'main/stage_app_main_screen.dart';
import 'main/toolbar/main_screen_toolbar.dart';
import 'manual_connect.dart';

final _log = Logger('Connect');

/// A screen that uses UDP multicast to search for any local Unreal Engine instances and lists them for the user to
/// choose from.
class ConnectScreen extends StatefulWidget {
  const ConnectScreen({Key? key}) : super(key: key);

  static const String title = 'Connect to Unreal Engine';
  static const String route = '/connect';

  @override
  _ConnectScreenState createState() => _ConnectScreenState();
}

class _ConnectScreenState extends State<ConnectScreen> with WidgetsBindingObserver {
  /// The address to multicast beacon messages to.
  static final InternetAddress _multicastAddress = InternetAddress('230.0.0.2');

  /// The port to multicast beacon messages to.
  static const int _multicastPort = 6667;

  /// The rate at which to send beacon messages.
  static const Duration _beaconInterval = Duration(seconds: 1);

  /// How long to wait before considering a connection stale and pruning it from the list.
  static const Duration _connectionStaleTime = Duration(seconds: 3);

  /// The amount of time before reporting to the user that the beacon has failed to connect.
  static const Duration _beaconFailureTimeout = Duration(seconds: 5);

  RawDatagramSocket? _socket;
  Timer? _updateTimer;
  Timer? _failTimer;
  bool _bHasReportedBeaconFailure = false;
  ConnectionData? _lastConnection;

  final List<ConnectionData> _connections = [];

  /// Build the widget for a single connection.
  Widget _buildConnectionTile(ConnectionData connection) {
    return Padding(
      padding: const EdgeInsets.symmetric(vertical: 3),
      child: ListTile(
        title: Text(
          connection.name,
          style: Theme.of(context).textTheme.titleMedium,
        ),
        subtitle: Text('${connection.websocketAddress.address}:${connection.websocketPort}'),
        trailing: const Icon(Icons.chevron_right),
        onTap: () {
          _connectToEngine(connection);
        },
      ),
    );
  }

  /// Build the widget to reconnect to the last connection.
  Widget _buildReconnectTile() {
    return Padding(
      padding: const EdgeInsets.symmetric(vertical: 3),
      child: ListTile(
        title: Text(
          'Reconnect: ${_lastConnection!.name}',
          style: Theme.of(context).textTheme.titleMedium,
        ),
        subtitle: Text('${_lastConnection!.websocketAddress.address}:${_lastConnection!.websocketPort}'),
        trailing: const Icon(Icons.chevron_right),
        onTap: () {
          _connectToEngine(_lastConnection!);
        },
      ),
    );
  }

  /// Build the widget that lets the user manually connect to the engine.
  Widget _buildManualConnectTile() {
    return Padding(
      padding: const EdgeInsets.symmetric(vertical: 3),
      child: ListTile(
        title: Text(
          'Connect manually',
          style: Theme.of(context).textTheme.titleMedium,
        ),
        subtitle: const Text('Directly enter an IP address and port'),
        trailing: const Icon(Icons.chevron_right),
        onTap: () {
          Navigator.of(context, rootNavigator: true).pushNamed(ManualConnectScreen.route);
        },
      ),
    );
  }

  /// Build the widget listing all available connections.
  Widget _buildConnectionList() {
    int listLength = _connections.length + 2;
    if (_lastConnection != null) {
      listLength += 2;
    }

    return Scrollbar(
      child: ListView.builder(
        itemCount: listLength,
        itemBuilder: (context, index) {
          // Build the reconnect tile at the top of the list
          if (_lastConnection != null) {
            switch (index) {
              case 0:
                return _buildReconnectTile();

              case 1:
                return const Divider();
            }

            index -= 2;
          }

          // Build the list of active connections
          if (index < _connections.length) {
            return _buildConnectionTile(_connections[index]);
          }

          index -= _connections.length;

          // Build the manual connection tile at the bottom of the list
          switch (index) {
            case 0:
              return _connections.isNotEmpty ? const Divider() : const SizedBox();

            case 1:
              return _buildManualConnectTile();
          }

          throw Exception('itemCount was too high');
        },
      ),
    );
  }

  /// Send the beacon message.
  void _sendBeaconMessage() {
    if (_socket != null) {
      final Uint8List message = makeBeaconMessage();
      if (_socket!.send(message, _multicastAddress, _multicastPort) > 0) {
        // We successfully sent a beacon message, so we should cancel the failure message and be prepared to create a
        // new one if it starts to fail again.
        _bHasReportedBeaconFailure = false;
        _failTimer?.cancel();
      } else {
        // Socket was closed. Reopen it, and we'll try to send the beacon once it's open again.
        _stopUpdateTimer();
        _bindSocket();
      }
    }
  }

  /// Start the update timer.
  void _startUpdateTimer() {
    _stopUpdateTimer();

    // Send periodic beacons to discover any new Unreal Engine instances
    _updateTimer = Timer.periodic(_beaconInterval, _onUpdatePeriod);
  }

  /// Stop the update timer.
  void _stopUpdateTimer() {
    if (_updateTimer != null) {
      _updateTimer!.cancel();
      _updateTimer = null;
    }
  }

  /// Called on each update period.
  void _onUpdatePeriod([Timer? timer]) {
    _sendBeaconMessage();
    _pruneConnections();
  }

  /// Receive a message on the beacon socket (presumably a reply to a beacon message).
  void _receiveMessage(RawSocketEvent event) {
    final Datagram? datagram = _socket!.receive();
    if (datagram != null) {
      ConnectionData? newConnection = getConnectionFromBeaconResponse(datagram);

      if (newConnection != null) {
        _updateConnection(newConnection);
      }
    }
  }

  /// Called when an error occurs on the socket that sends beacon messages.
  void _onSocketError(Object error, StackTrace stackTrace) {
    _log.warning('Failed to send beacon message:\n$error');

    if (!_bHasReportedBeaconFailure && _failTimer == null) {
      _failTimer = Timer(_beaconFailureTimeout, _onBeaconFailure);
    }
  }

  /// Called when the beacon has failed for too long.
  void _onBeaconFailure() {
    showDebugAlert('The Epic Stage App is having trouble searching the network for Unreal Engine.\n\n'
        'Try using the "Connect manually" option.');
    _bHasReportedBeaconFailure = true;
    _failTimer = null;
  }

  /// Update the data for a new or existing connection.
  void _updateConnection(ConnectionData connectionData) {
    bool bAlreadyExisted = false;

    if (_isLastConnection(connectionData)) {
      return;
    }

    // Check if we've already seen this connection
    for (int i = 0; i < _connections.length; ++i) {
      if (_connections[i].uuid == connectionData.uuid) {
        // Refresh the connection data (including last seen time)
        setState(() {
          _connections[i] = connectionData;
        });

        bAlreadyExisted = true;
        break;
      }
    }

    setState(() {
      if (!bAlreadyExisted) {
        _connections.add(connectionData);
      }

      _connections.sort((a, b) => a.name.compareTo(b.name));
    });
  }

  /// Remove any stale connections from the list
  void _pruneConnections() {
    final DateTime now = DateTime.now();
    final List<int> toRemove = [];

    for (int i = 0; i < _connections.length; ++i) {
      if (now.difference(_connections[i].lastSeenTime) > _connectionStaleTime) {
        toRemove.add(i);
      }
    }

    setState(() {
      for (int i in toRemove.reversed) {
        _connections.removeAt(i);
      }
    });
  }

  /// Establish a connection with the engine.
  void _connectToEngine(ConnectionData connection) async {
    _log.info('Connecting to ${connection.websocketAddress.address}:${connection.websocketPort}');

    Provider.of<EngineConnectionManager>(context, listen: false).connect(connection).then((WebSocketChannel? channel) {
      if (channel == null) {
        return;
      }

      Navigator.of(context, rootNavigator: true).pushNamedAndRemoveUntil(StageAppMainScreen.route, (route) => false);
    }).onError((error, stackTrace) {
      showDebugAlert(error.toString());
    });
  }

  /// Bind the socket used for engine discovery.
  Future<void> _bindSocket() {
    if (_socket != null) {
      _socket!.close();
      _socket = null;
    }

    _stopUpdateTimer();

    return RawDatagramSocket.bind(InternetAddress.anyIPv4, 0, ttl: 4).then((newSocket) {
      newSocket.listen(_receiveMessage, onError: _onSocketError, cancelOnError: true);

      _socket = newSocket;
      _startUpdateTimer();
    }).onError((Object error, StackTrace stackTrace) {
      _onSocketError(error, stackTrace);
    });
  }

  @override
  void initState() {
    super.initState();

    WidgetsBinding.instance.addObserver(this);

    _bindSocket().then((value) {
      // If we successfully bound the socket, send an initial update so we immediately populate the list
      if (_socket != null) {
        _onUpdatePeriod();
      }
    });

    Provider.of<EngineConnectionManager>(context, listen: false)
        .getLastConnectionData()
        .then(_receiveLastConnectionData);
  }

  @override
  void dispose() {
    super.dispose();

    _stopUpdateTimer();
    WidgetsBinding.instance.removeObserver(this);
    _socket?.close();
    _failTimer?.cancel();
  }

  @override
  void didChangeAppLifecycleState(AppLifecycleState state) {
    switch (state) {
      case AppLifecycleState.resumed:
        _startUpdateTimer();
        break;

      case AppLifecycleState.paused:
      case AppLifecycleState.detached:
        // If the app is in the background, stop sending beacon messages
        _stopUpdateTimer();
        break;

      default:
        break;
    }
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text(ConnectScreen.title),
        automaticallyImplyLeading: false, // Hide the back button
        actions: [SettingsButton()],
      ),
      body: _buildConnectionList(),
    );
  }

  /// Called when the data for the last connection is loaded.
  void _receiveLastConnectionData(ConnectionData? connectionData) {
    if (connectionData != null) {
      setState(() {
        _lastConnection = connectionData;
        _connections.removeWhere((existingConnection) => _isLastConnection(existingConnection));
      });
    }
  }

  /// Check if the given [connectionData] is the last connection we made.
  bool _isLastConnection(ConnectionData connectionData) {
    // We can't compare on UUID because the engine may have restarted, so check everything else
    return _lastConnection != null &&
        connectionData.websocketAddress == _lastConnection!.websocketAddress &&
        connectionData.websocketPort == _lastConnection!.websocketPort &&
        connectionData.name == _lastConnection!.name;
  }
}
