# Embedded_System_Programming.github.io

- Sử dụng: tạo 1 thư mục "LCD" trong project ngang hàng với main.c và include.h, include vào include.h: #include "LCD/LCD.h"

- Thay đổi PIN điều khiển LCD: LCD.h --> đổi tại "LCD_CONTROL_PORT", "LCD_RS", ....; LCD.c --> đổi tại "SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA)", "SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB)"

- Nếu muốn thay đổi cấu hình cho LCD (không khuyến khích): LCD.h --> thay đổi giá trị tại "FUNCTION_SET" ...

- Setup khi chạy chương trình: LCD_SETUP();

- Xóa màn hình: LCD_COMMAND(CLEAR_DISPLAY);

- Chuyển con trỏ về hàng 1: LCD_COMMAND(ADDR_LINE1);

- Chuyển con trỏ về hàng 2: LCD_COMMAND(ADDR_LINE2);

- Xuất Data: LCD_DATA('data');

ví dụ: 
#include "include.h"

int main(void)
{

	SysCtlClockSet(SYSCTL_SYSDIV_2_5|SYSCTL_USE_PLL|SYSCTL_OSC_MAIN|SYSCTL_XTAL_16MHZ); //80MHZ	=	200/2.5

	LCD_SETUP();
	LCD_COMMAND(ADDR_LINE1);
	char time_c[] = "TIME:  :  :     ";
	char date_c[] = "DATE:  -  -20   ";
	int i;
	for (i=0;i<16;i++)
	   {
	      LCD_DATA(time_c[i]);
	   }
	LCD_COMMAND(ADDR_LINE2);
	for (i=0;i<16;i++)
		   {
		      LCD_DATA(date_c[i]);
		   }
	while(1)
	{
	}
}
