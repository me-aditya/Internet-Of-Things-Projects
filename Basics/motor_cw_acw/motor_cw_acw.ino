void setup()
{
pinMode(motorPin , OUTPUT)  

}

void loop() 
{
for (int i=0 ; i<=255 ; i++) //speeding up
{
  analogWrite( motorPin , i)
  delay(10) //just to make increment smoother  
}

delay(500) ; // just to hold the top speed

for (int i=255 ; i>=0 ; i--)
{
  analogWrite(motorPin , i); // i and motorPin relation doubt 
  delay(10);
}

delay(500); //hold at zero
}
