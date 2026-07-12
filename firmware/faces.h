#ifndef FACES_H
#define FACES_H

#include "config.h"
#include "display.h"

/**************************************************
 *              CRAB-X OLED Faces
 **************************************************/

//--------------------------------------------------
// Show Centered Face
//--------------------------------------------------

void showFace(String face)
{
    display.clearDisplay();

    display.setTextColor(SSD1306_WHITE);
    display.setTextSize(2);

    int16_t x1, y1;
    uint16_t w, h;

    display.getTextBounds(face,0,0,&x1,&y1,&w,&h);

    int x = (SCREEN_WIDTH - w)/2;
    int y = (SCREEN_HEIGHT - h)/2;

    display.setCursor(x,y);
    display.print(face);

    display.display();
}

//--------------------------------------------------
// Neutral
//--------------------------------------------------

void faceNeutral()
{
    showFace("(-_-)");
}

//--------------------------------------------------
// Happy
//--------------------------------------------------

void faceHappy()
{
    showFace("(^_^)");
}

//--------------------------------------------------
// Excited
//--------------------------------------------------

void faceExcited()
{
    showFace("(^o^)");
}

//--------------------------------------------------
// Love
//--------------------------------------------------

void faceLove()
{
    showFace("(♥_♥)");
}

//--------------------------------------------------
// Angry
//--------------------------------------------------

void faceAngry()
{
    showFace("(>_<)");
}

//--------------------------------------------------
// Sleep
//--------------------------------------------------

void faceSleep()
{
    showFace("(-.-)Z");
}

//--------------------------------------------------
// Surprised
//--------------------------------------------------

void faceSurprised()
{
    showFace("(O_O)");
}

//--------------------------------------------------
// Confused
//--------------------------------------------------

void faceConfused()
{
    showFace("(?_?)");
}

//--------------------------------------------------
// Cool
//--------------------------------------------------

void faceCool()
{
    showFace("(¬‿¬)");
}

//--------------------------------------------------
// Dead
//--------------------------------------------------

void faceDead()
{
    showFace("(x_x)");
}

//--------------------------------------------------
// Boot Logo
//--------------------------------------------------

void faceBoot()
{
    display.clearDisplay();

    display.setTextSize(2);
    display.setCursor(18,8);
    display.println("CRAB-X");

    display.setTextSize(1);
    display.setCursor(18,35);
    display.println("Bio Inspired");

    display.setCursor(32,48);
    display.println("Robot");

    display.display();
}

//--------------------------------------------------
// Blink Animation
//--------------------------------------------------

void blinkAnimation()
{
    showFace("(-_-)");
    delay(150);

    showFace("(-.-)");
    delay(120);

    showFace("(-_-)");
}

//--------------------------------------------------
// Happy Blink
//--------------------------------------------------

void happyBlink()
{
    faceHappy();
    delay(800);

    showFace("(^-^)");
    delay(120);

    faceHappy();
}

//--------------------------------------------------
// Idle Animation
//--------------------------------------------------

void idleAnimation()
{
    faceNeutral();
    delay(2000);

    blinkAnimation();

    delay(2500);

    faceNeutral();
}

#endif
