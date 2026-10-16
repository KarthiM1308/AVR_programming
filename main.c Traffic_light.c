#include<avr/io.h>
#include<util/delay.h>
#define F_CPU 16000000UL
void green(void){
	PORTB |=(1<<PORTB5);
	_delay_ms(5000);
	PORTB &=~(1<<PORTB5);
	
}
void yellow(void){
	PORTB |=(1<<PORTB4);
	_delay_ms(5000);
	PORTB &=~(1<<PORTB4);
	
}
void red(void){
	PORTB |=(1<<PORTB3);
	_delay_ms(5000);
	PORTB &=~(1<<PORTB3);
	
}
int main(void){
	DDRB |=((1<<PORTB5)|(1<<PORTB4)|(1<<PORTB3));
	while (1){

		green();
		yellow();
		red();
	}
}