#ifndef CALIBRATION_H
#define CALIBRATION_H

#include "config.h"

/**************************************************
 *          CRAB-X Servo Calibration
 **************************************************/

/*
    Positive Value  -> Clockwise Offset

    Negative Value  -> Counter Clockwise Offset

    Adjust these after assembly.
*/

//-----------------------------------------------
// Servo Offset Table
//-----------------------------------------------

int servoOffset[TOTAL_SERVOS] =
{
    0,      // Front Right Hip
    0,      // Front Right Knee

    0,      // Front Left Hip
    0,      // Front Left Knee

    0,      // Rear Right Hip
    0,      // Rear Right Knee

    0,      // Rear Left Hip
    0       // Rear Left Knee
};

//-----------------------------------------------
// Servo Direction
//-----------------------------------------------

bool servoReverse[TOTAL_SERVOS] =
{
    false,
    false,

    true,
    true,

    false,
    false,

    true,
    true
};

//-----------------------------------------------
// Apply Calibration
//-----------------------------------------------

int calibrateServo(uint8_t channel, int angle)
{
    angle += servoOffset[channel];

    if(servoReverse[channel])
    {
        angle = 180 - angle;
    }

    angle = constrain(angle,0,180);

    return angle;
}

//-----------------------------------------------
// Set Servo Offset
//-----------------------------------------------

void setServoOffset(uint8_t servo,int offset)
{
    servoOffset[servo]=offset;
}

//-----------------------------------------------
// Get Servo Offset
//-----------------------------------------------

int getServoOffset(uint8_t servo)
{
    return servoOffset[servo];
}

//-----------------------------------------------
// Reset Calibration
//-----------------------------------------------

void resetCalibration()
{
    for(int i=0;i<TOTAL_SERVOS;i++)
    {
        servoOffset[i]=0;
    }
}

//-----------------------------------------------
// Print Calibration
//-----------------------------------------------

void printCalibration()
{
    Serial.println();

    Serial.println("===== Servo Calibration =====");

    for(int i=0;i<TOTAL_SERVOS;i++)
    {
        Serial.print("Servo ");

        Serial.print(i);

        Serial.print(" : ");

        Serial.println(servoOffset[i]);
    }

    Serial.println("=============================");
}

#endif
