#include "avr/io.h"

int main(){ 
   DDRB |= 0x01 << 5; 
   for(;;){
      PORTB |= 0x01 << 5; 
      for( volatile long int i = 0; i < 100'000; ++i ){}
      PORTB &= ~( 0x01 << 5 ); 
      for( volatile long int i = 0; i < 100'000; ++i ){}
   }
}