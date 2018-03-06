2018 emBO workshop using a Windows PC and bmptk/CodeLite/HwCpp.

Create a work directory.
Copy the content of the USB stick to the work directory.

install the following items 
(either from the web or from the install directory):

  - Python (http://www.python.org)
  - CodeLite (http://codelite.org)
  - Git from (https://git-scm.com/downloads)

The datasheets are pdfs, I assume you have a reader for that format.

Now
  - EITHER add the bmptk/tools directorory to your PATH
  - OR copy bmptk-make.exe, libiconv2.dll and libintl3.dll 
    (3 files) to a directory that is in your PATH (for instance C:\windows)

Connect the Arduino Uno (smallest of the two) to your laptop.
If you get a message that a driver is needed, you can find it it
bmptk/drivers/arduino.
A virtual com port will be created. 
Start the device manager and rename this port to COM4.
Disconnect the Arduino Due and reconnect it.

Connect te Arduino Due (largest of the two Arduino's) to your laptop,
using the USB connector next to the black power connector.
If you get a message that a driver is needed, you can find it it
bmptk/drivers/arduino.
A virtual com port will be created. 
Start the device manager and rename this port to COM2.
Disconnect the Arduino Uno and reconnect it.

Both target boards can be connected and used at the same time.

In the arduino-uno (or arduino-due) library run (double-click) the 
update_codelite_workspace.bat file.
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
(2018-embo, bmptk, hwcpp), 
or run (double-click) the _pull.bat file.

To create a new project: 
  - make a copy of an existing directory
    (in the arduino-uno or arduino-due main directory), 
  - run the update_codelite_workspace.bat script
    in the main directory
  - If CodeLite is active in that main direcory, it 
    should automatically re-load its workspace. If not,
    stop CodeLite and start it again.

