
/// INCLUDE SERVO.h


/// DEFINE ALL PINS (LED_1, LED_2, JOYSTICK)



///CREATE SERVO OBJECT 


void setup() {

/// "Attach" Servo to a PWM PIN (HERE YOU DEFINE THE SERVO PIN)

/// I recommend to view the values in the Serial Monitor First (OPTIONAL)
  Serial.begin(9600);


/// What pinMode are LEDS??

}

void loop() {
/// Read values from JOYSTICK (What data does the JOYSTICK produce??)


/// map() JOYSTICK vlaues from the normal 0,1023 to the new 0,180 for SERVO


/// The "midpoint" (point where you aren't moving joystick) is 88
/// If value is <=89 [DO THIS]
/// If value is >=87 [DO THIS]


/// ONE IF EXAMPLE IS GIVEN FILL IN THE CONDITIONS
 if () {

    /// LED CODE
    digitalWrite();

    /// SERVO CODE
    Servo.write();
    delay(15);

    /// SERIAL MONITOR CODE (OPTIONAL)


  }



}