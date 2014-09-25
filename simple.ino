int motor1 = 5;   
int motor2 = 6;

void setup() {
 pinMode(motor1, OUTPUT);
 pinMode(motor2, OUTPUT);
 }

void loop() {

    analogWrite(motor1, random(256));
    analogWrite(motor2, random(256));
    int timer=random(10);
    delay(timer*100);
       
  }