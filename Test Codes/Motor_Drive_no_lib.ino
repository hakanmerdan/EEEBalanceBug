/*Example sketch to control a stepper motor with A4988 stepper motor driver and Arduino without a library. More info: https://www.makerguides.com */

// Define stepper motor connections and steps per revolution:
#define dirPin 12
#define stepPin 14
#define stepsPerRevolution 200

#define dirPin2 27
#define stepPin2 26

void setup() {
  // Declare pins as output:
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);
  pinMode(stepPin2, OUTPUT);
  pinMode(dirPin2, OUTPUT);
}

void loop() {


  // Set the spinning direction counterclockwise:
  digitalWrite(dirPin, LOW);
digitalWrite(dirPin2, HIGH);

  //Spin the stepper motor 5 revolutions fast:
  while (1){
    // These four lines result in 1 step:
    digitalWrite(stepPin, HIGH);
digitalWrite(stepPin2, HIGH);
    delayMicroseconds(2000);
    digitalWrite(stepPin, LOW);
    
    digitalWrite(stepPin2, LOW);
    delayMicroseconds(2000);
  }

  //delay(1000);
}
