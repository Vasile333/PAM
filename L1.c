#include <stdio.h>
#include <Arduino.h>

int serial_putChar (char c, FILE*f){
    Serial.write(c);
    return c;
}
