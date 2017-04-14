#include <Servo.h>
Servo myServo;
int angle;

void setup() {
  angle = 0;
  myServo.attach(3);
  Serial.begin(9600);
}

void loop() {
   angle = angle +1;

   if(angle > 179)
   {
       angle = 0;
   }
   
  myServo.write(angle);

  Serial.print("angle: ");
  Serial.print(angle);
  Serial.print(" \r\n ");
  delay(50);
}