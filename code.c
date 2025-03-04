/*
 * Created by Liya G.
 * Created on March 3, 2025
 
 * Blink with variable 
 * 
 * Turns an RGB LED on, showing the different possible colors. 
 */

 int blink_time = 1000;
 const int PIN_11 = 11;
 const int PIN_12 = 12;
 const int PIN_13 = 13;
  
 void setup() 
{
   pinMode(PIN_11, OUTPUT); // GREEN
   pinMode(PIN_12, OUTPUT); // BLUE
   pinMode(PIN_13, OUTPUT); // RED
 }
 
 void loop() 
{
   digitalWrite(PIN_11, HIGH);  // GREEN
   digitalWrite(PIN_12, LOW); 
   digitalWrite(PIN_13, LOW);  
   delay(blink_time);  

   digitalWrite(PIN_11, LOW); // BLUE
   digitalWrite(PIN_12, HIGH);
   digitalWrite(PIN_13, LOW);
   delay(blink_time);

   digitalWrite(PIN_11, LOW); // RED
   digitalWrite(PIN_12, LOW);
   digitalWrite(PIN_13, HIGH);
   delay(blink_time);

   digitalWrite(PIN_11, HIGH); // YELLOW
   digitalWrite(PIN_12, LOW);
   digitalWrite(PIN_13, HIGH);
   delay(blink_time);

   digitalWrite(PIN_11, HIGH);  // CYAN
   digitalWrite(PIN_12, HIGH);
   digitalWrite(PIN_13, LOW);
   delay(blink_time);

   digitalWrite(PIN_11, LOW);  // MAGENTA
   digitalWrite(PIN_12, HIGH);
   digitalWrite(PIN_13, HIGH);
   delay(blink_time);
   
   digitalWrite(PIN_11, HIGH);  // WHITE
   digitalWrite(PIN_12, HIGH);
   digitalWrite(PIN_13, HIGH);
   delay(blink_time);

 }