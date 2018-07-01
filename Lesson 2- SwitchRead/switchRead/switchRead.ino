void setup() {

pinMode(5,INPUT);
Serial.begin(9600);
}

void loop() {

int value = digitalRead(5);
Serial.println(value);
delay(50);

}
