#include <Servo.h>
  
Servo my1Servo;  
Servo my2Servo;
Servo my3Servo;
Servo my4Servo;
  
void setup()
{
 Serial.begin(115200);
 my1Servo.attach(3); 
 my2Servo.attach(5); 
 my3Servo.attach(6); 
 my4Servo.attach(9);
}
  
void loop()
{
 int valcomfrom1pot = analogRead(A0);           
 int degree1 = map(valcomfrom1pot, 0, 1023, 0, 180);     
 my1Servo.write(degree1);              
 Serial.println("Angle (Servo 1) : ");
 Serial.println(degree1);
 int valcomfrom2pot = analogRead(A1);           
 int degree2 = map(valcomfrom2pot, 0, 1023, 20, 70);     
 my2Servo.write(degree2);                          
 Serial.println("Angle (Servo 2) : ");
 Serial.println(degree2);
 int valcomfrom3pot = analogRead(A2);           
 int degree3 = map(valcomfrom3pot, 0, 1023, 0, 90);     
 my3Servo.write(degree3); 
 Serial.println("Angle (Servo 3) : ");
 Serial.println(degree3);
 int valcomfrom4pot = analogRead(A3);           
 int degree4 = map(valcomfrom4pot, 0, 1023, 0, 90);     
 my4Servo.write(degree4);
 Serial.println("Angle (Servo 4) : ");
 Serial.println(degree4);
 Serial.println("");
 Serial.println("");
 Serial.println("");
 Serial.println("");
 Serial.println("");
 Serial.println("");
 Serial.println("");
 delay(40);
}