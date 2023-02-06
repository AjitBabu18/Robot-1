#include "led.h"
#include "button.h"
#include "timing.h"
#include "motor.h"
#include "timing.h"
//#include "sensor.h"



Motor left{left_servo_pin};
Motor right{right_servo_pin};
LED led{led_pin};
Button button{button_pin};
//Sensor sensor{line_sensors};
int sensor1 = 3;
int sensor2 = 4;
int sensor3 = 5;
int sensor4 = 6;
int sensor5 = 7;
int row = 2;
int col = 0;
int dir = 2;
int temp1 = 1;
int temp2 = 2;
bool k = true;
//int dist = 7;
//int dist1 = 12;
int dist2 = 13;
int dir1 =0;
int i = 50;

void setup() {
  Serial.begin(9600);
  Serial.println("Hello world :D");
  pinMode(sensor1, INPUT);
  pinMode(sensor2, INPUT);
  pinMode(sensor3, INPUT);
  pinMode(sensor4, INPUT);
  pinMode(sensor5, INPUT);

  led.init();
  button.init();
  left.init();
  right.init();
  
}


Timer<> timer{500};

int changeDir(int x, int y){
  int c = x-y;
  int q = 3;
  
  if((c==1) || (c==-3)){
    for(;q;q-=1){
      left.go(-40);
      right.go(-40);
      delay(200);}
  }
  if((c==-1) || (c==3)){
    for(;q;q-=1){
      left.go(40);
      right.go(40);
      delay(200);}
  }
  if((c==-2) || (c==2)){
    for(;q;q-=1){
      left.go(100);
      right.go(100);
      delay(200);}
  }
  left.go(0);
  right.go(0);
  delay(200);
  return y;
}

void forward(int dist){
  for(;dist;dist-=1){
      left.go(50);
      right.go(-50);
      delay(200);}
}

void right1(){
  int q = 1;
  for(;q;q-=1){
      left.go(15);
      right.go(15);
      delay(200);}
}

void loop() {
  //if(  ){
  for(;dist2;dist2-=1){
      left.go(50);
      right.go(-50);
      delay(200);}
     
  //if((digitalRead(sensor1) != 0) && (digitalRead(sensor5)!=0) && (digitalRead(sensor3) != 0) && (digitalRead(sensor2)!=0) && (digitalRead(sensor4)!=0)){
    //       left.go(0);
      //right.go(0);
      //delay(200);}
  //else{
  //left.go(50);
  //right.go(50);
  //delay(200);
  //}
  dir1 = row - temp1;
  if(dir1>0){dir1=3;}
  
  dir=changeDir(dir, dir1);
  //right1();
  dir1=0;
  temp1 =0;temp2=0;row=0;col=2;
  if (i == 50) {
    forward(11);
    i-=1;
  }
  dir1 = row - temp1;
  if(dir1==0){
    dir1 = col - temp2;
  }
  if(dir1>0){dir1=4;}
  dir=changeDir(dir, dir1);
  //right1();
  dir1=0;
  if (i == 49) {
    forward(12);
    i-=1;
  }
  temp1 =1;temp2=2;row=0;col=0;
  dir1 = row - temp1;
  if(dir1<0){dir1=1;}
  dir=changeDir(dir, dir1);
  //right1();
  dir1=0;
  if (i == 48) {
    forward(6);
    i-=1;
  }
  row=1;
  dir1 = row - temp1;
  if(dir1==0){
    dir1 = col - temp2;
  }
  if(dir1<0){dir1=2;}
  dir=changeDir(dir, dir1);
  //right1();
  dir1=0;
  if (i == 47) {
    forward(12);
    i-=1;
  }
  temp1 =0;temp2=0;col=2;
  dir1 = row - temp1;
  if(dir1>0){dir1=3;}
  //right1();
  dir=changeDir(dir, dir1);
  //right1();
  dir1=0;
  //dir=3;
  //dir1=0;
  row=0;
  if (i == 46) {
    forward(6);
    i-=1;
  }

  dir1 = row - temp1;
  if(dir1==0){
    dir1 = col - temp2;
  }
  if(dir1>0){dir1=4;}
  dir=changeDir(dir, dir1);
  //right1();
  dir1=0;
  if (i == 45) {
    forward(12);
    i-=1;
  }
  temp1 =1;temp2=2;row=0;col=0;
  dir1 = row - temp1;
  if(dir1<0){dir1=1;}
  dir=changeDir(dir, dir1);
  //right1();
  dir1=0;
  if (i == 44) {
    forward(6);
    i-=1;
  }
  row=1;
  dir1 = row - temp1;
  if(dir1==0){
    dir1 = col - temp2;
  }
  if(dir1<0){dir1=2;}
  dir=changeDir(dir, dir1);
  //right1();
  dir1=0;
  if (i == 43) {
    forward(12);
    i-=1;
  }


 //last
  temp1 =0;temp2=0;row=1;col=2;
  dir1 = row - temp1;
  if(dir1>0){dir1=3;}
  
  dir=changeDir(dir, dir1);
  dir1=0;
  row=0;
  if (i == 42) {
    forward(6);
    i-=1;
  }
  dir1 = row - temp1;
  if(dir1==0){
    dir1 = col - temp2;
  }
  if(dir1>0){dir1=4;}
  dir=changeDir(dir, dir1);
  //right1();
  dir1=0;
  if (i == 41) {
    forward(12);
    i-=1;
  }


  temp1 =1;temp2=2;row=0;col=0;
  dir1 = row - temp1;
  if(dir1<0){dir1=1;}
  dir=changeDir(dir, dir1);
  dir1=0;
  if (i == 40) {
    forward(6);
    i-=1;
  }
  row=1;
  dir1 = row - temp1;
  if(dir1==0){
    dir1 = col - temp2;
  }
  if(dir1<0){dir1=2;}
  dir=changeDir(dir, dir1);
  //right1();
  dir1=0;
  if (i == 39) {
    forward(12);
    i-=1;
  }

  dir=changeDir(dir, 1);
  if (i == 38) {
    forward(16);
    i-=1;
  }

  dir=changeDir(dir, 2);
  if (i == 37) {
    forward(6);
    i-=1;
  }
  dir=changeDir(dir, 3);
  if (i == 36) {
    forward(24);
    i-=1;
  }
  left.go(0);
  right.go(0);
  //dist=3;
  //delay(200);
}
