#include <SoftwareSerial.h>

SoftwareSerial bluetooth(A1, A0);

int comando;

int motor1input1=2;
int motor1input2=4;
int motor2input3=7;
int motor2input4=8; 

void setup() {
  
  bluetooth.begin(9600);
  pinMode(motor1input1,OUTPUT);
  pinMode(motor1input2,OUTPUT);
  pinMode(motor2input3,OUTPUT);
  pinMode(motor2input4,OUTPUT);

}

void loop() {
  
  if(bluetooth.available() > 0){
    
    comando = bluetooth.read();
    
    if(comando == 'B'){
      digitalWrite(motor1input1,LOW);
      digitalWrite(motor1input2,HIGH);
      digitalWrite(motor2input3,HIGH);
      digitalWrite(motor2input4,LOW);
    }

    if(comando == 'F'){
      digitalWrite(motor1input1,HIGH);
      digitalWrite(motor1input2,LOW);
      digitalWrite(motor2input3,LOW);
      digitalWrite(motor2input4,HIGH );
    }
    
    if(comando == 'S'){
      digitalWrite(motor1input1,LOW);
      digitalWrite(motor1input2,LOW);
      digitalWrite(motor2input3,LOW);
      digitalWrite(motor2input4,LOW);      
    }

    if(comando == 'L'){
      digitalWrite(motor1input1,HIGH);
      digitalWrite(motor1input2,LOW);
      digitalWrite(motor2input3,LOW);
      digitalWrite(motor2input4,LOW);      
    }

    if(comando == 'R'){
      digitalWrite(motor1input1,LOW);
      digitalWrite(motor1input2,LOW);
      digitalWrite(motor2input3,LOW);
      digitalWrite(motor2input4,HIGH);      
    }
            
  }
  
}

