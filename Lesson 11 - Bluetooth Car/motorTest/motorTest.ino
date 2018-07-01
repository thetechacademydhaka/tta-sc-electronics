

//RC car with bluetooth communication

const int Motor1Pin1 = 4;  // left motor pins
const int Motor1Pin2 = 5;


const int Motor2Pin2 =6;
const int Motor2Pin1 = 7;




void setup(){
  
  Serial.begin(9600);
  pinMode(Motor1Pin1, OUTPUT);   
  pinMode(Motor1Pin2, OUTPUT);   
  pinMode(Motor2Pin1, OUTPUT);   
  pinMode(Motor2Pin2, OUTPUT);
  

  
}



void loop(){
 
 moveForward();
 delay(2000);
 moveBackward();
 delay(2000);
 moveLeft();
 delay(2000);
 moveRight();
 delay(2000);
 moveStop();
 delay(2000);
 
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

