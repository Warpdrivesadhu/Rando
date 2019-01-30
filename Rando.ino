#include <Servo.h>
 Servo servo_test;      //initialize a servo object for the connected servo  


const int stepPin1 = 9; 
const int dirPin1 = 8; 
const int stepPin2 = 4; 
const int dirPin2 = 3; 
 long x=0; 
 int angle;
 long randNumber;
void setup() {
 Serial.begin(115200);
  servo_test.attach(10);   // attach the signal pin of servo to pin10 of arduino
  // Sets the two pins as Outputs
  pinMode(stepPin1,OUTPUT); 
  pinMode(dirPin1,OUTPUT);
  pinMode(stepPin2,OUTPUT); 
  pinMode(dirPin2,OUTPUT);
 
  randomSeed(analogRead(A5));
}
void loop() { 
randCircle(random(10,20)); 


  }
 void FD(int s){           // code for forwards (depends on motor connections, customize accordingly)
  
 digitalWrite(dirPin1,HIGH);
 digitalWrite(dirPin2,HIGH);
  servo_test.write(180);
  for(int x=0;x<s*100; x++)
  {digitalWrite(stepPin1,HIGH); 
    delayMicroseconds(200); 
    digitalWrite(stepPin1,LOW); 
    delayMicroseconds(200); 
    digitalWrite(stepPin2,HIGH); 
    delayMicroseconds(200); 
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(200);}} 
void SMALL_FD(int s){      
  
 digitalWrite(dirPin1,HIGH);
 digitalWrite(dirPin2,HIGH);
  servo_test.write(180);
  for(int x=0;x<s*10; x++)
  {digitalWrite(stepPin1,HIGH); 
    delayMicroseconds(200); 
    digitalWrite(stepPin1,LOW); 
    delayMicroseconds(200); 
    digitalWrite(stepPin2,HIGH); 
    delayMicroseconds(200); 
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(200);}} 
    
 void BD(int p){      // Code for backwards 
 
 digitalWrite(dirPin1,LOW);
 digitalWrite(dirPin2,LOW);
 servo_test.write(180); 
  for(int x=0;x<p*100; x++)
  {digitalWrite(stepPin1,LOW); 
    delayMicroseconds(200); 
    digitalWrite(stepPin1,HIGH); 
    delayMicroseconds(200); 
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(200); 
    digitalWrite(stepPin2,HIGH); 
    delayMicroseconds(200);} 
  };
void LT(int q){                // left turn
 
 digitalWrite(dirPin1,LOW);
 digitalWrite(dirPin2,HIGH);
 servo_test.write(90);
  
  for( long x=0;x<q*18; x++)
  {digitalWrite(stepPin1,LOW); 
    delayMicroseconds(200); 
    digitalWrite(stepPin1,HIGH); 
    delayMicroseconds(200); 
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(200); 
    digitalWrite(stepPin2,HIGH); 
    delayMicroseconds(200);} 
  };

void RT(int r){                  //right turn
 
 digitalWrite(dirPin1,HIGH);
 digitalWrite(dirPin2,LOW);
 servo_test.write(90);
  
  for(long x=0;x<r*18; x++)
  {digitalWrite(stepPin1,LOW); 
    delayMicroseconds(200); 
    digitalWrite(stepPin1,HIGH); 
    delayMicroseconds(200); 
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(200); 
    digitalWrite(stepPin2,HIGH); 
    delayMicroseconds(200);} 
  }


void randLines(){ randNumber = random(2);                 // function for random lines
             
             if (randNumber==1){FD(random(30)); }
             else BD(random(30));
 randNumber = random(2);
             if (randNumber==1){RT(random(181));  }
             else LT(random(181));}  



void randSquare( int u){                                 // function for random Squares
  randNumber = random(2);
  if (randNumber==1){for(x=0;x<4; x++){ FD (u); RT(91);}}
  else for(x=0;x<4; x++){ FD (u); LT(91);}
   digitalWrite(dirPin1,HIGH);
 digitalWrite(dirPin2,HIGH);
  int s = random(10,40);
    servo_test.write(90);
     for(int x=0;x<s*100; x++)  
  {digitalWrite(stepPin1,HIGH); 
    delayMicroseconds(200); 
    digitalWrite(stepPin1,LOW); 
    delayMicroseconds(200); 
    digitalWrite(stepPin2,HIGH); 
    delayMicroseconds(200); 
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(200);} 
    RT(random(20,70));}   


void randTriangle(int a){                                 // function for random Triangles
    int A = random(90);
    int B = random(90);
    int C = 180-(A+B);
    FD(a);RT(180-C);
    int b = (a*sin(B*3.141/180)/sin((A*3.141)/180));
    FD(b);RT(180-A);
    int c = (a*sin(C*3.141/180)/sin((A*3.141)/180));
    FD(c);
    int s = random(10,40);
    servo_test.write(90);
     for(int x=0;x<s*100; x++)  
  {digitalWrite(stepPin1,HIGH); 
    delayMicroseconds(200); 
    digitalWrite(stepPin1,LOW); 
    delayMicroseconds(200); 
    digitalWrite(stepPin2,HIGH); 
    delayMicroseconds(200); 
    digitalWrite(stepPin2,LOW); 
    delayMicroseconds(200);}}   


  

  
  



