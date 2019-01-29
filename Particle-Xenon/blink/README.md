# Set up Particle Debugger for Windows
[Adapted from this forum post.](https://community.particle.io/t/how-to-use-the-debugger-with-xenon-boron/46036/)

1. [Install OpenOCD](http://gnutoolchains.com/arm-eabi/openocd/)
    * Rememeber to add the bin folder to the PATH in environment variables

2. Copy the OpenOCD target file nrf52-var.cfg12 from inside external to OpenOCD install directory

3. Download Visual Studio Code.

4. Apply for, download, and install the Particle Workbench, Themes, and Code Snippets extensions

5. Use the included settings files
    * If you change "request": to "launch" type, it does not work properly, the Debugging session gets lost and corrupts the Particle Device OS. You will then have to re-flash the Particle Device OS!


6. In VS Code, code your program, press Ctrl-shift-b to bring up the Particle Build commands and pick Particle: Flash application for debug (local). 
    * Place a couple of breakpoints in your program for testing.

7. Connect the Particle (mesh) Debugger cable to the Xenon SWD port and plug in the interface to another usb port. Remember not to use pin D7 (User LED) in your own programs because it will mess up SWD debugging!

8. Connect your Xenon to a usb port on your computer and place it in DFU mode (hold both buttons then release RESET and still hold MODE until RGB LED is blinking Yellow) for local flashing

9. In VS Code, go to the debug tab (crossed out bug), then green arrow at the top to start debugging. Your Particle Debugger board should be blinking blue frenetically. This is good! Now look at your source file. The debugger never made it to your breakpoints. Select the Debug Console and see that your program is paused. Now press on the floating Debugger panel (top middle) Continue (F5) button and wait a long time for it to get to the first breakpoint. You are ready to debug when the breakpoint is highlighted in yellow. You made it!

10. At the bottom of the Debug Console is a prompt > to enter GDB commands like help and you can talk to the debugger interface with monitor commands like monitor help. This is the same as telnet localhost 4444 from a terminal to talk to the interface through OpenOCD.
    * Other useful consoles are Output with Adapter Output selected. Also press F1 and select Particle: Serial Monitor to see your program’s usb output on the Terminal.

11. When done debugging, select Stop Debugging from the Debug menu. Before you can debug another session, you will need to press reset on the Xenon board.