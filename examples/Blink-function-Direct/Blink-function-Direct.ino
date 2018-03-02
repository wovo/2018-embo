#include "avr/io.h"

void blink( unsigned char * direction, unsigned char * data, int pin ){
   *direction |= 0x01 << pin; 
   for(;;){
      *data |= 0x01 << pin; 
      for( volatile long int i = 0; i < 100'000; ++i ){}
      *data &= ~( 0x01 << pin ); 
      for( volatile long int i = 0; i < 100'000; ++i ){}
   }
}

int main(){ 
   blink( &DDRB, &PORTB, 5 );
}