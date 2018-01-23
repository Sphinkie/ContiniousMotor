/* --------------------------------------------------------------------------
    Exemple d'utilisation de la classe ContiniousMotor
    Processeur Arduino
    Ecrit par David de Lorenzo. 20-septembre-2014
-------------------------------------------------------------------------- */

#include <ContiniousMotor.h>

// --- Déclaration des constantes des broches 
#define MOTOR_PIN_A1  10   // output Digital pin for the Motor
#define MOTOR_PIN_EN  11   // output Digital pin for Motor Enable
#define MOTOR_PIN_A2  13   // output Digital pin for the Motor

  
ContiniousMotor Moteur(MOTOR_PIN_A1,MOTOR_PIN_A2,MOTOR_PIN_EN);

// ---------------------------------------------------------------------------------------
// La fonction setup() est exécutée en premier et une seule fois, au démarrage du programme
// ---------------------------------------------------------------------------------------
void setup() 
{ 
	//start serial connection
	Serial.begin(9600);
	Serial.print("CPU Frequency (MHz): "); Serial.println(F_CPU/1000000);
  
	// Initialize  the speed of the motor to 50 RPMs
	Moteur.setSpeed(50);  
	Moteur.stopEngine();       
}   

// ---------------------------------------------------------------------------------------
// Main Loop:
// ---------------------------------------------------------------------------------------
void loop()
{ 
    Serial.println("Start the motor");
    Moteur.startEngine();       
    Moteur.step(3500);        // Tourne 
    Serial.println("Wait");
    delay(2000);
    Serial.println("Back to initial position");
    Moteur.step(-3500);       // Revient à la position initiale
    Moteur.stopEngine();       
    delay(2000);
}



