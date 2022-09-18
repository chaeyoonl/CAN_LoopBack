#ifndef __CONFIG_H
#define __CONFIG_H

//-----------------------------------------------------------------------------
// MODEL
//-----------------------------------------------------------------------------

  #define MODEL_FUSO                  1
  #define MODEL_ISUZU                 0

//-----------------------------------------------------------------------------
// Macro Define
//-----------------------------------------------------------------------------

  /* System */
  #define BIG_ENDIAN                  0       // 0:Little, 1:Big

  #define UART1_PRINTF                3       // 0:Terminal, 1:libc putchar, 2:libc __write, 3:tiny printf

  #define UART_TX_DMA                 0
  #define UART_RX_DMA                 0

  #define I2C_SW_CONTROL              1       // 0:HW, 1:SW

  /* Test Macro */
  #define TEST_KEY_ADVALUE            0       // A/D Key Test
  #define KNOB_SPEED_DOWN             1       // Knob
  #define TEST_TIMING                 0       // Use Port for test
  #define TEST_SIMUL                  0       // 0:AP, 1:SIMUL
  #define TEST_NOTUNER                0
  #define TEST_MEDIA_ONLY             0
  #define TEST_CAN                    0
  #define TEST_REARCAM_BY_GPIO        1
  #define TEST_REARCAM_BY_UART        0

  /* Feature */
  #define HAVE_BEEP                   1       // Use Beep
  #define HAVE_WHEEL_REM              0       // Use Wheel Remocon
  #define HAVE_WATCHDOG_CPU           0       // Use Pseudo Watchdog for CPU
  #define HAVE_WATCHDOG_MCU           0       // Use Watchdog for MCU
  #define HAVE_ACC_OFF_WAIT           50      // After 50msec, turn off power

  #define HAVE_CHECK_BOOT_DONE        0       // Check CPU.F_BootDone
  #define HAVE_COMM_PROTECTION        1       // Backlight

  #define HAVE_DOUBLE_KEY_BLOCK       0
  #define HAVE_VER_DISP_NEW           1       //

  #define HAVE_FACTORY_AREA           0       //

  #define HAVE_OPTION_BYTE_RESET      0       // 1

  #define HAVE_CSP_PINMUTE            0

  #define HAVE_DEBUG_SLEEP_MODE       0
  #define HAVE_DEBUG_UART             0
  #define HAVE_DEBUG_CAR              1
  #define HAVE_DEBUG_SEQ              0
  #define HAVE_DEBUG_ADC              1

  #define HAVE_ENG_MODE               1       // Engineering Mode
  #define TEST_MODE                   0       // Test Mode

  #define TIME_RADIO_CHECK            150     // 1500 msec

  #define HAVE_CAN                    1
  #define HAVE_CAN_LISTEN_ONLY        0
  #define HAVE_CAN_WAKEUP             1
  #define HAVE_CAN_WAIT_CLOCK_CHANGE  0
  #define CAN_SLEEP_TIME              11      // 1 sec
  #define CAN_WATCH_TIME              21      // 2 sec

  #define BL_PERIOD                   50      // 50usec = 20kHz
  #define KL_PERIOD                   50      // 50usec = 20kHz

  #define DISABLE_ALT_AUDIO           0

  #define HAVE_TOUCH_BEEP             0
  #define HAVE_CHEAT_BEEP             0
  #define HAVE_INT1_VOL_CONST         1

  #define HAVE_DIRECT_VOLUME_TABLE    1

  #define HAVE_GSENSOR_INT            0
  #define HAVE_GSENSOR_TUNING         0
  #define HAVE_GSENSOR_BMA422_REF     0

  #define HAVE_KEY_PWM                0       // additional setting required at stm32f4xx_hal_msp.c
  #define HAVE_FAN_PWM                0       // additional setting required at stm32f4xx_hal_msp.c

//-----------------------------------------------------------------------------
// LITBIG
//-----------------------------------------------------------------------------

  #define HAVE_PC_COMMAND             1
  #define TEST_BAND_CHANGE            0

  #define HAVE_DEBUG_IR               0
  #define HAVE_DEBUG_GSENSOR          1
  #define HAVE_DEBUG_KEY              0

//-----------------------------------------------------------------------------
// HLAB
//-----------------------------------------------------------------------------

  #define HLAB_SPEC_AUDIO             1
  #define HLAB_SPEC_RADIO             1
  #define HLAB_SPEC_MUTE              1       // mute off when volume up/dn
  #define HLAB_SPEC_RADIO_MUTE        1       // 0:AudioMute, 1:apollon_set_avoff
  #define HLAB_SPEC_RADIO_SEARCH_NOTI 1       // 0:All SetFreq, 1:Start/End

//-----------------------------------------------------------------------------
// Tuner
//-----------------------------------------------------------------------------

  #define HAVE_TUNER_HIT1             0
  #define HAVE_TUNER_HIT2             0
  #define HAVE_TUNER_SILAB            1

  #define HAVE_TUNER_TEST             0
  #define HAVE_SEEK_SCAN              1
  #define HAVE_STEREO_INDICATOR       1
  #define HAVE_AF_SEARCH              1
  #define HAVE_PTY_SEEK               1

//#define OPTION__BOOT_FROM_ROM

//-----------------------------------------------------------------------------
// Debug
//-----------------------------------------------------------------------------

  #define HAVE_DEBUG_PRINTF           0

  #define D_PRINTF(fmt, args...)      do { \
                                        if(HAVE_DEBUG_PRINTF) { \
                                          printf(fmt, ## args); \
                                      }} while (0)

#endif // __CONFIG_H
