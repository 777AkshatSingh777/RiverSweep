#include <Servo.h>

Servo servo1;
Servo servo2;

int initialPosition = 0;    
int liftPosition = 90;       

void setup() {
  servo1.attach(9);         
  servo2.attach(10);         


  servo1.write(initialPosition);
  servo2.write(initialPosition);

  
  delay(20000);


  servo1.write(liftPosition);
  servo2.write(liftPosition);
}

void loop() {
  
}