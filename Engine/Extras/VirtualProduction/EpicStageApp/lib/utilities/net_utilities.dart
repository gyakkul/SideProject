// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:io';
import 'dart:typed_data';

import 'package:archive/archive_io.dart';
import 'package:uuid/uuid.dart';

const int _protocolVersion = 0; // The current protocol version for beacon messages
const String _protocolIdentifier = 'ES@p';

/// Data about a detected engine connection
class ConnectionData {
  ConnectionData({required this.uuid, required this.name, required this.websocketAddress, required this.websocketPort})
      : lastSeenTime = DateTime.now();

  final UuidValue uuid;
  String name;
  InternetAddress websocketAddress;
  int websocketPort;
  DateTime lastSeenTime;
}

/// Convert a Uint8List to a UUID.
UuidValue uuidFromUint8List(Uint8List data) {
  String guidString = Uuid.unparse(data);
  return UuidValue(guidString, false);
}

/// Make the beacon message that will be multicast to find compatible engine instances.
Uint8List makeBeaconMessage() {
  return Uint8List.fromList(_protocolIdentifier.codeUnits + [_protocolVersion]);
}

/// Retrieve the connection data from the datagram received from the response to a beacon message.
/// If the connection data couldn't be retrieved, this will return null.
ConnectionData? getConnectionFromBeaconResponse(Datagram datagram) {
  final InputStream stream = InputStream(datagram.data);
  stream.byteOrder = LITTLE_ENDIAN;
  ConnectionData? connection;

  try {
    stream.readByte(); // Protocol version; currently ignored
    final UuidValue engineUuid = uuidFromUint8List(stream.readBytes(16).toUint8List());
    final int port = stream.readUint32();

    final int nameLength = stream.readUint32();
    String name = stream.readString(size: nameLength, utf8: true);

    if (name[name.length - 1] == '\x00') {
      // Remove the null terminator
      name = name.substring(0, name.length - 1);
    }

    // If the engine didn't provide a friendly name, just use the address and port.
    if (name.isEmpty || (name.length == 1 && name[0] == '\x00')) {
      name = '${datagram.address.address}:${port.toString()}';
    }

    connection = ConnectionData(uuid: engineUuid, name: name, websocketAddress: datagram.address, websocketPort: port);
  } catch (error) {
    // TODO: Set up error logging so we can do something here
  }

  return connection;
}
