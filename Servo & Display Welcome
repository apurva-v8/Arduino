#include "LiquidCrystal.h" //Initializing the library for LCD
#include <Servo.h>

Servo myservo;
int pos = 0;
LiquidCrystal lcd(7,6,5,4,3,2); //Initializing the pins where we have connected the LCD
void setup()
//Anything written in it will only run once
{
myservo.attach(9);
lcd.begin(16, 2); //Initializing the interface on the LCD screen
lcd.setCursor(0, 0);// set the cursor to column 0, line1
lcd.print("Welcome Back ");//print name
lcd.setCursor(0, 1); // set the cursor to column 0, line 2
lcd.print("----- ;P hohohaha ");//print name

}
void loop() {
  for (pos = 45; pos <= 110; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 110; pos >= 45; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}
