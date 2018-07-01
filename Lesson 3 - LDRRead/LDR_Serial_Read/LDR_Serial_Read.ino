//code 1
int value = 0;    
   
void setup() {
Serial.begin(9600);
}
void loop() {
  
  value = analogRead(A0);
  Serial.print("sensor = " );
  Serial.println(value);
  delay(2);
  
}
