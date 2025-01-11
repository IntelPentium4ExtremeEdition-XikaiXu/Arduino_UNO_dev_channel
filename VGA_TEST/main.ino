#include"vga_driver.h"
static int i;
void setup(){
    pinMode(ledPin, OUTPUT);
    i = 0;
}

void loop(){
    i++;
    digitalWrite(ledPin,1);
    delay(i);
    digitalWrite(ledPin,0);
    if(i == 10000) i = 0;
    
}