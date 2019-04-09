#include <Servo.h>

Servo myservo;  

int pos = 0;    

void setup() {
  myservo.attach(9); 
}

void loop() {
  for (pos = 0; pos <=115; pos += 1) { 
    // in steps of 1 degree
    myservo.write(pos);             
  }
  for (pos = 110; pos >= 0; pos -= 1) { 
    myservo.write(pos);           
  }
}
