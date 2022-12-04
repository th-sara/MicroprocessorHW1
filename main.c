#include <avr/io.h>
#include <util/delay.h>

void main(void)
{
 int i=9 ;
      
 unsigned char seg[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};    
DDRC=(1<<DDC7) | (1<<DDC6) | (1<<DDC5) | (1<<DDC4) | (1<<DDC3) | (1<<DDC2) | (1<<DDC1) | (1<<DDC0);        
PORTC=(0<<PORTC7) | (0<<PORTC6) | (0<<PORTC5) | (0<<PORTC4) | (0<<PORTC3) | (0<<PORTC2) | (0<<PORTC1) | (0<<PORTC0); 
DDRA=(0<<DDA7) | (0<<DDA6) | (0<<DDA5) | (0<<DDA4) | (0<<DDA3) | (0<<DDA2) | (0<<DDA1) | (0<<DDA0);
PORTA=(0<<PORTA7) | (0<<PORTA6) | (0<<PORTA5) | (0<<PORTA4) | (0<<PORTA3) | (0<<PORTA2) | (0<<PORTA1) | (0<<PORTA0);
DDRD= (0<<DDD1) | (1<<DDD0);
PORTD=(0<<PORTD1) | (1<<PORTD0);

lcd_init(16);

     while(1){    
     if(PIND1 == 1){
           while(i>=0) {
      PORTC=seg[i];
      delay_ms(1000);
      i--;
    };

    
    lcd_clear();
    lcd_gotoxy(0,0);
    lcd_puts("The button was Pushed");
    break;
   
     }
              }
 
      }