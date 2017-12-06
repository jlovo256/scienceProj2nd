/* logicGate
 *
 * This file will test using the binary decoder
 *
 * @author Jamie Tudor
 * @date 12-6-2017
 */

const int pinA = 6;
const int pinB = 7;

void setup()
{
    pinMode(pinA, OUTPUT);
    pinMode(pinB, OUTPUT);
}

void loop()
{
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, LOW);
    delay(1000);
    digitalWrite(pinA, LOW);
    digitalWrite(pinB, HIGH);
    delay(1000);
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, LOW);
    delay(1000);
    digitalWrite(pinA, HIGH);
    digitalWrite(pinB, HIGH);
    delay(1000);
    
}
