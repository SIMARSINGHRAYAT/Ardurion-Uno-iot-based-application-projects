const int trigPin = 9;  
const int echoPin = 10;  

const int redLED = 2;  
const int yellowLED = 3;  
const int blueLED = 4;  
const int greenLED = 5;  

long duration;  
int distance;  

void setup() {  
  pinMode(trigPin, OUTPUT);  
  pinMode(echoPin, INPUT);  
  
  pinMode(redLED, OUTPUT);  
  pinMode(yellowLED, OUTPUT);  
  pinMode(blueLED, OUTPUT);  
  pinMode(greenLED, OUTPUT);  
  
  Serial.begin(9600);  
}  

void loop() {  
  digitalWrite(trigPin, LOW);  
  delayMicroseconds(2);  
  
  digitalWrite(trigPin, HIGH);  
  delayMicroseconds(10);  
  digitalWrite(trigPin, LOW);  
  
  duration = pulseIn(echoPin, HIGH);  
  
  distance = duration * 0.034 / 2;  

  Serial.print("Distance: ");  
  Serial.println(distance);  

  if (distance > 0 && distance <= 20) {  
    digitalWrite(redLED, HIGH);  
    digitalWrite(yellowLED, LOW);  
    digitalWrite(blueLED, LOW);  
    digitalWrite(greenLED, LOW);  
  } else if (distance > 20 && distance <= 45) {  
    digitalWrite(redLED, LOW);  
    digitalWrite(yellowLED, HIGH);  
    digitalWrite(blueLED, LOW);  
    digitalWrite(greenLED, LOW);  
  } else if (distance > 45 && distance <= 60) {  
    digitalWrite(redLED, LOW);  
    digitalWrite(yellowLED, LOW);  
    digitalWrite(blueLED, HIGH);  
    digitalWrite(greenLED, LOW);  
  } else if (distance > 60) {  
    digitalWrite(redLED, LOW);  
    digitalWrite(yellowLED, LOW);  
    digitalWrite(blueLED, LOW);  
    digitalWrite(greenLED, HIGH);  
  } else {  
    digitalWrite(redLED, LOW);  
    digitalWrite(yellowLED, LOW);  
    digitalWrite(blueLED, LOW);  
    digitalWrite(greenLED, LOW);  
  }  
  
  delay(500);  
}