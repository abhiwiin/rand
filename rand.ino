/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.


  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin D7 as an output.
  pinMode(D7, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(D7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(D7, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
