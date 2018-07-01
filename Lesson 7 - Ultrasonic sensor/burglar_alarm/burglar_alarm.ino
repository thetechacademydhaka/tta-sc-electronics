
int range = 10;
void setup()
{
  
 Serial.begin(9600);
 pinMode(3, OUTPUT);  
 pinMode(2,INPUT); 
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);   
 pinMode(6,OUTPUT);

}

void loop(){
  
  digitalWrite(3, HIGH); 
  delay(100);
  digitalWrite(3, LOW); 
  
  int duration = pulseIn(2,HIGH); 
  int distance = (duration/2 )/29.1;
  // distance = (duration*0.034)/2;

  // speed of sound = 0.034 cm/us 

  if( distance < range){

    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,HIGH);
    delay(300);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    delay(300);

  }
  else{
     
     //all low
     digitalWrite(4,LOW);
     digitalWrite(5,LOW);
     digitalWrite(6,LOW);
  }

   
  Serial.print(distance);
  Serial.println("cm");
 // delay(50);

}
