#include <Servo.h>
Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;

int va1;  
int va2;  
int va3;  
int va4;  
int va5;  
void setup()
{
  s1.attach(3);
  s2.attach(5);
  s3.attach(6);
  s4.attach(9);
  s5.attach(10);
}

void loop()
{
  va1 = analogRead(A0);           
  va1 = map(va1, 0, 1023, 0, 90);    
  s1.write(va1);                  
  delay(1000);
  
  va2 = analogRead(A1);           
  va2 = map(va2, 0, 1023, 0, 90);    
  s2.write(va2);                  
  delay(15);
  
  va3 = analogRead(A2);           
  va3 = map(va3, 0, 1023, 0, 90);    
  s3.write(va3);                  
  delay(15);
  
  va4 = analogRead(A3);           
  va4 = map(va4, 0, 1023, 0, 90);    
  s4.write(va4);                  
  delay(15);
  
  va5 = analogRead(A4);           
  va5 = map(va5, 0, 1023, 0, 90);    
  s5.write(va5);                  
  delay(15);
  
}
