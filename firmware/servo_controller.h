#ifndef SERVO_CONTROLLER_H
#define SERVO_CONTROLLER_H

#include "config.h"

//--------------------------------------------------
// PCA9685 Object
//--------------------------------------------------

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(PCA9685_ADDRESS);

//--------------------------------------------------
// Servo Current Angles
//--------------------------------------------------

int servoAngle[TOTAL_SERVOS] =
{
    90,90,
    90,90,
    90,90,
    90,90
};

//--------------------------------------------------
// Initialize Servo Driver
//--------------------------------------------------

void initServos()
{
    pwm.begin();
    pwm.setPWMFreq(SERVO_FREQ);

    delay(10);

    centerAllServos();
}

//--------------------------------------------------
// Convert Angle to PWM Pulse
//--------------------------------------------------

uint16_t angleToPulse(int angle)
{
    angle = constrain(angle, 0, 180);

    return map(angle, 0, 180, SERVO_MIN, SERVO_MAX);
}

//--------------------------------------------------
// Move Single Servo
//--------------------------------------------------

void setServo(uint8_t channel, int angle)
{
    angle = constrain(angle, 0, 180);

    servoAngle[channel] = angle;

    pwm.setPWM(channel, 0, angleToPulse(angle));
}

//--------------------------------------------------
// Smooth Servo Movement
//--------------------------------------------------

void moveServoSmooth(uint8_t channel, int target, int speed = 5)
{
    target = constrain(target, 0, 180);

    int current = servoAngle[channel];

    if(current < target)
    {
        for(int i=current;i<=target;i++)
        {
            setServo(channel,i);
            delay(speed);
        }
    }
    else
    {
        for(int i=current;i>=target;i--)
        {
            setServo(channel,i);
            delay(speed);
        }
    }
}

//--------------------------------------------------
// Move Multiple Servos Together
//--------------------------------------------------

void moveGroup(int target[], int speed = 5)
{
    bool finished = false;

    while(!finished)
    {
        finished = true;

        for(int i=0;i<TOTAL_SERVOS;i++)
        {
            if(servoAngle[i] < target[i])
            {
                servoAngle[i]++;
                finished = false;
            }
            else if(servoAngle[i] > target[i])
            {
                servoAngle[i]--;
                finished = false;
            }

            pwm.setPWM(i,0,angleToPulse(servoAngle[i]));
        }

        delay(speed);
    }
}

//--------------------------------------------------
// Center All Servos
//--------------------------------------------------

void centerAllServos()
{
    for(int i=0;i<TOTAL_SERVOS;i++)
    {
        servoAngle[i]=90;
        pwm.setPWM(i,0,angleToPulse(90));
    }

    delay(500);
}

//--------------------------------------------------
// Disable All Servos
//--------------------------------------------------

void releaseServos()
{
    for(int i=0;i<TOTAL_SERVOS;i++)
    {
        pwm.setPWM(i,0,0);
    }
}

//--------------------------------------------------
// Test All Servos
//--------------------------------------------------

void servoTest()
{
    for(int i=0;i<TOTAL_SERVOS;i++)
    {
        moveServoSmooth(i,60,8);
        moveServoSmooth(i,120,8);
        moveServoSmooth(i,90,8);

        delay(150);
    }
}

#endif
