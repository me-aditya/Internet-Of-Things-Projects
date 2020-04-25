int ledPin = 9;
int lightPin =1 ;
int motionPin = 0 ;
int thresh = 200;
int currentDist = 0;
int lastDist =0   ;

void setup()
{
  // we didn't use  << pinMode( lightPin , INPUT);>> Why ?
 pinMode( ledPin , OUTPUT);

}

void loop()
{
 int lightVal = analogRead(lightPin);
 currentDist =analogRead(motionPin);
}
if ((currentDist > lastDist + thresh || currentDist < lastDist - thresh  && ledPin>750))
 {
  digitalWrite(ledPin , HIGH );
  delay(1000); // imp as LED will glow forever 
  // 
 }
else 
 {
  digitalWrite(ledPin ,LOW);
 }
lastDist = currentDist ; //vvimp to reset last distance
