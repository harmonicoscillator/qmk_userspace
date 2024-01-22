#pragma once

#define EE_HANDS
#define LAYOUT_split_3x5_3( \
	k01, k02, k03, k04, k05,			k45, k44, k43, k42, k41, \
	k11, k12, k13, k14, k15,			k55, k54, k53, k52, k51, \
	k21, k22, k23, k24, k25,			k65, k64, k63, k62, k61, \
		       k33, k34, k31,		        k71, k74, k73  \
)\
{\
	{ KC_NO, k01, k02, k03, k04, k05 }, \
	{ KC_NO, k11, k12, k13, k14, k15 }, \
	{ KC_NO, k21, k22, k23, k24, k25 }, \
	{ KC_NO, k31, KC_NO, k33, k34, KC_NO }, \
	{ KC_NO, k41, k42, k43, k44, k45 }, \
	{ KC_NO, k51, k52, k53, k54, k55 }, \
	{ KC_NO, k61, k62, k63, k64, k65 }, \
	{ KC_NO, k71, KC_NO, k73, k74, KC_NO }, \
}
