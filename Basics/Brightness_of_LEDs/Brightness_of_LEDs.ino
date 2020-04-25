int switchPin = 8;
int ledPin = 11 ;
boolean lastButton= LOW;
int ledLevel = 0;
boolean currentButton= LOW ;
// We added resistor and changed ledOn to ledLevel 

void setup()
{
pinMode(switchPin , INPUT );
pinMode(ledPin , OUTPUT);  
}

boolean debounce(boolean last)
{
  boolean current = digitalRead(SwitchPin);
  if (last != current )
  {
    delay(5);
    current = digitalRead(switchPin);
  }
  return current;
}

void loop()
{
  currentButton = debounce(last)
  if (lastButtton == LOW && currentButton == HIGH )
  {
   ledLevel = ledLevel + 51;
   //we choose 51 because it is a multiple of 255
   lastButton= HIGH;
  } 
  if ( ledLevel > 255 ) ledLevel = 0;
  //We didnt gave paranthesis  
   analogWrite(ledPin , ledOn); 
   // previously it was digitalWrite
}
