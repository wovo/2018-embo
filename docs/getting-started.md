To start with the workshop using a Windows PC:
  - install the Arduino IDE 
  - copy the content of the supplied zip over the arduino directory
  - connect the Arduino Uno
  - start the Arduino IDE
  - select Tools -> Board -> the board that you use (Arduino/Genuino Uno)
  - select Tools -> Port -> the port that connects the Arduino
  - click File -> Examples -> HwCpp -> Blink
  - in the new IDE window, click Sketch -> Upload
  - after some activity in the lower part of the IDE window 
    the LED on the Arduino board should start blinking

FYI, the zip 
  - adds the libraries and examples from github.com/wovo
    (2018-embo, bmptk, hwcpp, hwlib)
  - updates the Arduino's built-in AVR GCC toolchain 
    with a more recent version
  - enables C++17 and concepts
  - enables logging of the build activities
  - arranges that disassembly and functions list files are generated

PS the zip does *not* overwrite the Cortex toolchain, 
because it is not located within the Arduino directory tree.

