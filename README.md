# [WORK IN PROGRESS] Arduino-For-Beginners    
**Created to provide another method to learn Arduino for Rapid Prototyping**

## Table of Contents
- [History](https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/README.md#a-brief-history-of-arduino)
- [Why Arduino](https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/README.md#why-arduino)
- [Tips and Tricks](https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/README.md#Tips-and-Tricks)
- [Thing to Memorize](https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/README.md#Basic-Things-to-Memorize)
- [Loops](https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/README.md#Loops)
- [Activities](https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/README.md#Activities)
- [Sensor Resources](https://github.com/Teddy-Polkosnik/Arduino-For-Beginners/edit/main/README.md#sensor-resources)


  
<br>

## A Brief History of Arduino

**Purpose:** The Arduino platform has its roots in the early 2000s, and its development can be traced back to the desire to create an easy-to-use tool for artists and non-engineers to incorporate electronics and programming into their projects. 

The Arduino project started in 2003 in Ivrea, Italy, at the Interaction Design Institute Ivrea (IDII). A team of researchers, including Massimo Banzi, David Cuartielles, Tom Igoe, Gianluca Martino, and David Mellis, collaborated on developing a simple, affordable, and open-source platform for prototyping with electronics.

The first Arduino board (2005) , the Arduino Diecimila, was introduced in 2005. It featured the ATmega168 microcontroller and a USB interface, making it easier for users to program and upload their code.

One of the key principles of Arduino was its commitment to being **open source.** The hardware and software designs were made available to the public, encouraging a growing community of developers, hobbyists, and educators to contribute to the platform. Over the years, numerous Arduino board models have been released, catering to different needs and applications. Examples include the Arduino Uno, Arduino Mega, Arduino Nano, and Arduino Leonardo, among others.

The Arduino Integrated Development Environment **(IDE)** was developed to provide a user-friendly interface for writing, compiling, and uploading code to Arduino boards. The IDE supports the C and C++ programming languages.

The Arduino platform has continued to evolve with new hardware releases, software updates, and community-driven projects. Arduino has become a staple in the maker and DIY communities, powering a wide range of projects from simple LED blinkers to complex robotics and IoT applications. Arduino's accessibility and ease of use contributed to its popularity in educational settings. Many schools and universities adopted Arduino as a tool for teaching electronics and programming concepts. Arduino's success lies in its simplicity, openness, and versatility, making it an accessible tool for people with various levels of technical expertise. It has played a significant role in democratizing electronics and programming for a broader audience.

<br>

## Why Arduino

**Easy:** Arduino is designed to be beginner-friendly. The Arduino IDE provides a simple and straightforward interface for writing, compiling, and uploading code to the boards. The syntax of the programming language is also easier for beginners to grasp compared to some other languages. (Even if the semi-colon syntax sucks)

**Large Community:** Arduino has a large and active community of users. This community provides forums, tutorials, and a wealth of resources that can be immensely helpful, especially for beginners. If you encounter issues or have questions, chances are someone in the Arduino community has faced a similar challenge. There are muliple other GITHUB repositories with libraries and soultions to niche problems so check em out!

**Rapid Protoyping:** Arduino is known for its quick prototyping capabilities. You can rapidly build and test your ideas without the need for advanced knowledge of electronics or extensive coding experience or money since they are relatively affordable. This affordability, combined with the ability to reuse components in multiple projects, encourages experimentation and creativity.

**OS Compatibility:** The Arduino IDE is compatible with Windows, macOS, and Linux, providing flexibility for users across different operating systems.

<br>

## Tips and Tricks

**Read Documentation:** There will be function that you aren't familiar with and looking up the documentation on the OFFICAL website can allow you to see exactly what they do, 
what parameters they need, and even examples on how to properly utilize it. Reading is annoying but very helpful during the design and debugging process. If not I am sure there's someone on the internet who can explain it in terms that would allow you to understand it whether on YouTube, Reddit, and GITHUB.

**Cable Mangement:** Typically this is important for controlling complex electronic components or system but it's useful to build the habit early to create a easy way to reference connections later on. Here are 2 "standards" colors associations you have to know -->   black = GND  and   red = 5V/PWR    Through more reading more documenation and wiring diagrams you are able to catch on the system of color association that the creator used. Everyone comes up with thier own after time so you will in time too!

**Debug:** Identify The Problem --> Understand the Issue --> Print Data --> Isolate Issue --> Search Documentation --> Repair Issue

**Be Creative:** The best soultion usually is the simplest but don't be afraid to experiement and come up with your own solutions (You learn more this way).

**Pass the Torch:** I encourge you to post your work (or teach others) so you can contribute to the large amount of resources that are available. This will allow for more and more people to be interested and make their own creations.

<br>

## Basic Things to Memorize
- **SEMI-COLON AFTER EVERY LINE** 
- #define                                          --> Defines the pin
- Serial.begin(BAUD_RATE)                          --> Begins the Serial Monitor at set BAUD Rate
- pinMode(PIN , STATE)                             --> Sets the state of the pin  INPUT , OUTPUT
- digitalWrite(PIN , ACTION)                       --> Writes the action to the digital pin HIGH = ON , LOW = OFF
- digitalRead(PIN)                                 --> Reads the data on the digital pin
- analongWrite(PIN , ACTION)                       --> Writes the action to the anaglog pin HIGH = ON , LOW = OFF
- analongRead(PIN)                                 --> Reads the data on the analog pin
- delay(TIME)                                      --> Set the Delay on the loop in mili-seconds


## Loops
- if()                                --> If [SPECIFIC CONDITION] is TRUE do this
- while()                             --> While [SPECIFIC CONDITION] is TRUE do this
- for()                               --> For each [VALUE] in [SET RANGE] do this

We will go over each type of loop in the activies so don't worry if you don't understand it right now!


<br>

## Activities

### [Activity 1 - Intro to Ultrasonic Sensors](https://github.com/Teddy-Polkosnik/Arduino-Activities/blob/main/Activity%201/Activity_1_README.md)
### [Activity 2 - Intro to Gyroscopes](https://github.com/Teddy-Polkosnik/Arduino-For-Beginners/blob/main/Activity%202/Activity_2_README.md)

## Sensor Resources

### [Name](url)
### [Name](url)
