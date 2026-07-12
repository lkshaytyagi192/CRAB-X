/*
===========================================================
                    CRAB-X Firmware
        Bio-Inspired Quadruped Robotic Crab

Author  : Lakshay Tyagi
Version : v1.0.0
Board   : NodeMCU ESP8266
Display : 0.96" OLED SSD1306
Servo   : PCA9685 + 8x MG90S
===========================================================
*/

#include "config.h"
#include "servo_controller.h"
#include "display.h"
#include "faces.h"
#include "calibration.h"
#include "animations.h"
#include "movement.h"
#include "utils.h"

void setup()
{
    Serial.begin(115200);

    Serial.println();
    Serial.println("=================================");
    Serial.println("        CRAB-X Starting...");
    Serial.println("=================================");

    initDisplay();

    showLogo();

    initServos();

    loadCalibration();

    stand();

    showFace(FACE_HAPPY);

    Serial.println("System Ready!");
}

void loop()
{
    idleAnimation();

    // Future Modules
    // batteryMonitor();
    // readSensors();
    // handleWiFi();
    // updateWebServer();
}
