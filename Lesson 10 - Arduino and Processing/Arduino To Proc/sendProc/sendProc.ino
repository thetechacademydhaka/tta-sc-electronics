
int val = 0;
void setup() {
 
 Serial.begin(9600);
}

void loop() {

val++;
if(val == 100) val=0;

Serial.println(val);
delay (100);
}


