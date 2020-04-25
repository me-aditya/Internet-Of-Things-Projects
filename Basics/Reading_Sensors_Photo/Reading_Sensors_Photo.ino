int sensePin = 0;

void setup() 
{
 analogRefrence(DEFAULT); // isn't necessary
 Serial.begin(9600);
}

void loop() 
{
 Serial.println(analogRead(sensePin));
 delay(500);

}
