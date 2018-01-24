# ContiniousMotor
Arduino library for continious motor.  
This library can be used by any Arduino sketch using a classic motor with continious power supply.
  
ContiniousMotor give function to manage a DC motor (Brushed motor).
Speed can be negative, for reverse engine. (-255 .. 255)
## API description
Description of the methods offerd by this class.  
-----------------  
**```ContiniousMotor::ContiniousMotor(int pin)```**  
Initialize the object. Use a PWM digital output.  
*parameter*: the pin where the motor is connected.  
-----------------  
**```ContiniousMotor::ContiniousMotor(int pin_1, int pin_2, int pin_E)```**
Alternate initializer. Use PWM digital outputs (if you want to control the speed).  
*parameter*: the pins where the motor controller is connected.  
*pin_1* and *pin_*2 to control the speed and direction.  
*pin_E* to enable/disable the motor.  
-----------------  
**```void ContiniousMotor::step(int step)```**  
Move the motor fr a given duration.  
see: http://boutique.semageek.com/fr/45-sn754410-compatible-l293d.html  
-----------------  
**```void ContiniousMotor::startEngine()```**  
Start the motor.  
-----------------  
**```void ContiniousMotor::stopEngine()```**  
Stop the motor. Also reset the stored speed to 0.  
-----------------  
**```void ContiniousMotor::setSpeed(int speed)```**  
> Change the stored speed (not the actual speed of the motor: for this, use changeSpeed).  
**```void ContiniousMotor::changeSpeed(int speed)```**  
> Change the actual speed of the motor.  
**```void ContiniousMotor::reserseSpeed()```**  
> Reverse the speed of the motor.  
**```void ContiniousMotor::pauseEngine()```**  
> Stop the motor. The previous speed is memorized.  
**```void ContiniousMotor::resumeEngine()```**  
Restart the motor, with the last memorized speed.   
**```void ContiniousMotor::accelerate()```**  
Accelerate the motor speed.
**```void ContiniousMotor::slowDown()```**  
Slow down the motor speed
**```int ContiniousMotor::getSpeed()```**  
Return the actual speed.

