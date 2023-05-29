// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:io';
import 'dart:math';
import 'dart:ui';

import 'package:flutter/material.dart';
import 'package:intl/intl.dart';
import 'package:open_filex/open_filex.dart';
import 'package:share_plus/share_plus.dart';

import '../../utilities/external_notifier.dart';
import '../../utilities/logging.dart';

/// A screen that shows recorded logs for the app.
class ViewLogsScreen extends StatefulWidget {
  const ViewLogsScreen({Key? key}) : super(key: key);

  static const String title = 'View logs';
  static const String route = '/logs';

  @override
  State<ViewLogsScreen> createState() => _ViewLogsScreenState();
}

class _ViewLogsScreenState extends State<ViewLogsScreen> {
  final shareButtonKey = GlobalKey();

  /// List of files to display.
  List<File> _logFiles = [];

  /// Text of the current log file.
  String _logText = '';

  /// Index of the user's currently selected file.
  int _selectedFileIndex = -1;

  /// A handle to the currently selected file, if any.
  File? get _selectedFile {
    if (_selectedFileIndex < 0 || _selectedFileIndex >= _logFiles.length) {
      return null;
    }

    return _logFiles[_selectedFileIndex];
  }

  @override
  void initState() {
    super.initState();

    _updateLogFileList();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text(ViewLogsScreen.title),
        actions: [
          Tooltip(
            message: 'Share',
            child: IconButton(
              key: shareButtonKey,
              onPressed: _shareSelectedLog,
              icon: Icon(Icons.share),
            ),
          ),
          Tooltip(
            message: 'Open File',
            child: IconButton(
              onPressed: _openSelectedLog,
              icon: Icon(Icons.open_in_new),
            ),
          ),
        ],
      ),
      body: Row(
        crossAxisAlignment: CrossAxisAlignment.stretch,
        children: [
          Expanded(
            flex: 1,
            child: ListView.builder(
              itemCount: max(_logFiles.length * 2 - 1, 0),
              itemBuilder: (context, index) {
                if (index.isOdd) {
                  return const Divider();
                }

                final int logIndex = index ~/ 2;

                return _LogFileTile(
                  file: _logFiles[logIndex],
                  onTap: () => _selectFileIndex(logIndex),
                  bSelected: logIndex == _selectedFileIndex,
                );
              },
            ),
          ),
          Container(
            width: 0.5,
            color: Theme.of(context).colorScheme.surfaceTint,
          ),
          Expanded(
            flex: 2,
            child: _LogText(text: _logText),
          ),
        ],
      ),
    );
  }

  /// Update the list of log files.
  void _updateLogFileList() async {
    final Directory logDirectory = await Logging.instance.getLogDirectory();
    final List<File> files =
        await logDirectory.list(recursive: false).map((FileSystemEntity entity) => File(entity.path)).toList();

    // Sort so the most recent files appear first. We assume that files are named identically aside from their dates,
    // which are assumed to be in lexicographical order (YYYY_MM_DD)
    files.sort((File fileA, File fileB) => -fileA.path.compareTo(fileB.path));

    setState(() {
      _logFiles = files;

      if (_selectedFileIndex < 0 && _logFiles.length > 0) {
        _selectFileIndex(0);
      }
    });
  }

  /// Select the file with the given index.
  void _selectFileIndex(int index) async {
    assert(index >= 0);
    assert(index < _logFiles.length);

    final File file = _logFiles[index];
    _logText = await file.readAsString();
    _selectedFileIndex = index;

    if (mounted) {
      setState(() {});
    }
  }

  /// Open the selected log in the local operating system.
  void _openSelectedLog() {
    if (_selectedFile == null) {
      return;
    }

    OpenFilex.open(_selectedFile!.path);
  }

  /// Open a prompt to share the selected log's contents using the local operating system.
  void _shareSelectedLog() async {
    if (_selectedFile == null) {
      return;
    }

    // Need to provide this position for sharing to work on iPad
    final renderBox = shareButtonKey.currentContext?.findRenderObject() as RenderBox?;
    if (renderBox == null) {
      return;
    }

    final sharePosition = renderBox.localToGlobal(Offset.zero) & renderBox.size;

    Share.share(
      await _selectedFile!.readAsString(),
      subject: _selectedFile!.uri.pathSegments.last,
      sharePositionOrigin: sharePosition,
    );
  }
}

/// A tile in the log entries list representing a log file.
class _LogFileTile extends StatelessWidget {
  const _LogFileTile({
    Key? key,
    required this.file,
    required this.onTap,
    this.bSelected = false,
  }) : super(key: key);

  /// The file containing the logs.
  final File file;

  /// Whether this file is currently selected.
  final bool bSelected;

  /// Called when the user taps the tile.
  final Function() onTap;

  /// Get the file's name.
  String get _fileName => file.uri.pathSegments.last;

  /// Get the date with which the file is associated.
  DateTime? get _fileDate {
    final dateExpression = RegExp(r'(\d+)_(\d+)_(\d+)\.log');
    final RegExpMatch? match = dateExpression.firstMatch(_fileName);

    if (match == null) {
      return null;
    }

    late final int year, month, day;

    try {
      year = int.parse(match.group(1)!);
      month = int.parse(match.group(2)!);
      day = int.parse(match.group(3)!);
    } catch (error) {
      return null;
    }

    return DateTime(year, month, day);
  }

  @override
  Widget build(BuildContext context) {
    final String locale = Localizations.localeOf(context).languageCode;
    final dateFormat = DateFormat.yMMMMd(locale);

    return ListTile(
      title: Text(
        (_fileDate != null) ? dateFormat.format(_fileDate!) : 'Unknown Date',
        style: Theme.of(context).textTheme.titleMedium,
      ),
      subtitle: Text(_fileName),
      trailing: const Icon(Icons.chevron_right),
      onTap: onTap,
      selected: bSelected,
    );
  }
}

/// Widget that displays text from a log.
class _LogText extends StatefulWidget {
  const _LogText({Key? key, required this.text}) : super(key: key);

  /// Text to display.
  final String text;

  @override
  State<_LogText> createState() => _LogTextState();
}

class _LogTextState extends State<_LogText> {
  final _verticalScroll = ScrollController();
  final _horizontalScroll = ScrollController();
  final _textChangeNotifier = ExternalNotifier();

  @override
  void didUpdateWidget(covariant _LogText oldWidget) {
    super.didUpdateWidget(oldWidget);

    if (oldWidget.text != widget.text) {
      WidgetsBinding.instance.addPostFrameCallback((_) {
        _verticalScroll.jumpTo(_verticalScroll.initialScrollOffset);
        _horizontalScroll.jumpTo(_verticalScroll.initialScrollOffset);

        _textChangeNotifier.notifyListeners();
      });
    }
  }

  @override
  Widget build(BuildContext context) {
    final scrollArea = Scrollbar(
      controller: _verticalScroll,
      child: Scrollbar(
        controller: _horizontalScroll,
        // Listen to the horizontal scroll view, nested 1 level past the nearest view
        notificationPredicate: (notification) => notification.depth == 1,
        child: SingleChildScrollView(
          scrollDirection: Axis.vertical,
          controller: _verticalScroll,
          child: SingleChildScrollView(
            scrollDirection: Axis.horizontal,
            controller: _horizontalScroll,
            child: Container(
              padding: EdgeInsets.symmetric(
                vertical: 15,
                horizontal: 20,
              ),
              child: Text(
                widget.text,
                softWrap: false,
                style: Theme.of(context).textTheme.bodyText2!.copyWith(fontFamily: 'Droid Sans Mono'),
              ),
            ),
          ),
        ),
      ),
    );

    return Stack(
      clipBehavior: Clip.none,
      children: [
        scrollArea,
        Padding(
          padding: EdgeInsets.symmetric(vertical: 10),
          child: Stack(
            clipBehavior: Clip.none,
            children: [
              Align(
                alignment: Alignment.topCenter,
                child: _ScrollButton(
                  bScrollToStart: true,
                  scrollController: _verticalScroll,
                  resetNotifier: _textChangeNotifier,
                ),
              ),
              Align(
                alignment: Alignment.bottomCenter,
                child: _ScrollButton(
                  bScrollToStart: false,
                  scrollController: _verticalScroll,
                  resetNotifier: _textChangeNotifier,
                ),
              ),
            ],
          ),
        ),
      ],
    );
  }
}

/// A button that lets the user instantly scroll to the start or end and hides itself when not relevant.
class _ScrollButton extends StatefulWidget {
  const _ScrollButton({
    Key? key,
    required this.scrollController,
    required this.bScrollToStart,
    this.resetNotifier,
  }) : super(key: key);

  /// Controller used to scroll the controlled view.
  final ScrollController scrollController;

  /// Whether this should scroll to the start (true) or end (false) of the scroll view.
  final bool bScrollToStart;

  /// If provided, update the button's visibility when this notifier fires (e.g. scroll bounds have changed).
  final ChangeNotifier? resetNotifier;

  @override
  State<_ScrollButton> createState() => _ScrollButtonState();
}

class _ScrollButtonState extends State<_ScrollButton> {
  bool _bIsVisible = false;
  bool _bIsAnimating = false;

  @override
  void initState() {
    super.initState();
    widget.scrollController.addListener(_updateVisibility);
    widget.resetNotifier?.addListener(_updateVisibility);

    WidgetsBinding.instance.addPostFrameCallback((_) {
      _updateVisibility();
    });
  }

  @override
  void dispose() {
    super.dispose();

    widget.scrollController.removeListener(_updateVisibility);
    widget.resetNotifier?.removeListener(_updateVisibility);
  }

  @override
  void didUpdateWidget(covariant _ScrollButton oldWidget) {
    super.didUpdateWidget(oldWidget);

    oldWidget.resetNotifier?.removeListener(_updateVisibility);
    oldWidget.scrollController.removeListener(_updateVisibility);

    widget.resetNotifier?.addListener(_updateVisibility);
    widget.scrollController.addListener(_updateVisibility);
  }

  @override
  Widget build(BuildContext context) {
    return AnimatedOpacity(
      opacity: (_bIsVisible && !_bIsAnimating) ? 1 : 0,
      duration: Duration(milliseconds: 150),
      child: FloatingActionButton(
        child: Icon(widget.bScrollToStart ? Icons.arrow_upward : Icons.arrow_downward),
        onPressed: _onPressed,
        heroTag: null,
      ),
    );
  }

  /// Update whether to show the button based on scroll position.
  void _updateVisibility() {
    bool bNewIsVisible = false;
    final double? scrollTarget = _getScrollTarget();
    if (scrollTarget == null) {
      bNewIsVisible = false;
    } else {
      bNewIsVisible = widget.scrollController.offset != scrollTarget;
    }

    if (bNewIsVisible != _bIsVisible) {
      setState(() {
        _bIsVisible = bNewIsVisible;
      });
    }
  }

  /// Called when the button is pressed.
  void _onPressed() {
    final double? scrollTarget = _getScrollTarget();
    if (scrollTarget != null) {
      setState(() {
        _bIsAnimating = true;
      });

      widget.scrollController
          .animateTo(
            scrollTarget,
            duration: Duration(milliseconds: 300),
            curve: Curves.easeInOutCubic,
          )
          .then((_) => setState(() {
                _bIsAnimating = false;
              }));
    }
  }

  /// Get the position to scroll to when the button is pressed.
  double? _getScrollTarget() {
    final scrollPosition = widget.scrollController.position;
    if (!scrollPosition.hasContentDimensions) {
      return null;
    }

    return widget.bScrollToStart ? scrollPosition.minScrollExtent : scrollPosition.maxScrollExtent;
  }
}
