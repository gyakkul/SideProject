// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:io';

import 'package:flutter/material.dart';
import 'package:provider/provider.dart';
import 'package:uuid/uuid.dart';
import 'package:web_socket_channel/web_socket_channel.dart';

import '../../models/engine_connection.dart';
import '../../utilities/debug_utilities.dart';
import '../../utilities/net_utilities.dart';
import '../../utilities/unreal_colors.dart';
import 'main/stage_app_main_screen.dart';

/// A screen that lets the user manually enter an IP address to connect to the editor.
class ManualConnectScreen extends StatefulWidget {
  const ManualConnectScreen({Key? key}) : super(key: key);

  static const String title = 'Connect manually';
  static const String route = '/manual_connect';

  @override
  _ManualConnectScreenState createState() => _ManualConnectScreenState();
}

class _ManualConnectScreenState extends State<ManualConnectScreen> {
  final _formKey = GlobalKey<FormState>();

  final _ipTextController = TextEditingController();
  final _portTextController = TextEditingController(text: '30020');

  bool _bIsConnecting = false;

  @override
  Widget build(BuildContext context) {
    final TextStyle textStyle = Theme.of(context).textTheme.bodyText2!.copyWith(
          fontSize: 20,
          color: UnrealColors.white,
        );

    Widget contents;

    if (_bIsConnecting) {
      // Show a spinner while connecting
      contents = Container(
        color: Colors.black.withOpacity(0.5),
        child: const Center(
          child: SizedBox.square(
            dimension: 80,
            child: CircularProgressIndicator(
              strokeWidth: 6,
            ),
          ),
        ),
      );
    } else {
      // Show the form
      contents = Center(
        child: ConstrainedBox(
          constraints: const BoxConstraints(maxWidth: 400),
          child: Form(
            key: _formKey,
            child: ListView(
              shrinkWrap: true,
              children: [
                Row(children: [
                  Expanded(
                    flex: 2,
                    child: TextFormField(
                      keyboardType: const TextInputType.numberWithOptions(decimal: true, signed: false),
                      decoration: const InputDecoration(
                        label: Text('IP address'),
                      ),
                      style: textStyle,
                      controller: _ipTextController,
                      validator: _validateIpAddress,
                    ),
                  ),
                  const SizedBox(width: 16),
                  Expanded(
                    flex: 1,
                    child: TextFormField(
                      keyboardType: const TextInputType.numberWithOptions(decimal: false, signed: false),
                      decoration: const InputDecoration(
                        label: Text('Port'),
                      ),
                      style: textStyle,
                      controller: _portTextController,
                      validator: _validatePort,
                    ),
                  ),
                ]),
                const SizedBox(height: 16),
                ElevatedButton(
                  style: ElevatedButton.styleFrom(minimumSize: const Size(double.infinity, 50)),
                  child: const Text('Connect'),
                  onPressed: _connect,
                )
              ],
            ),
          ),
        ),
      );
    }

    return Scaffold(
      appBar: AppBar(
        title: const Text(ManualConnectScreen.title),
      ),
      body: contents,
    );
  }

  void _connect() {
    if (_formKey.currentState?.validate() != true) {
      return;
    }

    ConnectionData connection = ConnectionData(
      uuid: UuidValue(const Uuid().v1()),
      name: 'Manual Connection',
      websocketAddress: InternetAddress(_ipTextController.text),
      websocketPort: int.parse(_portTextController.text),
    );

    setState(() {
      _bIsConnecting = true;
    });

    Provider.of<EngineConnectionManager>(context, listen: false).connect(connection).then((WebSocketChannel? channel) {
      if (channel == null) {
        showDebugAlert('Failed to connect');
        setState(() {
          _bIsConnecting = false;
        });
        return;
      }

      Navigator.of(context, rootNavigator: true).pushReplacementNamed(StageAppMainScreen.route);
    }).onError((error, stackTrace) {
      showDebugAlert(error.toString());

      setState(() {
        _bIsConnecting = false;
      });
    });
  }

  String? _validateIpAddress(String? text) {
    if (text == null) {
      return 'Invalid IP address';
    }

    try {
      InternetAddress(text);
    } catch (e) {
      return 'Invalid IP address';
    }
    return null;
  }

  String? _validatePort(String? text) {
    if (text == null) {
      return 'Invalid port';
    }

    try {
      final port = int.parse(text);
      if (port > 65535) {
        return 'Invalid port';
      }
    } catch (e) {
      return 'Invalid port';
    }
    return null;
  }
}
