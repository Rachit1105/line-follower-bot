const int leftSensorPin = A2;
const int rightSensorPin = A1;



const int IN1 = 7;
const int IN2 = 8;
const int EN1 = 6;
const int IN3 = 9;
const int IN4 = 10;
const int EN2 = 5;

const int threshold = 500; // Adjust this threshold based on your sensor readings

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(EN1, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(EN2, OUTPUT);
}

void loop() {
  
  int leftSensorValue = analogRead(leftSensorPin);
  int rightSensorValue = analogRead(rightSensorPin);

  Serial.print(leftSensorValue);
  Serial.print(rightSensorValue);

  // Determine the direction based on sensor readings
  if (leftSensorValue < threshold && rightSensorValue < threshold) {
    // Both sensors detect the line - move forward
    moveForward();
    
  } else if (leftSensorValue < threshold) {
    // Left sensor detects the line - turn right
    turnLeft();
  } else if (rightSensorValue < threshold) {
    // Right sensor detects the line - turn left
    turnRight();
  } else {
    // Both sensors do not detect the line - stop or apply corrective action 
    stopMotors();
  }
}

void moveForward() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  analogWrite(EN1, 255);  // Adjust speed as needed
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  analogWrite(EN2, 255);  // Adjust speed as needed
}

void turnLeft() {
  
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);  // Set IN2 HIGH for backward motion
  analogWrite(EN1, 255);     // Adjust speed as needed for turning
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  analogWrite(EN2, 0);     // Adjust speed as needed for turning
                // Adjust duration for the turn
}

void turnRight() {
  
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);  // Set IN2 HIGH for backward motion
  analogWrite(EN1, 0);     // Adjust speed as needed for turning
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  analogWrite(EN2, 255);     // Adjust speed as needed for turning
             // Adjust duration for the turn
}


void stopMotors() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, HIGH);
  analogWrite(EN1, 0);
  analogWrite(EN2, 0);
}