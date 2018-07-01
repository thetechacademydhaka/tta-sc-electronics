
float temp;

void setup()
{
  Serial.begin(9600);
}


void loop()
{
  temp = analogRead(A0); 
  temp = (5.0*temp*100.0)/1024.0; 
  Serial.println(temp); 
  delay(500);

}
