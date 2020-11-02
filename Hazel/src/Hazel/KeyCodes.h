

/* The unknown key */
#define HZ_KEY_UNKNOWN            -1

/* Printable keys */
#define HZ_KEY_SPACE              32
#define HZ_KEY_APOSTROPHE         39  /* ' */
#define HZ_KEY_COMMA              44  /* , */
#define HZ_KEY_MINUS              45  /* - */
#define HZ_KEY_PERIOD             46  /* . */
#define HZ_KEY_SLASH              47  /* / */
#define HZ_KEY_0                  48
#define HZ_KEY_1                  49
#define HZ_KEY_2                  50
#define HZ_KEY_3                  51
#define HZ_KEY_4                  52
#define HZ_KEY_5                  53
#define HZ_KEY_6                  54
#define HZ_KEY_7                  55
#define HZ_KEY_8                  56
#define HZ_KEY_9                  57
#define HZ_KEY_SEMICOLON          59  /* ; */
#define HZ_KEY_EQUAL              61  /* = */
#define HZ_KEY_A                  65
#define HZ_KEY_B                  66
#define HZ_KEY_C                  67
#define HZ_KEY_D                  68
#define HZ_KEY_E                  69
#define HZ_KEY_F                  70
#define HZ_KEY_G                  71
#define HZ_KEY_H                  72
#define HZ_KEY_I                  73
#define HZ_KEY_J                  74
#define HZ_KEY_K                  75
#define HZ_KEY_L                  76
#define HZ_KEY_M                  77
#define HZ_KEY_N                  78
#define HZ_KEY_O                  79
#define HZ_KEY_P                  80
#define HZ_KEY_Q                  81
#define HZ_KEY_R                  82
#define HZ_KEY_S                  83
#define HZ_KEY_T                  84
#define HZ_KEY_U                  85
#define HZ_KEY_V                  86
#define HZ_KEY_W                  87
#define HZ_KEY_X                  88
#define HZ_KEY_Y                  89
#define HZ_KEY_Z                  90
#define HZ_KEY_LEFT_BRACKET       91  /* [ */
#define HZ_KEY_BACKSLASH          92  /* \ */
#define HZ_KEY_RIGHT_BRACKET      93  /* ] */
#define HZ_KEY_GRAVE_ACCENT       96  /* ` */
#define HZ_KEY_WORLD_1            161 /* non-US #1 */
#define HZ_KEY_WORLD_2            162 /* non-US #2 */

/* Function keys */
#define HZ_KEY_ESCAPE             256
#define HZ_KEY_ENTER              257
#define HZ_KEY_TAB                258
#define HZ_KEY_BACKSPACE          259
#define HZ_KEY_INSERT             260
#define HZ_KEY_DELETE             261
#define HZ_KEY_RIGHT              262
#define HZ_KEY_LEFT               263
#define HZ_KEY_DOWN               264
#define HZ_KEY_UP                 265
#define HZ_KEY_PAGE_UP            266
#define HZ_KEY_PAGE_DOWN          267
#define HZ_KEY_HOME               268
#define HZ_KEY_END                269
#define HZ_KEY_CAPS_LOCK          280
#define HZ_KEY_SCROLL_LOCK        281
#define HZ_KEY_NUM_LOCK           282
#define HZ_KEY_PRINT_SCREEN       283
#define HZ_KEY_PAUSE              284
#define HZ_KEY_F1                 290
#define HZ_KEY_F2                 291
#define HZ_KEY_F3                 292
#define HZ_KEY_F4                 293
#define HZ_KEY_F5                 294
#define HZ_KEY_F6                 295
#define HZ_KEY_F7                 296
#define HZ_KEY_F8                 297
#define HZ_KEY_F9                 298
#define HZ_KEY_F10                299
#define HZ_KEY_F11                300
#define HZ_KEY_F12                301
#define HZ_KEY_F13                302
#define HZ_KEY_F14                303
#define HZ_KEY_F15                304
#define HZ_KEY_F16                305
#define HZ_KEY_F17                306
#define HZ_KEY_F18                307
#define HZ_KEY_F19                308
#define HZ_KEY_F20                309
#define HZ_KEY_F21                310
#define HZ_KEY_F22                311
#define HZ_KEY_F23                312
#define HZ_KEY_F24                313
#define HZ_KEY_F25                314
#define HZ_KEY_KP_0               320
#define HZ_KEY_KP_1               321
#define HZ_KEY_KP_2               322
#define HZ_KEY_KP_3               323
#define HZ_KEY_KP_4               324
#define HZ_KEY_KP_5               325
#define HZ_KEY_KP_6               326
#define HZ_KEY_KP_7               327
#define HZ_KEY_KP_8               328
#define HZ_KEY_KP_9               329
#define HZ_KEY_KP_DECIMAL         330
#define HZ_KEY_KP_DIVIDE          331
#define HZ_KEY_KP_MULTIPLY        332
#define HZ_KEY_KP_SUBTRACT        333
#define HZ_KEY_KP_ADD             334
#define HZ_KEY_KP_ENTER           335
#define HZ_KEY_KP_EQUAL           336
#define HZ_KEY_LEFT_SHIFT         340
#define HZ_KEY_LEFT_CONTROL       341
#define HZ_KEY_LEFT_ALT           342
#define HZ_KEY_LEFT_SUPER         343
#define HZ_KEY_RIGHT_SHIFT        344
#define HZ_KEY_RIGHT_CONTROL      345
#define HZ_KEY_RIGHT_ALT          346
#define HZ_KEY_RIGHT_SUPER        347
#define HZ_KEY_MENU               348

#define HZ_KEY_LAST               HZ_KEY_MENU

/*! @} */

/*! @defgroup mods Modifier key flags
*  @brief Modifier key flags.
*
*  See [key input](@ref input_key) for how these are used.
*
*  @ingroup input
*  @{ */

/*! @brief If this bit is set one or more Shift keys were held down.
*
*  If this bit is set one or more Shift keys were held down.
*/
#define HZ_MOD_SHIFT           0x0001
/*! @brief If this bit is set one or more Control keys were held down.
*
*  If this bit is set one or more Control keys were held down.
*/
#define HZ_MOD_CONTROL         0x0002
/*! @brief If this bit is set one or more Alt keys were held down.
*
*  If this bit is set one or more Alt keys were held down.
*/
#define HZ_MOD_ALT             0x0004
/*! @brief If this bit is set one or more Super keys were held down.
*
*  If this bit is set one or more Super keys were held down.
*/
#define HZ_MOD_SUPER           0x0008
/*! @brief If this bit is set the Caps Lock key is enabled.
*
*  If this bit is set the Caps Lock key is enabled and the @ref
*  HZ_LOCK_KEY_MODS input mode is set.
*/
#define HZ_MOD_CAPS_LOCK       0x0010
/*! @brief If this bit is set the Num Lock key is enabled.
*
*  If this bit is set the Num Lock key is enabled and the @ref
*  HZ_LOCK_KEY_MODS input mode is set.
*/
#define HZ_MOD_NUM_LOCK        0x0020


/*! @} */

/*! @defgroup joysticks Joysticks
*  @brief Joystick IDs.
*
*  See [joystick input](@ref joystick) for how these are used.
*
*  @ingroup input
*  @{ */
#define HZ_JOYSTICK_1             0
#define HZ_JOYSTICK_2             1
#define HZ_JOYSTICK_3             2
#define HZ_JOYSTICK_4             3
#define HZ_JOYSTICK_5             4
#define HZ_JOYSTICK_6             5
#define HZ_JOYSTICK_7             6
#define HZ_JOYSTICK_8             7
#define HZ_JOYSTICK_9             8
#define HZ_JOYSTICK_10            9
#define HZ_JOYSTICK_11            10
#define HZ_JOYSTICK_12            11
#define HZ_JOYSTICK_13            12
#define HZ_JOYSTICK_14            13
#define HZ_JOYSTICK_15            14
#define HZ_JOYSTICK_16            15
#define HZ_JOYSTICK_LAST          HZ_JOYSTICK_16
/*! @} */

/*! @defgroup gamepad_buttons Gamepad buttons
*  @brief Gamepad buttons.
*
*  See @ref gamepad for how these are used.
*
*  @ingroup input
*  @{ */
#define HZ_GAMEPAD_BUTTON_A               0
#define HZ_GAMEPAD_BUTTON_B               1
#define HZ_GAMEPAD_BUTTON_X               2
#define HZ_GAMEPAD_BUTTON_Y               3
#define HZ_GAMEPAD_BUTTON_LEFT_BUMPER     4
#define HZ_GAMEPAD_BUTTON_RIGHT_BUMPER    5
#define HZ_GAMEPAD_BUTTON_BACK            6
#define HZ_GAMEPAD_BUTTON_START           7
#define HZ_GAMEPAD_BUTTON_GUIDE           8
#define HZ_GAMEPAD_BUTTON_LEFT_THUMB      9
#define HZ_GAMEPAD_BUTTON_RIGHT_THUMB     10
#define HZ_GAMEPAD_BUTTON_DPAD_UP         11
#define HZ_GAMEPAD_BUTTON_DPAD_RIGHT      12
#define HZ_GAMEPAD_BUTTON_DPAD_DOWN       13
#define HZ_GAMEPAD_BUTTON_DPAD_LEFT       14
#define HZ_GAMEPAD_BUTTON_LAST            HZ_GAMEPAD_BUTTON_DPAD_LEFT

#define HZ_GAMEPAD_BUTTON_CROSS       HZ_GAMEPAD_BUTTON_A
#define HZ_GAMEPAD_BUTTON_CIRCLE      HZ_GAMEPAD_BUTTON_B
#define HZ_GAMEPAD_BUTTON_SQUARE      HZ_GAMEPAD_BUTTON_X
#define HZ_GAMEPAD_BUTTON_TRIANGLE    HZ_GAMEPAD_BUTTON_Y
/*! @} */

/*! @defgroup gamepad_axes Gamepad axes
*  @brief Gamepad axes.
*
*  See @ref gamepad for how these are used.
*
*  @ingroup input
*  @{ */
#define HZ_GAMEPAD_AXIS_LEFT_X        0
#define HZ_GAMEPAD_AXIS_LEFT_Y        1
#define HZ_GAMEPAD_AXIS_RIGHT_X       2
#define HZ_GAMEPAD_AXIS_RIGHT_Y       3
#define HZ_GAMEPAD_AXIS_LEFT_TRIGGER  4
#define HZ_GAMEPAD_AXIS_RIGHT_TRIGGER 5
#define HZ_GAMEPAD_AXIS_LAST          HZ_GAMEPAD_AXIS_RIGHT_TRIGGER