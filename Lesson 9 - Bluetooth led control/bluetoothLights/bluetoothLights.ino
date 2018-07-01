char incByte;

int led1 = 3;
int led2 = 4;
int led3 = 5;

void setup() {
 
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  
  if(Serial.available()>0){
    
    incByte = Serial.read();
    
  }
  Serial.println(incByte);
 
  if(incByte == 'U'){ digitalWrite(led1, HIGH);}
  if(incByte == 'D'){ digitalWrite(led1, LOW);}
  if(incByte == 'L'){ digitalWrite(led2, HIGH);}
  if(incByte == 'R'){ digitalWrite(led2, LOW);}
  if(incByte == 'S'){ digitalWrite(led3, HIGH);}
  if(incByte == 'T'){ digitalWrite(led3, LOW);}
  
}
