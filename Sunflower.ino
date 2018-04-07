//include the servo library

#include <Servo.h>

//create a servo object called servo1 

Servo servo1;
int i = 90;
int pos = 0; 

void setup() { // put your setup code here, to run once:
 
// set the servo pin, pin 9, as an servo output pin 
servo1.attach(9);
Serial.begin(9600); 
Serial.println("Start");
}

void loop() { // put your main code here, to run repeatedly:

int lightValue = analogRead(A1);

// map the light readings to the angle possible by the servo motor 

//lightValue = map (lightValue - 270, 0, 1023, 0, 180);

// control the servo motor based on the light value read, adjust linearly by angles 


if (lightValue > 40 && pos < 20) {
  servo1.attach(9);
   for (pos = -10; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(70); // waits 15ms for the servo to reach the position
    Serial.print("Light Value: ");
    Serial.print(lightValue);
    Serial.print(" pos:");
    Serial.println(pos); 
  }
  pos =90 ;
} else if (lightValue < 20 && pos > 20) {
   servo1.attach(9);
   for (pos = 90; pos >= -10; pos -= 1) { // goes from 180 degrees to 0 degrees
    servo1.write(pos);              // tell servo to go to position in variable 'pos'
    delay(70);   // waits 15ms for the servo to reach the position
    Serial.print("Light Value: ");
    Serial.print(lightValue);
    Serial.print(" pos:");
    Serial.println(pos); 
  }
  
  pos = -10;

}

servo1.detach();
//servo1.write (i); 
Serial.print("Light Value: ");
Serial.print(lightValue);
Serial.print(" pos:");
Serial.println(pos); 
delay(1000);

}
