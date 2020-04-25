int sensePin = 0;
int ledPin = 9;

void setup() 
{
 analogRefrence(DEFAULT); //it isnt necessary 
 pinMode(ledPin, OUTPUT);
}

void loop() 
{
 int val= (analogRead(sensePin);
 
 if (analogRead < 800) digitalWrite(ledPin ,HIGH);
 else digitalWrite(ledPin , LOW );

}
