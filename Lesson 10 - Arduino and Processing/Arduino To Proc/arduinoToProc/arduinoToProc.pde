


import processing.serial.*;
Serial myPort; 
String val; 

void setup(){
 
String portName = Serial.list()[0];
myPort = new Serial(this, portName , 9600); 

}

void draw(){
 
  if ( myPort.available() > 0) { 
    val = myPort.readStringUntil('\n');
  }
  println(val);
  delay(100);
}


/*
    void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int x = 100; 

Serial.println("Hello World!");
delay (x);
}


*/