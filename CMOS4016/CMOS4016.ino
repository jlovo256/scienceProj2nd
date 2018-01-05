/* logicGate
 *
 * This file will test using the CMOS Quad Bilateral Switch
 *
 * @author Jamie Tudor
 * @date 01-04-2018
 */

const int pinX0 = 0;
const int pinX1 = 1;
const int pinX2 = 2;
const int pinX3 = 3;

void setup()
{
    pinMode(pinX0, OUTPUT);
    pinMode(pinX1, OUTPUT);
    pinMode(pinX2, OUTPUT);
    pinMode(pinX3, OUTPUT);
}

void loop()
{
    digitalWrite(pinX0, HIGH);
    digitalWrite(pinX1, LOW);
    digitalWrite(pinX2, LOW);
    digitalWrite(pinX3, LOW);
    delay(1000);
    digitalWrite(pinX0, LOW);
    digitalWrite(pinX1, HIGH);
    digitalWrite(pinX2, LOW);
    digitalWrite(pinX3, LOW);
    delay(1000);
    digitalWrite(pinX0, LOW);
    digitalWrite(pinX1, LOW);
    digitalWrite(pinX2, HIGH);
    digitalWrite(pinX3, LOW);
    delay(1000);
    digitalWrite(pinX0, LOW);
    digitalWrite(pinX1, LOW);
    digitalWrite(pinX2, LOW);
    digitalWrite(pinX3, HIGH);
    delay(1000);
    
}
