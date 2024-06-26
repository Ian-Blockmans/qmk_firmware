#include "diy_macropad.h"

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {   0,  7,  8,  15 },
  {   1,  6,  9,  14 },
  {   2,  5,  10, 13 },
  {   3,  4,  11, 12 }
}, {
  // LED Index to Physical Position
  { 0, 0 }, { 0, 1 }, {0, 2 }, { 0, 3 },
  { 1, 3 }, { 1, 2 }, {1, 1 }, { 1, 0 },
  { 2, 0 }, { 2, 1 }, {2, 2 }, { 2, 3 },
  { 3, 3 }, { 3, 2 }, {3, 1 }, { 3, 0 }
}, {
  // LED Index to Flag
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4
} };