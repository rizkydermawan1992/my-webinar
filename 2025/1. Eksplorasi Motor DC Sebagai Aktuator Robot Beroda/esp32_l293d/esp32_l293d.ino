
// connections for drive Motors
int PWM_A = 12;
int PWM_B = 13;
int DIR_A = 14;
int DIR_B = 15;




void setup(){
  Serial.begin(115200);    // set up Serial library at 115200 bps
  
    
  // Set all the motor control pins to outputs
  pinMode(PWM_A, OUTPUT);
  pinMode(PWM_B, OUTPUT);
  pinMode(DIR_A, OUTPUT);
  pinMode(DIR_B, OUTPUT);
  
  // Turn off motors - Initial state
  digitalWrite(DIR_A, LOW);
  digitalWrite(DIR_B, LOW);
//  analogWrite(PWM_A, 0);
//  analogWrite(PWM_B, 0);

  
    
  digitalWrite(PWM_A, HIGH);
  digitalWrite(PWM_B, HIGH);
}


void loop() {
  Forward();
  delay(1000);
  Stop();
  delay(200);
  Backward();
  delay(1000);
  Stop();
  delay(200);
  TurnRight();
  delay(1000);
  Stop();
  delay(200);
  TurnLeft();
  delay(1000);
   Stop();
  delay(200);
  

}


// function to move forward
void Forward(){ 
  digitalWrite(DIR_A, HIGH);
  digitalWrite(DIR_B, HIGH);
//  digitalWrite(PWM_A, HIGH);
//  digitalWrite(PWM_B, HIGH);

 
}

// function to move backward
void Backward(){
  digitalWrite(DIR_A, LOW);
  digitalWrite(DIR_B, LOW);
//  analogWrite(PWM_A, SPEED);
//  analogWrite(PWM_B, SPEED);
 
}

// function to turn right
void TurnRight(){
  digitalWrite(DIR_A, LOW);
  digitalWrite(DIR_B, HIGH);
//  analogWrite(PWM_A, SPEED);
//  analogWrite(PWM_B, SPEED);
 
}

// function to turn left
void TurnLeft(){
  digitalWrite(DIR_A, HIGH);
  digitalWrite(DIR_B, LOW);
//  analogWrite(PWM_A, SPEED);
//  analogWrite(PWM_B, SPEED);
 ;
}

// function to move forward left
void ForwardLeft(){
  digitalWrite(DIR_A, HIGH);
  digitalWrite(DIR_B, HIGH);
//  analogWrite(PWM_A, SPEED);
//  analogWrite(PWM_B, SPEED/speed_Coeff);
 
}

// function to move backward left
void BackwardLeft(){
  digitalWrite(DIR_A, LOW);
  digitalWrite(DIR_B, LOW);
//  analogWrite(PWM_A, SPEED);
//  analogWrite(PWM_B, SPEED/speed_Coeff);
 
}

// function to move forward right
void ForwardRight(){
  digitalWrite(DIR_A, HIGH);
  digitalWrite(DIR_B, HIGH);
//  digitalWrite(PWM_A, SPEED/speed_Coeff);
//  digitalWrite(PWM_B, SPEED);
  
}

// function to move backward left
void BackwardRight(){ 
  digitalWrite(DIR_A, LOW);
  digitalWrite(DIR_B, LOW);
//  analogWrite(PWM_A, SPEED/speed_Coeff);
//  analogWrite(PWM_B, SPEED);
 
}

// function to stop motors
void Stop(){  
  digitalWrite(DIR_A, LOW);
  digitalWrite(DIR_B, LOW);
//  analogWrite(PWM_A, 0);
//  analogWrite(PWM_B, 0);
  
}




