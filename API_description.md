# API description
Description of the methods offered by this library:  

-----------------  
```c++
ContiniousMotor::ContiniousMotor(int pin)
```
Initialize the object. Uses a PWM digital output.  
* *pin*: the pin where the motor is connected.  
-----------------  
```c++
ContiniousMotor::ContiniousMotor(int pin_1, int pin_2, int pin_E)
```
Alternate initializer. Uses three PWM digital outputs (if you want to control the direction).  
* *parameter*: the pins where the motor controller is connected.  
* *pin_1* and *pin_2*: pin used to control the speed and direction.  
* *pin_E*: pin used to enable/disable the motor.  
-----------------  
```c++
void ContiniousMotor::step(int step)
```
Start the motor for a given duration.  
* *step* : duration in ms.  
---
```c++
void ContiniousMotor::startEngine()
```
Start the motor.  

---
```c++
void ContiniousMotor::stopEngine()
```
Stop the motor. Also reset the stored speed to 0.

---
```c++
void ContiniousMotor::setSpeed(int speed)
```
Change the stored speed (not the actual speed of the motor: for this, use changeSpeed).  
* *speed* : speed value (0..255).  
---
```c++
void ContiniousMotor::changeSpeed(int speed)
```
Change the actual speed of the motor.  
* *speed* : speed value (0..255).  
---
```c++
void ContiniousMotor::reserseSpeed()
```
Reverse the speed of the motor.

---
```c++
void ContiniousMotor::pauseEngine()
```
Stop the motor. The previous speed is memorized.

---
```c++
void ContiniousMotor::resumeEngine()
```
Restart the motor, with the last memorized speed.

---
```c++
void ContiniousMotor::accelerate()
```
Increase the motor speed.

---
```c++
void ContiniousMotor::slowDown()
```
Decrease the motor speed.

---
```c++
int ContiniousMotor::getSpeed()
```
Return the actual speed.

---
Available on GitHub @Sphinkie/ContiniousMotor
