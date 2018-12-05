
#ifndef ESP8266_Nokia5110_h
#define ESP8266_Nokia5110_h


#include <Arduino.h>
#include <FontStructs.h>
#include "ArialNarrow7pt.h"
#include "ComicSans7pt.h"

//The DC pin tells the LCD if we are sending a command or data
#define LCD_COMMAND 0
#define LCD_DATA  1

#define LCD_COL   84
#define LCD_ROW   48



class ESP8266_Nokia5110 {
public:
    ESP8266_Nokia5110(uint8_t SCLK, uint8_t DIN, uint8_t DC, uint8_t CS, uint8_t RST);
    //Position the LCD cursor; that is, set the location at which subsequent text written to the LCD will be displayed.
    //Columns are in pixels (0-83) and rows are 8 pixels high for a total of 6
    void setCursor(uint8_t col, uint8_t row);
    //Initializes display. Must be called before writing to display
    void begin();
    //Sets the contrast for the LCD screen
    void setContrast(uint8_t val);
    //Write a single character to the screen at the current cursor location
    void write(char character);
    void writeDynamic(char character);
    //displays text to the screen at the current cursor location
    void print(String val);
    //displays text to the screen at the current cursor location
    void printDynamic(String val);
    //Positions the cursor in the upper-left of the LCD. That is, use that location in outputting subsequent text to the display. To also clear the display, use the clear() function instead.
    void home();
    //Clear screen and sets cursor position to home
    void clear();
    void setAlignment(FONT_ALIGNMENT alignment=LEFT);
    void setFont(FONT font);
private:
  //Send data or a command over the SPI bus to LCD
  void send(byte dc, byte data);
  uint8_t _din;
  uint8_t _sclk;
  uint8_t _dc;
  uint8_t _rst;
  uint8_t _cs;
  FONT_ALIGNMENT _alignment=LEFT;
  uint8_t _currentRow;
  uint8_t _currentCol;
  FONT_INFO _currentFont;
};

#endif
