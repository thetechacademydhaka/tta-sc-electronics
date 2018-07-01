

//RC car with bluetooth communication

int Motor1Pin1 = 4;  // left motor pins
int Motor1Pin2 = 5;


int Motor2Pin2 =6;
int Motor2Pin1 = 7;


char incByte; // bluetooth data read




void setup(){
  
  Serial.begin(9600);
  pinMode(Motor1Pin1, OUTPUT);   
  pinMode(Motor1Pin2, OUTPUT);   
  pinMode(Motor2Pin1, OUTPUT);   
  pinMode(Motor2Pin2, OUTPUT);
  

  
}



void loop(){
 
  if(Serial.available()>0)
  {
    incByte = Serial.read();
  }
  Serial.println(incByte);
  
 if(incByte == 'U'){ moveForward(); }
 if(incByte == 'D'){   moveBackward();}
 if(incByte == 'L'){    moveLeft();}
 if(incByte == 'R'){   moveRight();}
 else if(incByte == 'S'){   moveStop();}
 
}

//functions for different modes

void moveBackward(){
  
  digitalWrite(Motor1Pin1, HIGH);
  digitalWrite(Motor1Pin2, LOW);
  digitalWrite(Motor2Pin1, HIGH);
  digitalWrite(Motor2Pin2, LOW);
}

void moveForward(){
  
  digitalWrite(Motor1Pin1, LOW);
  digitalWrite(Motor1Pin2, HIGH);
  digitalWrite(Motor2Pin1, LOW);
  digitalWrite(Motor2Pin2, HIGH);
}

void moveLeft(){
  
  digitalWrite(Motor1Pin2, HIGH);
  digitalWrite(Motor1Pin1, LOW);//
  digitalWrite(Motor2Pin1, HIGH);
  digitalWrite(Motor2Pin2,LOW); 
}

void moveRight(){
  
  digitalWrite(Motor1Pin2, LOW);
  digitalWrite(Motor1Pin1, HIGH);
  digitalWrite(Motor2Pin1, LOW); //
  digitalWrite(Motor2Pin2, HIGH);
}


void moveStop(){
  
  digitalWrite(Motor1Pin1, LOW);
  digitalWrite(Motor1Pin2, LOW);
  digitalWrite(Motor2Pin1, LOW);
  digitalWrite(Motor2Pin2, LOW);
}

