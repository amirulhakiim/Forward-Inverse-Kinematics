#include <Servo.h>
#include <math.h>

Servo myservo1; //create object 'servo' on pin D10
Servo myservo2;
double x1,y1,phi1,phi2,phi3,r,theta1, theta2;
double L1 = 6.6;
double L2 = 8.9;
double xt = 0;
double yt = 6.6;

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

  phi1 = (atan2(yt,xt)) *180/PI; //eq1

  r = sqrt(sq(yt)+sq(xt)); //eq2

  phi2 = acos((sq(r)+sq(L1)-sq(L2))/(2*r*L1))*180/PI;  //eq3

  theta1 = phi1 - phi2; //eq4

  phi3 = acos((sq(L1)+sq(L2)-sq(r))/(2*L2*L1))*180/PI;  //eq5

  theta2 = 180 - phi3;
  
  myservo1.write(theta1);
  myservo2.write(theta2);

  Serial.print ("\nxt =  ");
  Serial.print(xt);
  Serial.print("\nyt =  ");
  Serial.print(yt);
  
  Serial.print ("\nphi1 =  ");
  Serial.print(phi1);
  Serial.print("\nphi2 =  ");
  Serial.print(phi2);
  Serial.print("\nphi2 =  ");
  Serial.print(phi3);

  Serial.print("\nr =  ");
  Serial.print(r);

  Serial.print ("\ntheta2 =  ");
  Serial.print(theta2);
  Serial.print("\ntheta1 =  ");
  Serial.print(theta1);


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
