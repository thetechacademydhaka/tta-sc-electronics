
void setup()
{
  pinMode(13, OUTPUT);
}
void loop()
{  
  int val = analogRead(A0);
  
  val = constrain(val ,40 , 150);
  int ledLevel = map(val, 40 , 150 , 255 , 0);
  analogWrite(13 , ledLevel);
  
}
