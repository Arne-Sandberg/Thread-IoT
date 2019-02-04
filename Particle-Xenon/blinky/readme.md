# Getting started on Windows
1. Install ARM GNU for Windows
    * https://developer.arm.com/open-source/gnu-toolchain/gnu-rm/downloads
    * NOT the SHA1 or SHA2 files
    * Need this version for objcopy bug:
        * https://github.com/gnu-mcu-eclipse/arm-none-eabi-gcc/releases/tag/v8.2.1-1.2
        * https://bugs.launchpad.net/gcc-arm-embedded/+bug/1810274
2. Install nRF5 SDK for Windows (just download and copy files to C:\nRF5_SDK)
    * https://www.nordicsemi.com/eng/Products/Bluetooth-low-energy/nRF5-SDK
3. Edit `components/toolchain/gcc/Makefile.Windows` to point to GNU
    ```
    GNU_INSTALL_ROOT := C:/Program Files (x86)/GNU Tools ARM Embedded/8 2018-q4-major/bin/
    GNU_VERSION := 8.2.1
    GNU_PREFIX := arm-none-eabi
    ```
4.  Install MinGW for `make`
    * http://www.mingw.org/
    * add `C:\MinGW\bin` to PATH
    * make a copy of `mingw32-make.exe` and call it `make.exe`
    ```
    $ which make
    /c/MinGW/bin/make
    ```