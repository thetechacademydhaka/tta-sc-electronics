//Link : https://www.maxphi.com/pir-motion-sensor-alarm



void setup()
{
  pinMode(13, OUTPUT);   
  digitalWrite(13, LOW);  
  attachInterrupt(0, alarmON, RISING); 
}

void loop()
{   

}

void alarmON()
{ 
  
  digitalWrite(13, HIGH); 
}


