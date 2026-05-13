#include"Arduino.h"
char data;
const int ledPin = 5;

void setup()
{
    Serial.begin(9600);      // Start serial communication
    pinMode(ledPin, OUTPUT); // Set LED pin as output

    digitalWrite(ledPin, LOW); // Initially turn LED OFF
}

void loop()
{
    // Check if serial data is available
    if (Serial.available() > 0)
    {
        data = Serial.read();

        // Turn LED ON when 'A' is received
        if (data == 'A')
        {
            digitalWrite(ledPin, HIGH);
        }

        // Turn LED OFF when 'B' is received
        else if (data == 'B')
        {
            digitalWrite(ledPin, LOW);
        }
    }
}
