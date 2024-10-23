const int pinLow =3;  
const int pinEmpty =4;  

const int ledHigh =9;  
const int ledLow =10;  
const int ledEmpty =11;  

const int buzzer =12;  

void setup() {  
 pinMode(pinHigh, INPUT);  
 pinMode(pinLow, INPUT);  
 pinMode(pinEmpty, INPUT);  

 pinMode(ledHigh, OUTPUT);  
 pinMode(ledLow, OUTPUT);  
 pinMode(ledEmpty, OUTPUT);  

 pinMode(buzzer, OUTPUT);  
}  

void loop() {  
 int sensorHigh = digitalRead(pinHigh);  
 int sensorLow = digitalRead(pinLow);  
 int sensorEmpty = digitalRead(pinEmpty);  

 if (sensorHigh == HIGH && sensorLow == HIGH && sensorEmpty == HIGH) {  
 digitalWrite(ledHigh, LOW);  
 digitalWrite(ledLow, LOW);  
 digitalWrite(ledEmpty, LOW);  
 digitalWrite(buzzer, LOW);  
 }  

 if (sensorHigh == LOW && sensorLow == HIGH && sensorEmpty == HIGH) {  
 digitalWrite(ledHigh, HIGH);  
 digitalWrite(ledLow, LOW);  
 digitalWrite(ledEmpty, LOW);  
 digitalWrite(buzzer, HIGH);  
 delay(500);  
 }  

 if (sensorHigh == LOW && sensorLow == LOW && sensorEmpty == HIGH) {  
 digitalWrite(ledHigh, HIGH);  
 digitalWrite(ledLow, HIGH);  
 digitalWrite(ledEmpty, LOW);  
 digitalWrite(buzzer, HIGH);  
 delay(500);  
 }  

 if (sensorHigh == LOW && sensorLow == LOW && sensorEmpty == LOW) {  
 digitalWrite(ledHigh, HIGH);  
 digitalWrite(ledLow, HIGH);  
 digitalWrite(ledEmpty, HIGH);  
 digitalWrite(buzzer, HIGH);  
 delay(500);  
 }  
 delay(1000);  
}