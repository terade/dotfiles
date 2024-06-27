/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#undef DEBOUNCE
#define DEBOUNCE 4

#undef TAPPING_TERM
#define TAPPING_TERM 125

#undef RGB_MATRIX_TIMEOUT
#define RGB_MATRIX_TIMEOUT 240000

#undef RGB_MATRIX_VAL_STEP
#define RGB_MATRIX_VAL_STEP 24

#define USB_SUSPEND_WAKEUP_DELAY 0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL 12

#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 2

#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX 36

#undef MOUSEKEY_WHEEL_MAX_SPEED
#define MOUSEKEY_WHEEL_MAX_SPEED 2

#define CAPS_LOCK_STATUS
#define FIRMWARE_VERSION u8"9j30N/vWMJL"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#define LAYER_STATE_8BIT
#define COMBO_COUNT 4

#define RGB_MATRIX_STARTUP_SPD 60

