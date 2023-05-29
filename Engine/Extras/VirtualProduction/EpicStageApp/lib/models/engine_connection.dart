// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:async';
import 'dart:convert';
import 'dart:io';

import 'package:flutter/cupertino.dart';
import 'package:logging/logging.dart';
import 'package:shared_preferences/shared_preferences.dart';
import 'package:uuid/uuid.dart';
import 'package:web_socket_channel/io.dart';
import 'package:web_socket_channel/web_socket_channel.dart';

import './navigator_keys.dart';
import '../utilities/debug_utilities.dart';
import '../utilities/net_utilities.dart';
import '../utilities/unreal_utilities.dart';
import '../widgets/screens/connect.dart';

final _log = Logger('EngineConnection');

/// The state of a connection to Unreal Engine.
enum EngineConnectionState {
  connected,
  disconnected,
}

/// HTTP response codes
class HttpResponseCode {
  static const int ok = 200;
}

/// Callback type for a WebSocket message. Passes dynamic JSON data parsed from the message.
typedef WebSocketMessageCallback = void Function(dynamic message);

/// Callback for changes to the state of the engine connection.
typedef ConnectionStateCallback = void Function(EngineConnectionState connectionState);

/// An HTTP request in the format required by Unreal Engine.
class UnrealHttpRequest {
  const UnrealHttpRequest({required this.url, required this.verb, this.body});

  final String url;
  final String verb;
  final dynamic body;
}

/// An HTTP response received from Unreal Engine.
class UnrealHttpResponse {
  const UnrealHttpResponse({required this.requestId, required this.code, required this.body});

  final int requestId;
  final int code;
  final dynamic body;
}

/// An HTTP request to the engine and an associated callback function which will be automatically called when a response
/// is received.
class UnrealHttpRequestWithCallback {
  const UnrealHttpRequestWithCallback(this.request, this.callback);

  final UnrealHttpRequest request;
  final Function(dynamic response) callback;
}

/// Holds the state of the app's connection to the engine and notifies when the connection changes.
class EngineConnectionManager {
  EngineConnectionManager(this.context) {
    _loadLastConnectionIfNone();
  }

  final BuildContext context;

  /// The data for the last active connection.
  ConnectionData? _lastConnectionData;

  /// The websocket channel we currently have open to the engine.
  IOWebSocketChannel? _webSocketChannel;

  /// Map from message type to callback functions for when the message type is received.
  final Map<String, List<WebSocketMessageCallback>> _messageCallbacks = {};

  /// Callbacks for whenever the connection state changes.
  final List<ConnectionStateCallback> _connectionStateCallbacks = [];

  /// Map from waiting request ID to the completer to complete when the corresponding response is received.
  final Map<int, Completer<UnrealHttpResponse>> _httpResponseCompleters = {};

  /// The last request ID we used.
  int _lastRequestId = 0;

  /// The current state of the connection to the engine.
  EngineConnectionState _internalConnectionState = EngineConnectionState.disconnected;

  /// Get the current state of the connection to the engine.
  EngineConnectionState get connectionState => _internalConnectionState;

  /// The current subscription to stream events from the connection.
  StreamSubscription? _connectionSubscription;

  /// Set the current state of the connection to the engine.
  set _connectionState(EngineConnectionState state) {
    _internalConnectionState = state;

    for (ConnectionStateCallback callback in _connectionStateCallbacks) {
      callback(state);
    }
  }

  /// Get the last engine connection we connected to, either in this session or a previous one.
  Future<ConnectionData?> getLastConnectionData() {
    if (_lastConnectionData != null) {
      return Future.value(_lastConnectionData);
    }

    return _loadLastConnectionIfNone();
  }

  /// Try to connect with the given connection data.
  Future<WebSocketChannel?> connect(ConnectionData connectionData) async {
    // Close the existing connection
    if (connectionState == EngineConnectionState.connected) {
      _onWebSocketStreamClosed(bWasExpected: true, bShouldReturnToConnectScreen: false);
    }

    _lastConnectionData = connectionData;
    _webSocketChannel = null;

    final String address = 'ws://${connectionData.websocketAddress.address}:${connectionData.websocketPort.toString()}';
    WebSocket? webSocket;

    // Try to connect
    try {
      webSocket = await WebSocket.connect(address).timeout(const Duration(seconds: 3));
    } catch (error) {
      return Future.error('Failed to connect to WebSocket server at $address: ' + error.toString());
    }

    // Set up the websocket channel
    _webSocketChannel = IOWebSocketChannel(webSocket);
    _connectionSubscription = _webSocketChannel!.stream.listen(
      _onMessageReceived,
      onError: _onWebSocketError,
      onDone: _onWebSocketStreamClosed,
    );

    _connectionState = EngineConnectionState.connected;

    _saveLastConnection(connectionData);

    return _webSocketChannel;
  }

  /// Try to reconnect to the last connection.
  Future<WebSocketChannel?> reconnect() async {
    if (_lastConnectionData != null) {
      return connect(_lastConnectionData!);
    } else {
      return Future.error('Could not reconnect as there was no previous connection');
    }
  }

  /// Disconnect from the engine.
  void disconnect() {
    if (_webSocketChannel != null) {
      _webSocketChannel!.sink.close();
      _connectionSubscription?.cancel();
      _onWebSocketStreamClosed(bWasExpected: true, bShouldReturnToConnectScreen: true);
    }
  }

  /// Send a message via the current WebSocket connection in standard Unreal WebSocket format.
  void sendMessage(String messageName, Object parameters) {
    if (connectionState != EngineConnectionState.connected) {
      return;
    }

    sendRawMessage(createUnrealWebSocketMessage(messageName, parameters));
  }

  /// Send a batch of messages as a single message via the current WebSocket connection.
  void sendBatchedMessage(List<dynamic> messages) {
    if (connectionState != EngineConnectionState.connected) {
      return;
    }

    if (messages.length == 1) {
      // No point in including the batch overhead.
      sendRawMessage(messages[0]);
      return;
    }

    sendMessage('batch', {'Requests': messages});
  }

  /// Send a raw message via the current WebSocket connection, encoded as JSON.
  /// You may want to create the message using [createUnrealWebSocketMessage].
  void sendRawMessage(Object message) {
    if (connectionState != EngineConnectionState.connected) {
      return;
    }

    _webSocketChannel?.sink.add(jsonEncode(message));
  }

  /// Send an HTTP request via the current WebSocket connection.
  /// The response's body will contain decoded JSON data.
  Future<UnrealHttpResponse> sendHttpRequest(UnrealHttpRequest request) {
    final parameters = _generateHttpRequestParameters(request);
    final completer = _makeHttpResponseCompleterFromParameters(parameters);

    sendMessage('http', parameters);
    return completer.future;
  }

  /// Send an HTTP request via the current WebSocket connection and receive the response via a callback on the request.
  void sendHttpRequestWithCallback(UnrealHttpRequestWithCallback request) {
    sendHttpRequest(request.request).then(request.callback);
  }

  /// Send a batched HTTP request via the current WebSocket connection.
  /// The response's body will contain a list of nullable [UnrealHttpResponse], where a response is null if there was a
  /// problem parsing it.
  Future<UnrealHttpResponse> sendBatchedHttpRequest(Iterable<UnrealHttpRequest> requests) {
    final List<dynamic> requestParameters = [];

    // Generate sub-requests
    for (UnrealHttpRequest subRequest in requests) {
      final parameters = _generateHttpRequestParameters(subRequest);
      requestParameters.add(parameters);
    }

    // Set up the batch request and listen for its completion
    final batchRequest = UnrealHttpRequest(url: '/remote/batch', verb: 'PUT', body: {'Requests': requestParameters});
    final batchParameters = _generateHttpRequestParameters(batchRequest);
    final message = {
      'MessageName': 'http',
      'Parameters': batchParameters,
    };

    final Completer<UnrealHttpResponse> completer = _makeHttpResponseCompleterFromParameters(batchParameters);
    sendRawMessage(message);

    return completer.future.then((batchResponse) {
      if (batchResponse.code != HttpResponseCode.ok) {
        return batchResponse;
      }

      final List? responses = batchResponse.body['Responses'];
      if (responses == null) {
        return Future.error('Got a valid batch response, but it contained no responses');
      }

      return UnrealHttpResponse(
          requestId: batchResponse.requestId,
          code: batchResponse.code,
          body: responses.map((responseJson) => _decodeHttpResponseJsonData(responseJson)).toList());
    });
  }

  /// Send a batched HTTP request via the current WebSocket connection and receive the response via callbacks on each
  /// request.
  void sendBatchedHttpRequestWithCallbacks(List<UnrealHttpRequestWithCallback> requests) {
    final Iterable<UnrealHttpRequest> baseRequests =
        requests.map((UnrealHttpRequestWithCallback requestWithCallback) => requestWithCallback.request);

    sendBatchedHttpRequest(baseRequests).then((UnrealHttpResponse batchResponse) {
      for (int responseIndex = 0; responseIndex < batchResponse.body.length; ++responseIndex) {
        final UnrealHttpResponse? response = batchResponse.body[responseIndex];
        requests[responseIndex].callback(response);
      }
    });
  }

  /// Register for callbacks when a type of WebSocket message is received.
  void registerMessageListener(String messageType, WebSocketMessageCallback callback) {
    if (_messageCallbacks.containsKey(messageType)) {
      _messageCallbacks[messageType]!.add(callback);
    } else {
      _messageCallbacks[messageType] = [callback];
    }
  }

  /// Unregister for callbacks when a type of WebSocket message is received.
  void unregisterMessageListener(String messageType, WebSocketMessageCallback callback) {
    if (_messageCallbacks.containsKey(messageType)) {
      _messageCallbacks[messageType]!.remove(callback);
    }
  }

  /// Register for callbacks when the connection state changes.
  void registerConnectionStateListener(ConnectionStateCallback callback) {
    _connectionStateCallbacks.add(callback);
  }

  /// Unregister for callbacks when the connection state changes.
  void unregisterConnectionStateListener(ConnectionStateCallback callback) {
    _connectionStateCallbacks.remove(callback);
  }

  /// Called when a WebSocket error occurs.
  void _onWebSocketError(dynamic error) {
    _log.severe('WebSocket error', error);
  }

  /// Called when the WebSocket connection is closed.
  void _onWebSocketStreamClosed({bool bWasExpected = false, bool bShouldReturnToConnectScreen = true}) async {
    _webSocketChannel = null;
    _connectionSubscription = null;
    _connectionState = EngineConnectionState.disconnected;

    if (bShouldReturnToConnectScreen) {
      rootNavigatorKey.currentState?.pushNamedAndRemoveUntil(
        ConnectScreen.route,
        (route) => false,
      );
    }

    if (!bWasExpected) {
      showDebugAlert('Lost connection to Unreal Engine.');
    }
  }

  /// Called when a WebSocket message is received.
  void _onMessageReceived(dynamic data) {
    final String stringData = String.fromCharCodes(data);
    final jsonMessage = jsonDecode(stringData);

    // Handle generic WebSocket messages
    String? messageType = jsonMessage['Type'];
    if (messageType != null) {
      // Call any listeners of this message.
      if (_messageCallbacks.containsKey(messageType)) {
        for (WebSocketMessageCallback callback in _messageCallbacks[messageType]!) {
          callback(jsonMessage);
        }
      }

      return;
    }

    // Handle HTTP responses
    UnrealHttpResponse? decodedResponse = _decodeHttpResponseJsonData(jsonMessage);
    if (decodedResponse != null && _httpResponseCompleters.containsKey(decodedResponse.requestId)) {
      _httpResponseCompleters[decodedResponse.requestId]!.complete(decodedResponse);
      _httpResponseCompleters.remove(decodedResponse.requestId);
    }
  }

  /// Decode JSON contained in an HTTP response body, or return null if the response was invalid.
  UnrealHttpResponse? _decodeHttpResponseJsonData(dynamic jsonData) {
    int? requestId = jsonData['RequestId'];
    if (requestId == null) {
      return null;
    }

    int? responseCode = jsonData['ResponseCode'];
    if (responseCode == null) {
      return null;
    }

    // It's possible to leave this out, so we don't null check it
    dynamic responseBody = jsonData['ResponseBody'];

    return UnrealHttpResponse(
      requestId: requestId,
      code: responseCode,
      body: responseBody,
    );
  }

  /// Generate an object containing request parameters for the given HTTP request.
  dynamic _generateHttpRequestParameters(UnrealHttpRequest request) {
    ++_lastRequestId;
    return {
      'RequestId': _lastRequestId,
      'Url': request.url,
      'Verb': request.verb,
      if (request.body != null) 'Body': request.body,
    };
  }

  /// Generate a completer that will complete its future when a response is received for the request with the given
  /// parameters.
  Completer<UnrealHttpResponse> _makeHttpResponseCompleterFromParameters(dynamic parameters) {
    int? requestId = parameters['RequestId'];

    if (requestId == null) {
      throw Exception('Expected a request ID to listen for');
    }

    final completer = Completer<UnrealHttpResponse>();
    _httpResponseCompleters[requestId] = completer;

    return completer;
  }

  /// Get the last connection stored in persisted  preferences and restore it into [_lastConnectionData] if we don't
  /// already have a connection saved.
  Future<ConnectionData?> _loadLastConnectionIfNone() async {
    final sharedPrefs = await SharedPreferences.getInstance();

    if (_lastConnectionData != null) {
      // We already connected somewhere newer
      return Future.value(_lastConnectionData);
    }

    // Get the last connection's data
    final String? name = sharedPrefs.getString('lastConnection.name');
    final String? address = sharedPrefs.getString('lastConnection.websocketAddress');
    final int? port = sharedPrefs.getInt('lastConnection.websocketPort');

    if (name != null && address != null && port != null) {
      ConnectionData? loadedConnectionData;
      try {
        loadedConnectionData = ConnectionData(
          uuid: UuidValue(const Uuid().v1()),
          name: name,
          websocketAddress: InternetAddress(address),
          websocketPort: port,
        );
      } catch (error) {
        _log.warning('Failed to restore connection data from preferences', error);
      }

      if (loadedConnectionData != null) {
        _lastConnectionData = loadedConnectionData;
      }
    }

    return Future.value(_lastConnectionData);
  }

  /// Save the last connection to persisted preferences.
  void _saveLastConnection(ConnectionData lastConnection) async {
    final sharedPrefs = await SharedPreferences.getInstance();

    sharedPrefs.setString('lastConnection.name', lastConnection.name);
    sharedPrefs.setString('lastConnection.websocketAddress', lastConnection.websocketAddress.address);
    sharedPrefs.setInt('lastConnection.websocketPort', lastConnection.websocketPort);
  }
}
