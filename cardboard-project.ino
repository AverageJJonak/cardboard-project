Servo myServo;
bool houseDown = false;


void setup() {
 pinMode(2, INPUT_PULLUP);
 myServo.attach(9);
 myServo.write(0);
}


void loop() {
 if (digitalRead(2) == LOW && !houseDown) {
   myServo.write(90);
   houseDown = true;
 }
}
