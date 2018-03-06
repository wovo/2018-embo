To start with the workshop using a Windows PC and bmptk/CodeLite
install the following items (the downloads are available on the USB stick)

  - Python from http://www.python.org
  - CodeLite from http://codelite.org
  - Git from https://git-scm.com/downloads
  - GCC for AVR8 from http://blog.zakkemble.co.uk/avr-gcc-builds/ (no installer, copy the zip content to C:/Program Files)
  - GCC for Cortex from https://developer.arm.com/open-source/gnu-toolchain/gnu-rm/downloads

Create a work directory. In this direxctory, right-click
to open a 'GIT Bash Here' shell. In this shell, run the following
commands to grab the repositories:

  - git clone http://github.com/wovo/2018-embo
  - git clone http://github.com/wovo/bmptk
  - git clone http://github.com/wovo/hwlib

Now
  - EITHER add the bmptk/tools directorory to your PATH
  - OR copy the bmptk-make.exe, libiconv2.dll and libintl3.dll files to 
    a directory that is in your PATH (for instance C:\windows)

Connect the Arduino Uno (smallest of the two) to your laptop.
If you get a message that a driver is needed, you can find it it
bmptk/drivers/arduino.
A virtual com port will be created. 
Start the device manager and rename this port to COM4.

Connect te Arduino Due (largest of the two Arduino's) to your laptop,
using the USB connector next to the black power connector.
If you get a message that a driver is needed, you can find it it
bmptk/drivers/arduino.
A virtual com port will be created. 
Start the device manager and rename this port to COM2.

Both target boards can be connected at the same time.

In the arduino-uno (or arduino-due) library run (double-click) the 
update_cidelite_workspace.bat file.
It should create an _codelite.workspace file.
(If it doesn't, make sure python.exe is in your PATH.) 
Run (double-click) the _codelite.workspace.
Associate it with the CodeLite editor.
In CodeLite activate (double-click) the blink project.
Click Build->Run to build and download the project.
When this is succesfull, a (black) terminal window will open
that connects to the target.

When last-minute or even on-the-spot changes are made, 
those are made available through github.
To update, execute the "git pull" command inside the 
specific repository directory
(2018-embo, bmptk, hwcpp), or run (double-click) the _pull.bat file.


