// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:io';

import 'package:intl/intl.dart';
import 'package:logging/logging.dart';
import 'package:path_provider/path_provider.dart';

final _timeFormatter = DateFormat('HH:mm:ss.sss');
final _fileDateFormatter = DateFormat('yyyy_MM_dd');

final _log = Logger('Logging');

/// Color tokens to prepend to logs at each level.
final Map<Level, String> _logColorTokens = {
  Level.CONFIG: '\x1B[32m',
  Level.INFO: '\x1B[34m',
  Level.WARNING: '\x1B[93m',
  Level.SEVERE: '\x1B[91m',
  Level.SHOUT: '\x1B[95m',
};

class Logging {
  /// Singleton instance of this class.
  static Logging instance = Logging();

  /// Whether logging has been initialized.
  bool _bIsInitialized = false;

  /// The sink to which log data should be written to send it to a file.
  IOSink? _logFileSink;

  /// The date when the log file was last updated.
  DateTime? _lastLogChangeTime;

  /// If true, it's time to change to a new log file.
  bool get _bNeedsLogChange {
    if (_logFileSink == null || _lastLogChangeTime == null) {
      return true;
    }

    final now = DateTime.now();
    return _fileDateFormatter.format(now) != _fileDateFormatter.format(_lastLogChangeTime!);
  }

  /// Initialize logging for the app.
  void initialize() {
    if (_bIsInitialized) {
      _log.warning('Tried to initialize logging more than once');
      return;
    }

    _bIsInitialized = true;

    Logger.root.level = Level.ALL;
    Logger.root.onRecord.listen(_onLogEvent);
  }

  /// Clean up logging for the app.
  void cleanUp() {
    _logFileSink?.close();

    _bIsInitialized = false;
  }

  /// Get the directory in which to store logs.
  Future<Directory> getLogDirectory() async {
    final Directory documentRoot = await getApplicationSupportDirectory();

    return Directory('${documentRoot.path}/logs');
  }

  /// Get a reference to the current sink to which log data should be written.
  Future<IOSink> _getActiveLogFileSink() async {
    if (!_bNeedsLogChange) {
      return _logFileSink!;
    }

    final Directory directory = await getLogDirectory();

    try {
      await directory.create(recursive: true);
    } catch (e) {
      return Future.error(e);
    }

    final fileName = 'epic_stage_app_${_fileDateFormatter.format(DateTime.now())}.log';
    final logFile = File('${directory.path}/$fileName');

    _lastLogChangeTime = DateTime.now();

    return logFile.openWrite(mode: FileMode.append);
  }

  /// Called when a log event is received.
  void _onLogEvent(LogRecord record) {
    String formatted =
        '[${_timeFormatter.format(record.time)}] ${record.level.name}/${record.loggerName}: ${record.message}';
    if (record.error != null) {
      formatted += '\n${record.error}';
    }

    if (record.stackTrace != null) {
      formatted += '\n${record.stackTrace}';
    }

    _logToConsole(formatted, record);
    _logToFile(formatted, record);
  }

  /// Send a log to the debug console.
  void _logToConsole(String formatted, LogRecord record) {
    final resetToken = '\x1B[0m';
    final String colorToken = _logColorTokens[record.level] ?? '';
    print('$colorToken$formatted$resetToken');
  }

  /// Send a log to the log file.
  void _logToFile(String formatted, LogRecord record) async {
    final IOSink sink = await _getActiveLogFileSink();
    sink.writeln(formatted);
  }
}
