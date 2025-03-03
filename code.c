/*
 * Created by Liya G.
 * Created on March 3, 2025
 
 * Blink with variable 
 * 
 * Turns an RGB LED on, showing the different possible colors. 
 */

 const int PIN_5 = 5;
 blink_time = 1000
  
 void setup() 
{
   pinMode(11, OUTPUT); // GREEN
   pinMode(12, OUTPUT); // BLUE
   pinMode(13, OUTPUT); // RED
 }
 
 void loop() 
{
   digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(12, LOW);   // turn the LED on (HIGH is the voltage level)
   digitalWrite(13, LOW);   // turn the LED on (HIGH is the voltage level)
   delay(blink_time);   // wait for length of variable blinkTime

   digitalWrite(11, LOW);
   digitalWrite(12, HIGH);
   digitalWrite(13, LOW);
   delay(blink_time);

   digitalWrite(11, LOW);
   digitalWrite(12, LOW);
   digitalWrite(13, HIGH);
   delay(blink_time);

   digitalWrite(11, HIGH);
   digitalWrite(12, LOW);
   digitalWrite(13, HIGH);
   delay(blink_time);

   digitalWrite(11, HIGH);
   digitalWrite(12, HIGH);
   digitalWrite(13, LOW);
   delay(blink_time);

   digitalWrite(11, LOW);
   digitalWrite(12, HIGH);
   digitalWrite(13, HIGH);
   delay(blink_time);
   
   digitalWrite(11, HIGH);
   digitalWrite(12, HIGH);
   digitalWrite(13, HIGH);
   delay(blink_time);

 }
