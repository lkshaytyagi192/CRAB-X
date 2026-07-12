#ifndef CONFIG_H
#define CONFIG_H

/**************************************************
 *               CRAB-X Configuration
 **************************************************/

//-------------------------------------------------
// Robot Information
//-------------------------------------------------

#define ROBOT_NAME       "CRAB-X"
#define FIRMWARE_VERSION "1.0.0"

//-------------------------------------------------
// Libraries
//-------------------------------------------------

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

//-------------------------------------------------
// OLED Display
//-------------------------------------------------

#define SCREEN_WIDTH   128
#define SCREEN_HEIGHT   64

#define OLED_RESET     -1

#define OLED_ADDRESS   0x3C

//-------------------------------------------------
// I2C Pins (NodeMCU ESP8266)
//-------------------------------------------------

#define SDA_PIN D2
#define SCL_PIN D1

//-------------------------------------------------
// PCA9685 Servo Driver
//-------------------------------------------------

#define PCA9685_ADDRESS 0x40

#define SERVO_FREQ      50

//-------------------------------------------------
// Servo Pulse Limits
//-------------------------------------------------

#define SERVO_MIN 110
#define SERVO_MAX 510

//-------------------------------------------------
// Number of Servos
//-------------------------------------------------

#define TOTAL_SERVOS 8

//-------------------------------------------------
// Servo Channels
//-------------------------------------------------

#define FRONT_RIGHT_HIP      0
#define FRONT_RIGHT_KNEE     1

#define FRONT_LEFT_HIP       2
#define FRONT_LEFT_KNEE      3

#define REAR_RIGHT_HIP       4
#define REAR_RIGHT_KNEE      5

#define REAR_LEFT_HIP        6
#define REAR_LEFT_KNEE       7

//-------------------------------------------------
// Servo Default Position
//-------------------------------------------------

#define HIP_CENTER     90
#define KNEE_CENTER    90

//-------------------------------------------------
// Walking Parameters
//-------------------------------------------------

#define STEP_HEIGHT    20

#define STEP_LENGTH    30

#define WALK_SPEED     15

//-------------------------------------------------
// Battery
//-------------------------------------------------

#define BATTERY_WARNING_VOLTAGE 6.8

//-------------------------------------------------
// Global Objects
//-------------------------------------------------

extern Adafruit_PWMServoDriver pwm;

extern Adafruit_SSD1306 display;

//-------------------------------------------------
// Robot States
//-------------------------------------------------

enum RobotState
{
    BOOTING,

    IDLE,

    WALK_FORWARD,

    WALK_BACKWARD,

    TURN_LEFT,

    TURN_RIGHT,

    DANCE,

    SLEEP
};

extern RobotState robotState;

#endif
