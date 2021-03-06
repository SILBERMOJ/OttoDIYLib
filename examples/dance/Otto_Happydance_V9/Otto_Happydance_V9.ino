//----------------------------------------------------------------
//-- Otto Dance Happy by Ada Sarp Şahin
//-- Made for Otto DIY project (https://www.ottodiy.com)
//-----------------------------------------------------------------
#include <Otto9.h>
Otto9 Otto;
#define PIN_YL 2 //servo[0]  left leg
#define PIN_YR 3 //servo[1]  right leg
#define PIN_RL 4 //servo[2]  left foot
#define PIN_RR 5 //servo[3]  right foot
#define PIN_Trigger  8  //TRIGGER pin (8)
#define PIN_Echo     9  //ECHO pin (9)
#define PIN_Buzzer  13 //BUZZER pin (13)

void setup() {
  Otto.init(PIN_YL, PIN_YR, PIN_RL, PIN_RR, true, A6, PIN_Buzzer, PIN_Trigger, PIN_Echo); //Set the servo pins and ultrasonic pins and Buzzer pin
  Otto.sing(S_connection); //Otto wake up!
  Otto.home();
  delay(50);
}

void loop() {
  // to dance repeatedly:
  Otto.jitter(2,750,20);
  Otto.crusaito(1,800,30,1);
  Otto.crusaito(1,800,30,-1);
  Otto.crusaito(1,800,30,1);
  delay(300);
  Otto.walk(1,1500,-1);
  Otto.walk(2,1000,1);
  Otto.moonwalker(1,600,30,1);
  Otto.moonwalker(1,600,30,-1);
  Otto.moonwalker(1,600,30,1);
  Otto.moonwalker(1,600,30,-1);
  Otto.walk(1,1500,-1);
  Otto.walk(2,1000,1);
  Otto.moonwalker(1,600,30,1);
  Otto.moonwalker(1,600,30,-1);
  Otto.moonwalker(1,600,30,1);
  Otto.moonwalker(1,600,30,-1);
  Otto.walk(1,1500,-1);
  Otto.walk(2,1000,1);
  Otto.shakeLeg(1,700,1);
  Otto.shakeLeg(1,700,-1);
  delay(1000);
  Otto.home();
  Otto.moonwalker(1,3000,50,1);
  Otto.moonwalker(1,3000,50,-1);
  delay(100);
  Otto.moonwalker(1,3000,50,-1);
  Otto.moonwalker(1,3000,50,1);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.bend(1,100,1);
  Otto.bend(1,100,-1);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.bend(1,100,1);
  Otto.bend(1,100,-1);
  delay(500);
  Otto.crusaito(1,800,30,1);
  Otto.crusaito(1,800,30,-1);
  Otto.crusaito(1,800,30,1);
  delay(300);
  Otto.walk(1,1500,-1);
  Otto.walk(2,1000,1);
  Otto.moonwalker(1,600,30,1);
  Otto.moonwalker(1,600,30,-1);
  Otto.moonwalker(1,600,30,1);
  Otto.moonwalker(1,600,30,-1);
  Otto.walk(1,1500,-1);
  Otto.walk(2,1000,1);
  Otto.moonwalker(1,600,30,1);
  Otto.moonwalker(1,600,30,-1);
  Otto.moonwalker(1,600,30,1);
  Otto.moonwalker(1,600,30,-1);
  Otto.walk(1,1500,-1);
  Otto.walk(2,1000,1);
  Otto.shakeLeg(1,700,1);
  Otto.shakeLeg(1,700,-1);
  delay(1000);
  Otto.home();
  Otto.moonwalker(1,3000,50,1);
  Otto.moonwalker(1,3000,50,-1);
  delay(100);
  Otto.moonwalker(1,3000,50,-1);
  Otto.moonwalker(1,3000,50,1);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.bend(1,100,1);
  Otto.bend(1,100,-1);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.bend(1,100,1);
  Otto.bend(1,100,-1);
  Otto.updown(3,900,30);
  Otto.jitter(3,1000,20);
  Otto.updown(3,900,30);
  Otto.jitter(3,1000,20);
  Otto.jump(1,400);
  Otto.jump(1,400);
  Otto.jump(1,400);
  Otto.jump(1,400);
  Otto.jitter(4,800,20);
  Otto.jump(1,400);
  Otto.jump(1,400);
  Otto.jump(1,400);
  Otto.jump(1,400);
  Otto.jitter(2,800,20);
  delay(1500);
  Otto.home();
  Otto.moonwalker(1,3000,50,1);
  Otto.moonwalker(1,3000,50,-1);
  delay(100);
  Otto.moonwalker(1,3000,50,-1);
  Otto.moonwalker(1,3000,50,1);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.bend(1,100,1);
  Otto.bend(1,100,-1);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.bend(1,100,1);
  Otto.bend(1,100,-1);
  Otto.moonwalker(1,3000,50,1);
  Otto.moonwalker(1,3000,50,-1);
  delay(100);
  Otto.moonwalker(1,3000,50,-1);
  Otto.moonwalker(1,3000,50,1);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.bend(1,100,1);
  Otto.bend(1,100,-1);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.bend(1,100,1);
  Otto.bend(1,100,-1);
  Otto.home();
  Otto.updown(3,900,30);
  Otto.jitter(3,1000,20);
  Otto.updown(3,900,30);
  Otto.jitter(3,1000,20);
  Otto.moonwalker(1,3000,50,1);
  Otto.moonwalker(1,3000,50,-1);
  delay(100);
  Otto.moonwalker(1,3000,50,-1);
  Otto.moonwalker(1,3000,50,1);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.bend(1,100,1);
  Otto.bend(1,100,-1);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.bend(1,100,1);
  Otto.bend(1,100,-1);
  Otto.moonwalker(1,3000,50,1);
  Otto.moonwalker(1,3000,50,-1);
  delay(100);
  Otto.moonwalker(1,3000,50,-1);
  Otto.moonwalker(1,3000,50,1);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.bend(1,100,1);
  Otto.bend(1,100,-1);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.jump(1,370);
  Otto.bend(1,100,1);
  Otto.bend(1,100,-1);
  Otto.home();
  delay(10000);
}
