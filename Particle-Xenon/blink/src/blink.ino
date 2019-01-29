// onboard LED of Photon
int led = D0;

// how long to delay between blinks
int rate = 500;

void setup() {
    // set pin to output
    pinMode(led, OUTPUT);
}

void loop() {
    // wait until rate is changed to something
    if (rate != 0)
    {
        // set LED high
        digitalWrite(led, HIGH);
        
        // delay
        delay(rate);
        
        // set LED low
        digitalWrite(led, LOW);
        
        // delay
        delay(rate);
    }
}