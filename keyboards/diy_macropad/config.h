
//#include "config_common.h"

//#define RGBLIGHT_SLEEP
//#define RGBLIGHT_LAYERS
//#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
//#define RGBLIGHT_LAYER_BLINK
//
//#define RGBLIGHT_MAX_LAYERS 1

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

/* USB Device descriptor parameter */
//#define VENDOR_ID       0xFEED
//#define PRODUCT_ID      0x6060
//#define DEVICE_VER      0x0002
//#define MANUFACTURER    Ian
//#define PRODUCT         diy_macropad

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 4

/* key matrix pins */
//#define MATRIX_ROW_PINS { GP4, GP5, GP6, GP7 }
//#define MATRIX_COL_PINS { GP8, GP9, GP10, GP11 }
//#define UNUSED_PINS

/* COL2ROW or ROW2COL */
//#define DIODE_DIRECTION COL2ROW

// leds config
#define WS2812_DI_PIN GP15
#define RGB_MATRIX_LED_COUNT 16
#define WS2812_PIO_USE_PIO1

//#define RGBLED_NUM 16

/* RGB LED Conversion macro from physical array to electric array */
/*#define LED_LAYOUT( \
    L00, L01, L02, L03,  \
    L10, L11, L12, L13,  \
    L20, L21, L22, L23,  \
    L30, L31, L32, L33, ) \
  { \
    L03, L02, L01, L00,   \
    L10, L11, L12, L13,   \
    L23, L22, L21, L20,   \
    L30, L31, L32, L33   \
  }
*/

/* number of backlight levels */
//#define BACKLIGHT_PIN B6
//#ifdef BACKLIGHT_PIN
//#define BACKLIGHT_LEVELS 3
//#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)
