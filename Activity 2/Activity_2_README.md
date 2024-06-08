# Intro to the Gyroscope

### __Table of Contents__
- [Materials](https://github.com/Teddy-Polkosnik/Arduino-For-Beginners/blob/main/Activity%202/Activity_2_README.md#materials-needed)
- [Uses](https://github.com/Teddy-Polkosnik/Arduino-For-Beginners/blob/main/Activity%202/Activity_2_README.md#What-Are-Some-Uses-Gyro-Sensors)
- [I²C](https://github.com/Teddy-Polkosnik/Arduino-For-Beginners/blob/main/Activity%202/Activity_2_README.md#what-is-i2c-or-ic)
- [Pins](https://github.com/Teddy-Polkosnik/Arduino-For-Beginners/blob/main/Activity%202/Activity_2_README.md#What-Pins-Are-On-The-Sensor)
- [Wiring](https://github.com/Teddy-Polkosnik/Arduino-For-Beginners/blob/main/Activity%202/Activity_2_README.md#Wiring-Diagram)
- [Coding](https://github.com/Teddy-Polkosnik/Arduino-For-Beginners/blob/main/Activity%202/Activity_2_README.md#How-To-Approach-Coding)

  
## Materials Needed
- Arduino
- Wires
- LED
- 10 Omhs Resistor
- 6 Axis Motion/Gryoscope Sensor (MPU6050)
  
<br>

## What Are Some Uses Gyro Sensors? 

**Angle Measurement:** They are commonly used to measure the angluar displacement between the sensor and an object without physical contact.

**Motion Tracking:** They are employed in AR/VR technology to track head and body movements in VR systems.

**Seismology:** They are used to detect and measure minute ground movements in earthquake research.

**Aerospace:** They are critical for navigation and control of spacecraft and satellites.


<br>

## What is I2C or I²C?

Developed by Philips Semiconductor (now NXP Semiconductors) in 1982. I2C uses a Two-Wire (SDA and SCL) serial interface to comunicate with sensors quickly. Serial Data Line (SDA) carries the data from the sensor to the 
microcontroller. Serial Clock Line (SCL) Carries the clock signal to synchronize the data to the microcontroller. 

How I²C Works
- Start Condition: The Reciever initiates communication by pulling SDA low while SCL is high.
- Address Frame: The Reciever sends the address of the target Sender device along with a read/write bit.
- Acknowledgment (ACK): The addressed Sender responds with an ACK bit by pulling SDA low.
- Data Transfer: Data bytes are transmitted, with each byte followed by an ACK or NACK (negative acknowledgment) from the receiver.
- Stop Condition: The Reciever ends communication by releasing the SDA line to high while SCL is high.


<br>

## What Pins Are On The Sensor?

**SCL:**  It provides the clock signal that synchronizes the data transmission.

**SDA:** It carries the data from the sensor to the microcontroller.

**XDA:** Used for connecting to external I2C devices. Typically not used in basic setups.

**XCL:** Used for connecting to external I2C devices. Typically not used in basic setups.

**ADO:** This pin is used to change the I2C address of the MPU6050. This is useful if you have multiple MPU6050 devices on the same I2C bus.

**INT:** An interrupt pin that can be used to signal the microcontroller when new data is available.

**VCC:** The VCC pin powers the sensor usually 5V or 3.3V (unless otherwise specified).

**GND:** Connect to the system ground.


<br>

## What Data Does The Sensor Show?

When you read data from the MPU6050, you typically get 16-bit raw values for each of the measurements. These values are retrieved over the I2C interface.

- Accelerometer: Raw values range from -32768 to 32767, which correspond to the accelerometer's measurement range (±2g, ±4g, ±8g, or ±16g).
- Gyroscope: Raw values range from -32768 to 32767, which correspond to the gyroscope's measurement range (±250, ±500, ±1000, or ±2000 degrees per second).
- Temperature: Raw value in a 16-bit integer.

<br>

To convert the raw data to meaningful units. Note: LSB stands for Least Significant Bit, and it represents the smallest change detectable by the sensor.

<p align="center">
[Acceleration (𝑔) = (Raw Acceleration Data) / Sensitivity Scale Factor]
</p>

The resultant values are in terms of g-forces. The available ranges are ±2g, ±4g, ±8g, and ±16g, where 𝑔 represents the acceleration due to gravity (approximately 9.81 m/s²).
- ±2g  -> Scale factor = 16384 LSB/g
- ±4g  -> Scale factor = 8192 LSB/g
- ±8g  -> Scale factor = 4096 LSB/g
- ±16g -> Scale factor = 2048 LSB/g

<br>

<p align="center">
[Angular Velocity(°/s) = (Raw Gyroscope Data) / Sensitivity Scale Factor]
</p>

<p align="center">
  <img width="800" height="400" src="https://github.com/Teddy-Polkosnik/Arduino-For-Beginners/blob/main/Activity%202/assets/Gryo%20Data.png">
</p>


The MPU6050 gyroscope can be configured to operate within different full-scale ranges. The available ranges are ±250 °/s, ±500 °/s, ±1000 °/s, ±2000 °/s.

- ±250 °/s  -> Scale factor = 131 LSB/°/s
- ±500 °/s  -> Scale factor = 65.5 LSB/°/s
- ±1000 °/s -> Scale factor = 32.8 LSB/°/s
- ±2000 °/s -> Scale factor = 16.4 LSB/°/s

<br>

<p align="center">
[Temperature(°C) = (Raw Temperature Data/340.0) + 36.53]
</p>

The resultant values are in terms of Degrees Celsius.



<br>

## Wiring Diagram 

<p align="center">
  <img width="800" height="400" src="https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/Activity%201/assets/Activity%201%20Wiring%20Diagram.png">
</p>





## How To Approach Coding?

**Global Area:** Here you define all variables, pins, and data types.

<br>

**void setup():** Here you set up the pinModes and Serial Monitor.

Serial Monitor Examples:

Serial.begin()   --> Initializes the Serial Monitor

Serial.print()   --> Prints the data in the Serial Monitor

Serial.println() --> Prints the data in the Serial Monitor on a new line 

Serial.read()    --> Reads the data in the Serial Monitor

<br>

<p align="center">
pinMode(pin, INPUT)    OR    pinMode(pin, OUTPUT)
</p>

| INPUT | OUTPUT |
| ------------- | ------------- |
| High-impedance state  | Low-impedance state |
| Input pins make extremely small demands on the circuit that they are sampling, this means that it takes very little current to move the input pin from one state to another.  | This means that they can provide a substantial amount of current to other circuits.  |





<br>

**void loop():** Here you place the code that will run consistently.



