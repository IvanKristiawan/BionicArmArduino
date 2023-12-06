#include <Servo.h>

Servo servothumb;          // Define thumb servo
Servo servoindex;          // Define index servo
Servo servomajeure;
Servo servoringfinger;
Servo servopinky;
Servo servowrist;

int pos = 0;    // variable to store the servo position

void setup() {
  servothumb.attach(2);
  servoindex.attach(3);
  servomajeure.attach(4);
  servoringfinger.attach(5);
  servopinky.attach(6);
}

void loop() {
  // Move All Servo to 0 degree
  servothumb.write(0);
  servoindex.write(0);
  servomajeure.write(0);
  servoringfinger.write(0);
  servopinky.write(0);

  delay(2000);

  // Grip
  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servothumb.write(pos);
    servoindex.write(pos);
    servomajeure.write(pos);
    servoringfinger.write(pos);
    servopinky.write(pos);
    delay(12);
  }

  delay(1000);

  // Release Grip 
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    servothumb.write(pos);
    servoindex.write(pos);
    servomajeure.write(pos);
    servoringfinger.write(pos);
    servopinky.write(pos);
    delay(12);
  }

  delay(2000);

  // Pistol Finger
  servothumb.write(0);
  servoindex.write(0);
  servomajeure.write(180);
  servoringfinger.write(180);
  servopinky.write(180);

  delay(2000);

  // Peace Finger
  servothumb.write(180);
  servoindex.write(0);
  servomajeure.write(0);
  servoringfinger.write(180);
  servopinky.write(180);

  delay(2000);

  // Thumbs Up
  servothumb.write(0);
  servoindex.write(180);
  servomajeure.write(180);
  servoringfinger.write(180);
  servopinky.write(180);

  delay(2000);

  // Rocker Finger
  servothumb.write(0);
  servoindex.write(0);
  servomajeure.write(180);
  servoringfinger.write(180);
  servopinky.write(0);

  // Move Back and Forth

  // servothumb.write(180);
  // delay(1000);
  // servothumb.write(0);
  // delay(1000);

  // servoindex.write(180);
  // delay(2000);
  // servoindex.write(0);
  // delay(1000);

  // servomajeure.write(180);
  // delay(1000);
  // servomajeure.write(0);
  // delay(1000);

  // servoringfinger.write(180);
  // delay(1000);
  // servoringfinger.write(0);
  // delay(1000);

  // servopinky.write(180);
  // delay(1000);
  // servopinky.write(0);
  // delay(1000);
}