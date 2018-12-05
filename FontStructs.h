/*
 * FontStructs.h
 *
 *  Created on: Jun 20, 2018
 *      Author: debojitk
 */

#ifndef LIBRARIES_ESP8266_5110_FONTSTRUCTS_H_
#define LIBRARIES_ESP8266_5110_FONTSTRUCTS_H_

#include <Arduino.h>

struct FONT_CHAR_INFO{
	uint8_t length;
	uint16_t offset;
};

struct FONT_INFO{
	uint8_t charHeight;//in byte
	uint8_t startChar;
	uint8_t endChar;
	const FONT_CHAR_INFO  *descriptor;
	const uint8_t *characters;
};

enum FONT_ALIGNMENT:uint8_t{
	LEFT=1,
	CENTER,
	RIGHT,
	JUSTIFY
};
enum FONT:uint8_t{
	FONT_ARIAL_NARROW_7PT,
	COMIC_SANS_REGULAR_7PT,
};

extern const FONT_INFO font_array[];



#endif /* LIBRARIES_ESP8266_5110_FONTSTRUCTS_H_ */
