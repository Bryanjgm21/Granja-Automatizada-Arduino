#include <Servo.h>
int SENSOR;    // variable almacena valor leido de entrada analogica A0
float TEMPERATURA;  // variable que almacena la temperatura que se muestra
int pinLed1 = 10;
int pinLed2 = 11;
int pinLed3 = 12;
int sms=0;  // almacena la variable que se dijita en el puerto serial
int indice=1;
// Declaramos la variable para controlar el servo
Servo servoMotor;
 
void setup() {
  Serial.begin(9600);
  servoMotor.attach(9);
  pinMode(8, OUTPUT);  
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  
}
void display (int a, int b, int c, int d, int e, int f, int g){
  
  digitalWrite (3,a);   
  digitalWrite (4,b);   
  digitalWrite (7,c);
  digitalWrite (6,d);
  digitalWrite (5,e);
  digitalWrite (2,f);
  digitalWrite (8,g);
 }
 void temperatura (){  // funcion que muestra la temperatura registrada
  SENSOR = analogRead(A0);
  TEMPERATURA = ((SENSOR * 5000.0) / 1023) / 10;
  Serial.println(TEMPERATURA, 1);
  delay(100);
 }

 void loop(){  // loop principal
  sieteyleds();
  temperatura();
 }
 
void sieteyleds() {  // funcion que muestra el digito enviado por el puerto serial y prende los LEDs segun el orden
  
  servoMotor.write(0);
  delay(500);
  digitalWrite(pinLed1,LOW);
  digitalWrite(pinLed2,LOW);
  digitalWrite(pinLed3,LOW);
  
  if (Serial.available()){
    sms = Serial.read();
      sms = sms-48;
      
 
    if (sms==0){
      display (1,1,1,1,1,1,0);
      servoMotor.write(90);
      delay(5000);
      
    }
 
   if (sms==1){
      display (0,1,1,0,0,0,0);
      digitalWrite(pinLed1,LOW);
      digitalWrite(pinLed2,HIGH);
      digitalWrite(pinLed3,LOW);
      servoMotor.write(90);
      delay(5000);
    }
    if (sms==2){
      display (1,1,0,1,1,0,1);
      digitalWrite(pinLed1,LOW);
      digitalWrite(pinLed2,LOW);
      digitalWrite(pinLed3,HIGH);
      servoMotor.write(90);
      delay(5000);
   
    }if (sms==3){
      display (1,1,1,1,0,0,1);
      digitalWrite(pinLed1,HIGH);
      digitalWrite(pinLed2,LOW);
      digitalWrite(pinLed3,LOW);
      servoMotor.write(90);
      delay(5000);
    }
    
    if (sms==4){
      display (0,1,1,0,0,1,1);
      digitalWrite(pinLed1,HIGH);
      digitalWrite(pinLed2,HIGH);
      digitalWrite(pinLed3,HIGH);
      servoMotor.write(90);
      delay(5000);
    }
    if (sms==5){
      display (1,0,1,1,0,1,1);
      digitalWrite(pinLed1,HIGH);
      digitalWrite(pinLed2,HIGH);
      digitalWrite(pinLed3,HIGH);
      servoMotor.write(90);
      delay(5000);
      
    }
    if (sms==6){
      display (1,0,1,1,1,1,1);
      digitalWrite(pinLed1,LOW);
      digitalWrite(pinLed2,HIGH);
      digitalWrite(pinLed3,HIGH);
      servoMotor.write(90);
      delay(5000);
   }
    if (sms==7){
      display (1,1,1,0,0,0,0);
      digitalWrite(pinLed1,HIGH);
      digitalWrite(pinLed2,LOW);
      digitalWrite(pinLed3,HIGH);
      servoMotor.write(90);
      delay(5000); 
   }
    if (sms==8){
      display (1,1,1,1,1,1,1);
      digitalWrite(pinLed1,LOW);
      digitalWrite(pinLed2,HIGH);
      digitalWrite(pinLed3,LOW);
      servoMotor.write(90);
      delay(5000);
    }
    if (sms==9){
      display (1,1,1,0,0,1,1);
      digitalWrite(pinLed1,HIGH);
      digitalWrite(pinLed2,HIGH);
      digitalWrite(pinLed3,HIGH);
      servoMotor.write(90);
      delay(5000);
 }
}

}
