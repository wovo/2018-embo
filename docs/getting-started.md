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

Recommended:
  - a good text editor, my preference is UltraEdit

When last-minute or even on-the-spot changes are made, 
those are made available through github.
To update, execute the "git pull" command inside the specific library
(2018-embo, bmptk, hwcpp, hwlib), or double-click the _pull.bat. 

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

