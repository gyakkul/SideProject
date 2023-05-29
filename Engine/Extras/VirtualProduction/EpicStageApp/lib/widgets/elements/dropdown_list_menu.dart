// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:math' as math;

import 'package:flutter/material.dart';
import 'package:logging/logging.dart';
import 'package:provider/provider.dart';

import '../../models/navigator_keys.dart';
import 'layout/measurable.dart';
import 'list_menu.dart';

final _log = Logger('DropdownListMenu');

/// Additional padding from screen edges within which the dropdown menu must be placed.
const double _dropDownScreenEdgePadding = 2;

/// Vertical pixel offset between a dropdown menu's pivot position and the top of the menu's actual position.
const double _dropDownMenuPivotTopOffset = -2;

/// Size of the pointer on the side of the drop-down menu.
const double _dropDownPointerWidth = 12;

/// Height of the pointer on the side of the drop-down menu.
const double _dropDownPointerHeight = 24;

/// Offset between the top of the drop down menu and the top of its side pointer.
const double _dropDownPointerVerticalPadding = 12;

/// Width of a drop-down menu.
const double _dropDownWidth = defaultListMenuBodyWidth + _dropDownPointerWidth;

/// Function type used to create a [DropDownListMenu].
typedef DropDownListMenuBuilder = Widget Function(BuildContext context);

/// Holds data about how a dropdown list should be placed on-screen.
class DropDownListPlacement {
  const DropDownListPlacement({required this.pivotRect});

  /// The rectangle that the dropdown's pointer should point at, and next to which the dropdown should be placed.
  final Rect pivotRect;
}

/// A modal drop-down list menu that can be placed at an arbitrary position on the screen.
class DropDownListMenu extends StatefulWidget {
  const DropDownListMenu({
    Key? widgetKey,
    required this.children,
  }) : super(key: widgetKey);

  final List<Widget> children;

  /// Show a drop-down menu originating from the given [pivotRect] and created using the [builder]. It will be
  /// automatically placed at the side of the rectangle with the most space.
  static void showAtRect({required Rect pivotRect, required DropDownListMenuBuilder builder}) {
    final route = _DropDownListMenuRoute(
      pivotRect: pivotRect,
      builder: builder,
    );

    Navigator.of(rootNavigatorKey.currentContext!, rootNavigator: true).push<void>(route);
  }

  /// Show a drop-down menu at the given [pivotPosition] and created using the [builder].
  /// If provided, the menu will be placed at a distance of [pivotRadius] from the given position.
  static void showAtPosition({
    required Offset pivotPosition,
    required DropDownListMenuBuilder builder,
    double pivotRadius = 16,
  }) {
    showAtRect(
      pivotRect: Rect.fromCircle(center: pivotPosition, radius: pivotRadius),
      builder: builder,
    );
  }

  /// Show a drop-down menu next to the widget with the given [widgetKey] and created using the [builder].
  /// If provided, the widget's bounds will be inflated by [rectPadding] for the purpose of choosing the menu's
  /// position.
  static void showAtWidget({
    required GlobalKey widgetKey,
    required DropDownListMenuBuilder builder,
    double rectPadding = 1,
  }) {
    final RenderObject? widgetRenderObject = widgetKey.currentContext?.findRenderObject();
    final RenderBox? widgetBox = (widgetRenderObject != null) ? (widgetRenderObject as RenderBox) : null;
    if (widgetBox == null) {
      _log.severe('No widget provided for drop-down menu location');
      return;
    }

    final RenderObject rootRenderObject = rootNavigatorKey.currentContext!.findRenderObject()!;
    Rect widgetRect = widgetBox.localToGlobal(Offset.zero, ancestor: rootRenderObject) & widgetBox.size;
    widgetRect = widgetRect.inflate(rectPadding);

    showAtRect(pivotRect: widgetRect, builder: builder);
  }

  @override
  State<StatefulWidget> createState() => _DropDownListMenuState();
}

class _DropDownListMenuState extends State<DropDownListMenu> {
  Size? _menuSize;

  @override
  Widget build(BuildContext context) {
    return Consumer<DropDownListPlacement>(builder: (context, dropdownData, _) {
      // The menu that we want to display. All the other logic here is for positioning it and placing the pointer.
      final menuWidget = Measurable(
        child: ListMenu(
          children: widget.children,
          minHeight: _dropDownPointerHeight + _dropDownPointerVerticalPadding * 2,
        ),
        onMeasured: _onMenuMeasured,
      );

      if (_menuSize == null) {
        // Build once so we can determine the menu's size. Use Align here so the menu doesn't expand to fill the entire
        // screen.
        return Offstage(child: Align(child: menuWidget));
      }

      final Color color = Theme.of(context).colorScheme.surfaceTint;

      final Size screenSize = MediaQuery.of(context).size;
      final EdgeInsets screenPadding = MediaQuery.of(context).viewPadding + EdgeInsets.all(_dropDownScreenEdgePadding);

      // Flip to face right if the dropdown would cross the right edge of the safe area
      final double rightLimit = screenSize.width - screenPadding.left;
      final bool bPointRight = (dropdownData.pivotRect.right + _dropDownWidth) > rightLimit;

      // The offset to apply to align the menu to align the pointer with the pivot point
      final double baseYOffset =
          -_dropDownMenuPivotTopOffset - _dropDownPointerVerticalPadding - (_dropDownPointerHeight / 2);

      // Adjust Y position if we would extend off the bottom of the screen.
      final double bottomLimit = screenSize.height - screenPadding.bottom; // Max Y coordinate of menu's bottom
      final double pivotYPos = dropdownData.pivotRect.center.dy; // Y position pointer should aim at
      final double menuBottom = pivotYPos + _menuSize!.height + baseYOffset; // Actual Y coordinate of menu's bottom
      final double yOffset = math.min(bottomLimit - menuBottom, 0); // How much to offset the menu to keep it in bounds

      // Adjust the pointer's position based on how much we shifted the whole menu
      final double pointerYPos = (-yOffset).clamp(
        _dropDownPointerVerticalPadding,
        _menuSize!.height - _dropDownPointerVerticalPadding - _dropDownPointerHeight,
      );

      final Widget pointer = Padding(
        padding: EdgeInsets.only(top: pointerYPos),
        child: SizedBox(
          width: _dropDownPointerWidth,
          height: _dropDownPointerHeight,
          child: CustomPaint(
            painter: _DropDownListMenuPointerPainter(
              color: color,
              bPointRight: bPointRight,
            ),
          ),
        ),
      );

      // Final screen X position of the dropdown's left edge (including menu and pointer)
      double xPos;
      if (bPointRight) {
        xPos = dropdownData.pivotRect.left - (_menuSize!.width + _dropDownPointerWidth);
      } else {
        xPos = dropdownData.pivotRect.right;
      }

      // Final screen Y position of the dropdown's upper edge
      final yPos = pivotYPos + baseYOffset + yOffset;

      return CustomSingleChildLayout(
        delegate: _DropDownListMenuLayout(position: Offset(xPos, yPos)),
        child: Row(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            if (!bPointRight) pointer,
            menuWidget,
            if (bPointRight) pointer,
          ],
        ),
      );
    });
  }

  void _onMenuMeasured(Size size) {
    setState(() {
      _menuSize = size;
    });
  }
}

/// A route that displays the drop-down menu popup and positions it.
class _DropDownListMenuRoute<T> extends PopupRoute<T> {
  _DropDownListMenuRoute({required this.pivotRect, required this.builder});

  final Rect pivotRect;
  final DropDownListMenuBuilder builder;

  @override
  Color? get barrierColor => null;

  @override
  bool get barrierDismissible => true;

  @override
  String? get barrierLabel => 'Dismiss';

  @override
  Duration get transitionDuration => Duration.zero;

  @override
  Widget buildPage(BuildContext context, Animation<double> animation, Animation<double> secondaryAnimation) {
    return Builder(
      builder: (BuildContext context) {
        return Provider(
          create: (context) => DropDownListPlacement(
            pivotRect: pivotRect,
          ),
          child: builder(context),
        );
      },
    );
  }
}

/// Layout that places the dropdown within the screen.
class _DropDownListMenuLayout<T> extends SingleChildLayoutDelegate {
  _DropDownListMenuLayout({required this.position});

  final Offset position;

  @override
  Offset getPositionForChild(Size size, Size childSize) {
    return position;
  }

  @override
  bool shouldRelayout(covariant SingleChildLayoutDelegate oldDelegate) {
    return oldDelegate != this;
  }
}

/// Painter that draws the triangle pointing out of the menu towards the position it was created at.
class _DropDownListMenuPointerPainter extends CustomPainter {
  const _DropDownListMenuPointerPainter({required this.color, required this.bPointRight}) : super();

  final Color color;
  final bool bPointRight;

  @override
  void paint(Canvas canvas, Size size) {
    final Rect canvasRect = Offset.zero & size;

    final path = Path();

    if (bPointRight) {
      path
        ..moveTo(0, 0)
        ..lineTo(canvasRect.width, canvasRect.height / 2)
        ..lineTo(0, canvasRect.height)
        ..close();
    } else {
      path
        ..moveTo(canvasRect.width, 0)
        ..lineTo(0, canvasRect.height / 2)
        ..lineTo(canvasRect.width, canvasRect.height)
        ..close();
    }

    final Paint paint = Paint()
      ..style = PaintingStyle.fill
      ..color = color;

    canvas.drawPath(path, paint);
  }

  @override
  bool shouldRepaint(covariant CustomPainter oldDelegate) {
    return oldDelegate != this;
  }
}
