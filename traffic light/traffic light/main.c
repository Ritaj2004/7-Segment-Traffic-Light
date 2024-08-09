/*
 * traffic light.c
 *
 * Created: 8/6/2024 4:21:58 AM
 * Author : Ritaj
 */ 

#include <avr/io.h>
#include <avr/delay.h>
typedef unsigned char u8;

int main(void)
{
 DDRA=0b11111111;
 DDRB=0b11111111;
 DDRC=0b11111111;
 u8 numbers[10]={0b00111111,0b00000110,0b01011011,0b01001111,0b01100110
	 ,0b01101101,0b01111101,0b00000111,0b01111111,0b01101111};
    while (1) 
	
    {   
		for(int j=3;j>=0;j--){
		PORTC=0b00000001;
		PORTA=numbers[j];
		for (int i=9;i>=0;i--)
		{    if (j==3){
			i=0;
		}
			PORTB=numbers[i];
			_delay_ms(500);
		}
    }
	for (int i=5;i>=0;i--)
	{   	
	PORTC=0b00000010;
	PORTB=numbers[i];
	_delay_ms(500);	
}
for(int j=3;j>=0;j--){
	PORTC=0b00000100;
	PORTA=numbers[j];
	for (int i=9;i>=0;i--)
	{    if (j==3){
		i=0;
	}
	PORTB=numbers[i];
	_delay_ms(500);	
}
}
}
}

