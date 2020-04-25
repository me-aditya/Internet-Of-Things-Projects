//Using Servo first time.

#include<Servo.h>

motorPin= 9;

void setup()
{
  // 'attach' the Servo Object
  // We don't need to set it as an output manually
  adityasServo.attach(servoPin);

}

void loop() {
  // turning Servo from 0 to 180 (degrees)
  // in increments of 20 degrees
  for (int i=0 ; i<=180 ; i++)
  {
    adityasServo.write(i);  //display degrees look next prob motors and infrared for more clarification
    delay(1000);
  }
}
