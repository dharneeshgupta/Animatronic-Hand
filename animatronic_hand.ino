#include<Servo.h> //header file added to access servo motor functions
Servo servo1;  //initialising variable servo1 as servo
Servo servo2;
servo servo3;

int a=A0; //variable a will refer to pin A0 on the Arduino board
int b=A1;
int c=A2;

int val1=0;  //Declaring a varibale val1 with value =0

int val2=0;
int val3=0;

void setup()  //intialisation function
{
  servo1.attach(9); //servo1 variable can control the servo attached to pin 9
  servo2.attach(10);
  servo3.attach(11);

  servo1.write(0);  //Setting the angle of servo1 to 0 degree
  servo2.write(0);
  servo3.write(0);

  Serial.begin(9600);  //Setting the baud rate for serial communication to 9600bits/sec
  
}

void loop()  //loop function
{
  val1=analogRead(a);//Read the abalog value in "a" and store the value in v""val1 variable
  va2=analogRead(b);
  val3=analogRead(c);

  if(val1<40)  //check if val1<40 and enter the method if true
  {
    servo1.write(180); //angle of servo attached to pin 9=180 deegres
    delay(3); //delay for 3ms
  }

  if(val1>200)  //cehck if val1>200 and enter the method if true
{
  servo1.write(0); //angle of servo attached to pin 9=0 degrees
  delay(3);
  
}


//similary for other two servos

if(val2<40)
{
  servo2.write(180);
  delay(3);
}
if(val2>200)
{
  servo2.write(0);
  delay(3);
}
if(val3<40)
{
  servo3.write(180);
  delay(3);
}

if(val3>200)
{
  servo3.write(0);
  delay(3);
}

  
}


