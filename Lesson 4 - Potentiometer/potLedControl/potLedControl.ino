
void setup()

{
  pinMode(3, OUTPUT);
}


void loop()

{  
  int val = analogRead(A0);
  
  val = constrain(val ,200 , 800);
  int level = map(val, 200, 800, 255 , 0);
  analogWrite(3, level);
  
}






