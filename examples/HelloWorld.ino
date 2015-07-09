
#include "ESP8266_Nokia5110.h"

#define PIN_SCE   5  //D1
#define PIN_RESET 4  //D2
#define PIN_DC    0  //D3
#define PIN_SDIN  2  //D4
#define PIN_SCLK  14 //D5

// LCD Gnd .... GND
// LCD Vcc .... 3.3v

ESP8266_Nokia5110 lcd = ESP8266_Nokia5110(PIN_SCLK,PIN_SDIN,PIN_DC,PIN_SCE,PIN_RESET);


void setup() {
  lcd.begin();
  lcd.clear();
  lcd.setContrast(0x20);
  lcd.setCursor(0,2);
  lcd.print("Hello World");
  lcd.setCursor(2,3);
  lcd.print("Hello World");

}

void loop() {

}
