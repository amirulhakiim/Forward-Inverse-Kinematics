#include <Servo.h>
#include <math.h>

Servo myservo1; //create object 'servo' on pin D10
Servo myservo2;
double x1, x2, y1, y2, xt, yt;
double L1 = 6.6;
double L2 = 8.9;
double theta1 =45;
double theta2 =35;

void setup() //only run once
{
  myservo1.attach(2);
  myservo2.attach(9);
  Serial.begin(9600);

  myservo1.write(0);
  Serial.print("0\n"); 

  myservo2.write(0);
  Serial.print("0\n"); 

  delay(2000);
  
  myservo1.write(theta1);
  myservo2.write(theta2);// make theta1 go to 45 degrees

  x1 = L1 * cos(theta1*PI/180);
  y1 = L1 * sin(theta1*PI/180);

  x2 = L2 * cos((theta2+theta1)*PI/180);
  y2 = L2 * sin((theta2+theta1)*PI/180);s

  xt = x1 + x2;
  yt = y1 + y2;

  Serial.print ("\nx1 =  ");
  Serial.print(x1);
  Serial.print("\ny1 =  ");
  Serial.print(y1);

  Serial.print ("\nx2 =  ");
  Serial.print(x2);
  Serial.print("\ny2 =  ");
  Serial.print(y2);

  
  Serial.print ("\nxt =  ");
  Serial.print(xt);
  Serial.print("\nyt =  ");
  Serial.print(yt);
}

void loop() //main prog (repeat foreva and eva)
{
  /*
  myservo1.write(0);
  Serial.print("0\n"); 
  delay(2000);

  myservo1.write(180);
  Serial.print("180\n");
  delay(2000);
  
  myservo2.write(0); 
  Serial.print("0\n");
  delay(2000);
  
  myservo2.write(180);
  Serial.print("180\n");
  delay(2000);
  */
}
