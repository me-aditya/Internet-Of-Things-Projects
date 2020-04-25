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
 val = constrain(val,750,900); //less than 750=750 and more than 900 = 900
 int  ledLevel = map(val ,750,900,0,255); //750-900 is propoitional to 0-255 
 analogWrite ( ledPin , ledLevel);
}

// case would be oppposite for resistors
// we have to interchange resistor with tempreature sensors
// watch jermy blum's tut4 11:50
