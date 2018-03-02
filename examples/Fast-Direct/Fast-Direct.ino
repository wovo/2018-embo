#include "avr/io.h"

int main(){ 
   DDRB |= 0x01 << 5; 
   for(;;){
      PORTB |= 0x01 << 5; 
      PORTB &= ~( 0x01 << 5 ); 
   }
}