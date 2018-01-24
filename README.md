# ContiniousMotor
Arduino library to manage a continious motor (Brushed motor)..  
This library can be used by any Arduino sketch using a classic motor with DC power supply.
Speed can be negative, for reverse engine. (-255 .. 255)

## API description
Description of the methods offered by this class:  
  
**```ContiniousMotor::ContiniousMotor(int pin)```**  
> Initialize the object. Use a PWM digital output.  
> *pin*: the pin where the motor is connected.  
-----------------  
**```ContiniousMotor::ContiniousMotor(int pin_1, int pin_2, int pin_E)```**
> Alternate initializer. Use PWM digital outputs (if you want to control the direction).  
> *parameter*: the pins where the motor controller is connected.  
> *pin_1* and *pin_2*: pin used to control the speed and direction.  
> *pin_E*: pin used to enable/disable the motor.  
-----------------  
**```void ContiniousMotor::step(int step)```**  
> Start the motor for a given duration.  
> *step* : duration in ms.  
-----------------  
**```void ContiniousMotor::startEngine()```**  
> Start the motor.  
-----------------  
**```void ContiniousMotor::stopEngine()```**  
> Stop the motor. Also reset the stored speed to 0.  
-----------------  
**```void ContiniousMotor::setSpeed(int speed)```**  
> Change the stored speed (not the actual speed of the motor: for this, use changeSpeed).  
> *speed* : speed value (0..255).  
-----------------  
**```void ContiniousMotor::changeSpeed(int speed)```**  
> Change the actual speed of the motor.  
> *speed* : speed value (0..255).  
-----------------  
**```void ContiniousMotor::reserseSpeed()```**  
> Reverse the speed of the motor.  
-----------------  
**```void ContiniousMotor::pauseEngine()```**  
> Stop the motor. The previous speed is memorized.  
-----------------  
**```void ContiniousMotor::resumeEngine()```**  
> Restart the motor, with the last memorized speed.   
-----------------  
**```void ContiniousMotor::accelerate()```**  
> Accelerate the motor speed.
-----------------  
**```void ContiniousMotor::slowDown()```**  
> Slow down the motor speed
-----------------  
**```int ContiniousMotor::getSpeed()```**  
> Return the actual speed.

