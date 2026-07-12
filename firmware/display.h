#ifndef DISPLAY_H
#define DISPLAY_H

#include "config.h"

//--------------------------------------------------
// OLED Object
//--------------------------------------------------

Adafruit_SSD1306 display(
    SCREEN_WIDTH,
    SCREEN_HEIGHT,
    &Wire,
    OLED_RESET
);

//--------------------------------------------------
// Initialize OLED
//--------------------------------------------------

void initDisplay()
{
    if(!display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDRESS))
    {
        Serial.println("OLED initialization failed!");

        while(true);
    }

    display.clearDisplay();
    display.display();
}

//--------------------------------------------------
// Clear Display
//--------------------------------------------------

void clearOLED()
{
    display.clearDisplay();
    display.display();
}

//--------------------------------------------------
// Show Centered Text
//--------------------------------------------------

void showText(String text, int size = 2)
{
    display.clearDisplay();

    display.setTextSize(size);
    display.setTextColor(SSD1306_WHITE);

    int16_t x1, y1;
    uint16_t w, h;

    display.getTextBounds(text, 0, 0, &x1, &y1, &w, &h);

    int x = (SCREEN_WIDTH - w) / 2;
    int y = (SCREEN_HEIGHT - h) / 2;

    display.setCursor(x, y);
    display.print(text);

    display.display();
}

//--------------------------------------------------
// Show Two-Line Text
//--------------------------------------------------

void showMessage(String line1, String line2)
{
    display.clearDisplay();

    display.setTextColor(SSD1306_WHITE);

    display.setTextSize(2);
    display.setCursor(0,12);
    display.println(line1);

    display.setTextSize(1);
    display.setCursor(0,42);
    display.println(line2);

    display.display();
}

//--------------------------------------------------
// Boot Animation
//--------------------------------------------------

void bootAnimation()
{
    display.clearDisplay();

    display.setTextSize(2);
    display.setTextColor(SSD1306_WHITE);

    display.setCursor(20,10);
    display.println("CRAB-X");

    display.setTextSize(1);
    display.setCursor(18,38);
    display.println("Bio Inspired Robot");

    display.display();

    delay(2000);

    display.clearDisplay();

    for(int i=0;i<=100;i+=5)
    {
        display.clearDisplay();

        display.setCursor(20,10);
        display.setTextSize(2);
        display.println("BOOT");

        display.drawRect(14,40,100,10,SSD1306_WHITE);
        display.fillRect(16,42,i*0.96,6,SSD1306_WHITE);

        display.display();

        delay(40);
    }

    delay(300);
}

//--------------------------------------------------
// Battery Screen
//--------------------------------------------------

void showBattery(float voltage)
{
    display.clearDisplay();

    display.setTextSize(2);

    display.setCursor(0,5);
    display.println("Battery");

    display.setTextSize(2);

    display.setCursor(20,35);
    display.print(voltage);
    display.println("V");

    display.display();
}

//--------------------------------------------------
// Status Screen
//--------------------------------------------------

void showStatus(String state)
{
    display.clearDisplay();

    display.setTextSize(1);

    display.setCursor(0,0);
    display.println("CRAB-X");

    display.drawLine(0,10,127,10,SSD1306_WHITE);

    display.setTextSize(2);

    display.setCursor(15,25);
    display.println(state);

    display.display();
}

//--------------------------------------------------
// Draw Bitmap Face
//--------------------------------------------------

void drawFace(const unsigned char *bitmap)
{
    display.clearDisplay();

    display.drawBitmap(
        0,
        0,
        bitmap,
        SCREEN_WIDTH,
        SCREEN_HEIGHT,
        SSD1306_WHITE
    );

    display.display();
}

#endif
