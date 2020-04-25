int switchPin = 8;
int ledPin = 13 ;
boolean lastButton= LOW;
boolean ledOn = false;
boolean currentButton= LOW ;

void setup()
{
pinMode(switchPin , INPUT );
pinMode(ledPin , OUTPUT);  
}

boolean debounce(boolean last )
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
   ledOn = !ledOn ;
   lastButton= HIGH;
  } 
   digitalWrite(ledPin , ledOn);
}
