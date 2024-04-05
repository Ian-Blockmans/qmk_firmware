#include "diy_macropad.h"

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {   0,  1,  2,  3 },
  {   7,  6,  5,  4 },
  {   8,  9,  10, 11 },
  {   15, 14, 13, 12 }
}, {
  // LED Index to Physical Position
  { 0, 0 }, { 1, 0 }, {2, 0 }, { 3,  0 },
  { 3, 1 }, { 2, 1 }, {1, 1 }, { 0,  1 },
  { 0, 2 }, { 1, 2 }, {2, 2 }, { 3,  2 },
  { 1, 3 }, { 2, 3 }, {3, 3 }, { 0,  3 }
}, {
  // LED Index to Flag
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4
} };