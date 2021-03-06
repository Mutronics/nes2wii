#ifndef _DEFINES_H_
#define _DEFINES_H_

#define F_CPU 8000000L

#define TWI_PORT C
#define TWI_SCL_PIN 0
#define TWI_SDA_PIN 1

#define N64_ENABLED
#define N64_PORT D
#define N64_DATA_PIN 7

#define NES_ENABLED
#define NES_PORT A
#define NES_LATCH_PIN 0
#define NES_CLOCK_PIN 1
#define NES_DATA_PIN 2

#define SNES_ENABLED
#define SNES_PORT A
#define SNES_LATCH_PIN 4
#define SNES_CLOCK_PIN 5
#define SNES_DATA_PIN 6

#define SMD_ENABLED
#define SMD_SELECT_PORT A
#define SMD_SELECT_PIN 7
#define SMD_DATA_PORT C
#define SMD_DATA0_PIN 2
#define SMD_DATA1_PIN 3
#define SMD_DATA2_PIN 4
#define SMD_DATA3_PIN 5
#define SMD_DATA4_PIN 6
#define SMD_DATA5_PIN 7

#define DUALSHOCK_ENABLED
#define DUALSHOCK_PORT D
#define DUALSHOCK_DATA_PIN 2
#define DUALSHOCK_COMMAND_PIN 3
#define DUALSHOCK_ATTENTION_PIN 5
#define DUALSHOCK_CLOCK_PIN 6

#define RED_LED_PORT B
#define RED_LED_PIN 4
#define GREEN_LED_PORT B
#define GREEN_LED_PIN 3

#endif
