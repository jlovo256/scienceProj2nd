/* logicGate
 *
 * This file will test using the binary decoder
 *
 * @author Jamie Tudor
 * @date 12-6-2017
 */

const int pin1A = 0;
const int pin1B = 1;
const int pin2A = 2;
const int pin2B = 3;
const int pin3A = 4;
const int pin3B = 5;
const int pin4A = 6;
const int pin4B = 7;
const int pin5A = 8;
const int pin5B = 9;

void setup()
{
    pinMode(pin1A, OUTPUT);
    pinMode(pin1B, OUTPUT);
    pinMode(pin2A, OUTPUT);
    pinMode(pin2B, OUTPUT);
    pinMode(pin3A, OUTPUT);
    pinMode(pin3B, OUTPUT);
    pinMode(pin4A, OUTPUT);
    pinMode(pin4B, OUTPUT);
    pinMode(pin5A, OUTPUT);
    pinMode(pin5B, OUTPUT);
}

void loop()
{
    digitalWrite(pin1A, LOW);
    digitalWrite(pin1B, LOW);
    digitalWrite(pin2A, LOW);
    digitalWrite(pin2B, LOW);
    digitalWrite(pin3A, LOW);
    digitalWrite(pin3B, LOW);
    digitalWrite(pin4A, LOW);
    digitalWrite(pin4B, LOW);
    digitalWrite(pin5A, LOW);
    digitalWrite(pin5B, LOW);
    delay(1000);
    digitalWrite(pin1A, HIGH);
    digitalWrite(pin1B, LOW);
    digitalWrite(pin2A, HIGH);
    digitalWrite(pin2B, LOW);
    digitalWrite(pin3A, HIGH);
    digitalWrite(pin3B, LOW);
    digitalWrite(pin4A, HIGH);
    digitalWrite(pin4B, LOW);
    digitalWrite(pin5A, HIGH);
    digitalWrite(pin5B, LOW);
    delay(1000);
    digitalWrite(pin1A, LOW);
    digitalWrite(pin1B, HIGH);
    digitalWrite(pin2A, LOW);
    digitalWrite(pin2B, HIGH);
    digitalWrite(pin3A, LOW);
    digitalWrite(pin3B, HIGH);
    digitalWrite(pin4A, LOW);
    digitalWrite(pin4B, HIGH);
    digitalWrite(pin5A, LOW);
    digitalWrite(pin5B, HIGH);
    delay(1000);
    digitalWrite(pin1A, HIGH);
    digitalWrite(pin1B, HIGH);
    digitalWrite(pin2A, HIGH);
    digitalWrite(pin2B, HIGH);
    digitalWrite(pin3A, HIGH);
    digitalWrite(pin3B, HIGH);
    digitalWrite(pin4A, HIGH);
    digitalWrite(pin4B, HIGH);
    digitalWrite(pin5A, HIGH);
    digitalWrite(pin5B, HIGH);
    delay(1000);
    
}
