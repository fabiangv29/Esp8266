#ifndef Pins_Arduino_h
#define Pins_Arduino_h

#define PIN_WIRE_SDA (4)
#define PIN_WIRE_SCL (5)

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;

//Buttons pins 
#define BUTTON_ACTIVE_LOW 1
#define PULL_UP_ACTIVE 1
#define BUTTON_0_PIN 5
#define BUTTON_1_PIN 4
#define BUTTON_2_PIN 0

//Outputs pins
#define INITIAL_OUTPUT_STATE LOW 
#define OUTPUT_0_PIN 14
#define OUTPUT_1_PIN 12
#define OUTPUT_2_PIN 13

//Status LED
#define STATUS_LED 16
#define NO_CONNECTION_STATUS_LED HIGH
#define CONNECTION_STATUS_LED LOW

#include "../generic/common.h"

#endif /* Pins_Arduino_h */
