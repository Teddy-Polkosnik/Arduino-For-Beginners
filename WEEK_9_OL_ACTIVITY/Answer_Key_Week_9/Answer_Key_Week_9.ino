
/// INCLUDE SERVO.h
#include <Servo.h>

/// DEFINE ALL PINS

#define red 6
#define green 8
#define X_Pin A0

///CREATE SERVO OBJECT 
Servo myservo;


void setup() {

/// "Attach" Servo to a PWM PIN
  myservo.attach(11);

  Serial.begin(9600);
/// What Mode are LEDS??
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
/// Read values from JOYSTICK
 int X_Value = analogRead(A0);

 /// map JOYSTICK vlaues from the normal 0,1023 to the new 0,180 for SERVO
  X_Value = map(X_Value,0,1023,0,180);

/// The "midpoint" (point where you aren't moving joystick) is 88
/// If value is >=89 [DO THIS]
/// If value is >=87 [DO THIS]

  if (X_Value <= 87) {
    digitalWrite(red,HIGH);
    Serial.print("X: ");
    Serial.println(X_Value);

    myservo.write(X_Value);
    delay(15);

  }

  if (X_Value >= 89) {
    digitalWrite(green,HIGH);
    Serial.print("X: ");
    Serial.println(X_Value);

    myservo.write(X_Value);
    delay(15);
  } 

  if (X_Value == 88) {
    Serial.print("X: ");
    Serial.println(X_Value);
    digitalWrite(green,LOW);
    digitalWrite(red,LOW);

    myservo.write(X_Value);
    delay(15);
  }

  
  delay(100);

}
