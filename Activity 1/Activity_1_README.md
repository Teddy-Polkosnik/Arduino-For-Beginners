# Creating A Parking Sensor Using An Ultrasonic Sensor And LED

### __Table of Contents__
- [Materials](https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/Activity%201/Activity_1_README.md#materials-needed)
- [Uses](https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/Activity%201/Activity_1_README.md#what-are-some-uses-ultrasonic-sensors)
- [Pins](https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/Activity%201/Activity_1_README.md#what-pins-are-on-the-sensor)
- [Data](https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/Activity%201/Activity_1_README.md#what-data-does-the-sensor-show)
- [Coding](https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/Activity%201/Activity_1_README.md#how-to-approach-coding)

  
## Materials Needed
- Arduino
- LED
- 10 Omhs Resistor
- 4 Pin Ultrasonic Sesnor
  
<br>

## What Are Some Uses Ultrasonic Sensors? 

**Distance Measurement:** They are commonly used to measure the distance between the sensor and an object without physical contact.

**Object Detection and Avoidance:** They are employed in robotics and automation to detect the presence or absence of objects and avoid collisions.

**Level Measurement:** Ultrasonic sensors can be used to measure the level of liquids in tanks.

**Parking Assistance Systems:** They are often used in vehicles for parking assistance, providing feedback about the proximity of obstacles.

**Flow Rate Measurement:** In some cases, ultrasonic sensors can be used to measure the flow rate of fluids.


<br>

## What Pins Are On The Sensor?
**Echo:** [Input Pin] It receives the ultrasonic pulse/signal from the reflected object.

**Trig:** [Output Pin] It sends out an ultrasonic pulse/signal.

**VCC:** The VCC pin powers the sensor usually 5V (unless otherwise specified).

**GND:** Point in a circuit as a reference and carries a voltage of 0V.

<br>

## What Data Does The Sensor Show?

Ultrasonics do not necessarily measure distance. They show the time that it takes for one cycle of bouncing sound to be received. Because of this, distance must be  calculated using a formula.

<p align="center">
[Distance = (Time * Speed of Sound) / 2]
</p>

Where 2 represents the wave being sent and then coming back and the speed of sound being 0.034cm / pico-seconds.

Arduino measures time in mili-seconds and distance in centi-meters so to convert from cm to inches, multiply cm by a factor of 0.394.





<br>

## How To Approach Coding?


