#include <xc.h>
#include<avr/io.h>
#include<util/delay.h>
#define F_CPU 16000000UL

int main(void)
{
	//SET THE DIRECTION PORTB PIN 5 AS A OUTPUT
	DDRB |=(1<<DDB5);//configure pin 5 as a output
	while(1)
	{
		//make the PORTB pin is HIGH
		PORTB |=(1 << PORTB5) ;//32
		_delay_ms(1000);
		PORTB &=~(1 << PORTB5);//0
		_delay_ms(1000);
		
	}
}