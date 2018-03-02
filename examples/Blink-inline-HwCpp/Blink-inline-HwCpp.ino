#include "hwcpp.hpp"

using target = hwcpp::target<>;
using led    = target::led;
using timing = target::timing;

int main(){ 
   led::init();
   timing::init();
   for(;;){
      led::set( 1 );
      timing::ms< 200 >::wait();
      led::set( 0 );
      timing::ms< 200 >::wait();
   }
}