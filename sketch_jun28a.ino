
#include <Servo.h>

// Define Servo objects
Servo myservo3;
Servo myservo5;
Servo myservo6;
Servo myservo7; 
Servo myservo8; // New servo

// Define potentiometer pins
int potpin = 0;
int potpin2 = 1;
int potpin3 = 2;
int potpin4 = 3;
int potpin5 = 4; // New potentiometer

// Define variables to store potentiometer values
int val = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;
int val5 = 0; // New value

void setup() {
  // Attach servos to pins
  myservo3.attach(9);
  myservo5.attach(10);
  myservo6.attach(11);
  myservo7.attach(12);
  myservo8.attach(8);// Attach new servo to pin 12
}

void loop() {
  // Read, map, and write values to servos
  val = analogRead(potpin);
  val = map(val, 3, 1023, 0, 176);
  myservo3.write(val);
  delay(05);

  val2 = analogRead(potpin2);
  val2 = map(val2, 3, 1023, 0, 176);
  myservo5.write(val2);
  delay(05);

  val3 = analogRead(potpin3);
  val3 = map(val3, 3, 1023, 0, 175);
  myservo6.write(val3);
  delay(05);

  val4 = analogRead(potpin4); // Read the new potentiometer
  val4 = map(val4, 3, 1023, 0, 176); // Map the value
  myservo7.write(val4); // Write to the new servo
  delay(05);

  
  val5 = analogRead(potpin5); // Read the new potentiometer
  val5 = map(val5, 3, 1023, 0, 176); // Map the value
  myservo8.write(val5); // Write to the new servo
  delay(05);
}
