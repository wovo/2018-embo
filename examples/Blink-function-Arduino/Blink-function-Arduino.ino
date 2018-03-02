void blink( int led ){
   pinMode( led, OUTPUT );
   for(;;){
      digitalWrite( led, HIGH );  
      delay( 200 );                     
      digitalWrite( led, LOW );  
      delay( 200 );    
   }
}

void setup(){}

void loop(){
   blink( LED_BUILTIN );                    
}
