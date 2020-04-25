//Using Servo first time.

#include<Servo.h>
Servo adityasServo ;
int servoPin = 9; //not a motorPin , correct it in previous Servo problem
int distPin = 0;

void setup()
{
  // 'attach' the Servo Object
  // We don't need to set it as an output manually
  adityasServo.attach(servoPin);
  
}

void loop()
{
  int dist = analogRead(distPin); 
  int pos = map(dist, 0,1023,0,180);// relate dist  and 1023 to understand this function
  adityasServo.write(pos);  //pos for position
  delay(1000);
}
