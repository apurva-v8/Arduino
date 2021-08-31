/*
 * Created by ArduinoGetStarted.com
 *
 * This example code is in the public domain
 *
 * Tutorial page: https://arduinogetstarted.com/tutorials/arduino-serial-plotter
 */

void setup() {
  Serial.begin(9600); 
  Serial.println("And I keep on writing these songs");
delay(1000);
}

void loop() {
  int y1 = analogRead(A0);

  Serial.println("over and over");

  delay(1000);
}
