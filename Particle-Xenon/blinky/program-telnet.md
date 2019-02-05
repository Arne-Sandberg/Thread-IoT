* Run `ocd.bat`
* Use Tera Term with Telnet Option
    * localhost:4444
* Type the following:
```
reset halt
init
program target/nrf52840_xxaa.bin 0xD4000 verify
reset
exit
```