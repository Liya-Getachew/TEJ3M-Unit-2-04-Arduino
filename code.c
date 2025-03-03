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
   digitalWrite(11, HIGH);  // GREEN
   digitalWrite(12, LOW); 
   digitalWrite(13, LOW);  
   delay(blink_time);  

   digitalWrite(11, LOW); // BLUE
   digitalWrite(12, HIGH);
   digitalWrite(13, LOW);
   delay(blink_time);

   digitalWrite(11, LOW); // RED
   digitalWrite(12, LOW);
   digitalWrite(13, HIGH);
   delay(blink_time);

   digitalWrite(11, HIGH); // YELLOW
   digitalWrite(12, LOW);
   digitalWrite(13, HIGH);
   delay(blink_time);

   digitalWrite(11, HIGH);  // CYAN
   digitalWrite(12, HIGH);
   digitalWrite(13, LOW);
   delay(blink_time);

   digitalWrite(11, LOW);  // MAGENTA
   digitalWrite(12, HIGH);
   digitalWrite(13, HIGH);
   delay(blink_time);
   
   digitalWrite(11, HIGH);  // WHITE
   digitalWrite(12, HIGH);
   digitalWrite(13, HIGH);
   delay(blink_time);

 }
