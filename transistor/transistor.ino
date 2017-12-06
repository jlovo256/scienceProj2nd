/* transistor
 *
 * This file will test the ability...my ability to use a
 * transistor
 *
 * @author Jamie Tudor
 * @date 12-6-2017
 */

const int basePin = 7; // the number of the base pin

void setup()
{
    pinMode(basePin, OUTPUT);  // initialize the base pin as output
}

void loop()
{
    digitalWrite(basePin, HIGH);
    delay(1000);
    digitalWrite(basePin, LOW);
    delay(1000);
}
