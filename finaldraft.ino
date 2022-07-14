//int ledPin = 12;
//int sensorPin = 4;
//int sensorValue;
//int lastTiltState = HIGH; // the previous reading from the tilt sensor
//#include <Servo.h>
//
//Servo myservo;  
//int pos = 0;
//long lastDebounceTime = 0; // the last time the output pin was toggled
//long debounceDelay = 50; // the debounce time; increase if the output flickers
//
//void setup(){
//pinMode(sensorPin, INPUT);
//digitalWrite(sensorPin, HIGH);
//pinMode(ledPin, OUTPUT);
//Serial.begin(9600);
// myservo.attach(2);
// myservo.write(180);
// delay(2000);
//}
//
//void loop(){
//sensorValue = digitalRead(sensorPin);
//if (lastTiltState) {
//  myservo.write(0);
//}
// 
//Serial.println(sensorValue);
//delay(500);
//}

#define MOT_ONE 2
#define TILT_ONE 4
int sensorValue;
#include <Servo.h>


Servo myservo;
int pos = 0; //pos is position
long lastDebounceTime = 0;

void setup(){
  pinMode(TILT_ONE, INPUT_PULLUP);
  pinMode(MOT_ONE, OUTPUT);
  Serial.begin(9600);
    myservo.attach(2);
    myservo.write(180);
    delay(2000);
}

void loop(){
  int TILT_VAL_ONE = digitalRead(TILT_ONE);
    if(TILT_VAL_ONE == LOW){
      myservo.write(0);}
    if(TILT_VAL_ONE == HIGH){
      myservo.write(180);}
     Serial.println(TILT_VAL_ONE);
     delay(500);
    }
