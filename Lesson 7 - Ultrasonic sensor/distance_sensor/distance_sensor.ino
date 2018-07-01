
void setup()
{
 Serial.begin(9600);
 pinMode(3, OUTPUT);  
 pinMode(2,INPUT); 
}

void loop(){
   
  digitalWrite(3, HIGH); 
  delay(100);
  digitalWrite(2, LOW); 
  
  int duration = pulseIn(2,HIGH); 
  int distance = (duration/2 )/29.1;
  Serial.print(distance);
  Serial.println("cm");
}



