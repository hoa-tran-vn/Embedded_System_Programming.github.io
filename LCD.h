/*
 * LCD.h
 *
 *  Created on: Jul 11, 2020
 *      Author: Dell PC
 */

#ifndef LCD_LCD_H_
#define LCD_LCD_H_

#ifndef LCD_CONTROL_PORT
#define LCD_CONTROL_PORT   GPIO_PORTA_BASE
#endif

#ifndef LCD_RS
#define LCD_RS   GPIO_PIN_2
#endif

#ifndef LCD_RW
#define LCD_RW   GPIO_PIN_4
#endif

#ifndef LCD_E
#define LCD_E   GPIO_PIN_3
#endif

#ifndef LCD_DATA_PORT
#define LCD_DATA_PORT   GPIO_PORTB_BASE
#endif

#define FUNCTION_SET    0X38
#define DISPLAY_CONTROL 0X0F
#define CLEAR_DISPLAY   0X01
#define ENTRY_MODE      0X06
#define SHIFT_LEFT      0X18
#define SHIFT_RIGHT     0X1C
#define ADDR_LINE1      0X80
#define ADDR_LINE2      0XC0

extern void LCD_COMMAND(unsigned char MDK);
void LCD_DATA(unsigned char MHT);
extern void LCD_SETUP(void);

#endif /* LCD_LCD_H_ */
