// Copyright Epic Games, Inc. All Rights Reserved.

import 'dart:math';
import 'dart:ui';

/// Given a [position] relative to a circle's center, apply the exponential curve produced by the [exponent] to the
/// position's distance from the center. If [bInverse] is true, apply the inverse of the exponent.
Offset exponentiateCirclePosition(Offset position, double exponent, bool bInverse) {
  if (exponent == 1.0) {
    return position;
  }

  final double distance = position.distance;

  if (distance <= 0) {
    return Offset.zero;
  }

  if (bInverse) {
    if (exponent == 0) {
      throw Exception('Can\'t apply inverse of exponent $exponent}');
    }
    exponent = 1.0 / exponent;
  }

  final num scaledDistance = pow(distance, exponent);
  final double scale = scaledDistance / distance;
  return position.scale(scale, scale);
}
