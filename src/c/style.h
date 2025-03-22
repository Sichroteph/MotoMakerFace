#include <pebble.h>

#define _TICK_INSETS_RECT 26
#define _TICK_INSETS_ROUND 30
#define _TICK_INSETS_RECT_LARGE 30

#define TICK_INSETS = PBL_PLATFORM_SWITCH(PBL_PLATFORM_TYPE_CURRENT, \
  /*aplite*/ _TICK_INSETS_RECT, \
  /*basalt*/ _TICK_INSETS_RECT, \
  /*chalk*/ _TICK_INSETS_ROUND, \
  /*diorite*/ _TICK_INSETS_RECT, \
  /*emery*/ _TICK_INSETS_RECT_LARGE)


#define _HAND_WIDTH_REGULAR 3
#define _HAND_WIDTH_LARGE 5

#define HAND_WIDTH = PBL_PLATFORM_SWITCH(PBL_PLATFORM_TYPE_CURRENT, \
  /*aplite*/ _HAND_WIDTH_REGULAR, \
  /*basalt*/ _HAND_WIDTH_REGULAR, \
  /*chalk*/ _HAND_WIDTH_REGULAR, \
  /*diorite*/ _HAND_WIDTH_REGULAR, \
  /*emery*/ _HAND_WIDTH_LARGE)