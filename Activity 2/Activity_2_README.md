# Using A Gyro to Detect Angle Changes

### __Table of Contents__
- [Materials](https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/Activity%201/Activity_1_README.md#materials-needed)
- [Uses](https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/Activity%201/Activity_1_README.md#what-are-some-uses-ultrasonic-sensors)
- [Pins](https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/Activity%201/Activity_1_README.md#what-pins-are-on-the-sensor)
- [Data](https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/Activity%201/Activity_1_README.md#what-data-does-the-sensor-show)
- [Wiring](https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/Activity%201/Activity_1_README.md#wiring-diagram)
- [Coding](https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/Activity%201/Activity_1_README.md#how-to-approach-coding)

  
## Materials Needed
- Arduino
- Wires
- LED
- 10 Omhs Resistor
- 6 Axis Gryoscope Sensor (MPU6050)
  
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

**SCL:** [Input Pin]  It provides the clock signal that synchronizes the data transmission.

**SDA:** [Output Pin] It carries the data from the sensor to the microcontroller.

**XDA:** [Output Pin] Used for connecting to external I2C devices. Typically not used in basic setups.

**XCL:** [Output Pin] Used for connecting to external I2C devices. Typically not used in basic setups.

**ADO:** [Output Pin] This pin is used to change the I2C address of the MPU6050. This is useful if you have multiple MPU6050 devices on the same I2C bus.

**INT:** [Output Pin] An interrupt pin that can be used to signal the microcontroller when new data is available.

**VCC:** The VCC pin powers the sensor usually 5V or 3.3V (unless otherwise specified).

**GND:** Connect to the system ground.


<br>

## What Data Does The Sensor Show?

When you read data from the MPU6050, you typically get 16-bit raw values for each of the measurements. These values are retrieved over the I2C interface.

- Accelerometer: Raw values range from -32768 to 32767, which correspond to the accelerometer's measurement range (±2g, ±4g, ±8g, or ±16g).
- Gyroscope: Raw values range from -32768 to 32767, which correspond to the gyroscope's measurement range (±250, ±500, ±1000, or ±2000 degrees per second).
- Temperature: Raw value in a 16-bit integer.

To convert the raw data to meaningful units:

<p align="center">
[Acceleration = (Raw Acceleration Data) / Sensitivity Scale Factor]
</p>

Where 2 represents the wave being sent and then coming back and the speed of sound being 0.034cm / pico-seconds.

Arduino measures time in mili-seconds and distance in centi-meters so to convert from cm to inches, multiply cm by a factor of 0.394.



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


