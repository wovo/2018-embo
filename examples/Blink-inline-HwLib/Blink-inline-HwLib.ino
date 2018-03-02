#include "hwlib.hpp"

int main( void ){
   auto led = hwlib::target::pin_out( 1, 5 );
   for(;;){
      led.set( 1 );
      hwlib::wait_ms( 200 );
      led.set( 0 );
      hwlib::wait_ms( 200 );
   }
}
