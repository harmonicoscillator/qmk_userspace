#pragma once

#include "quantum.h"

/* This a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
  KA1, KA2, KA3, KA4, \
  KB1, KB2, KB3, KB4, \
  KC1, KC2, KC3, KC4, \
  KD1, KD2, KD3, KD4 \
) \
{ \
  { KA1, KA2, KA3, KA4 }, \
  { KB1, KB2, KB3, KB4 }, \
  { KC1, KC2, KC3, KC4 }, \
  { KD1, KD2, KD3, KD4 }  \
}
