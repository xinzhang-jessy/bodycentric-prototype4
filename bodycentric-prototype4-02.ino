
//**************Body Centri Tech
//**************Prototype04-Visual Power
//**************Reference Arduino Analog Read

int LEDpin = 13;// LED port
int lightSensor = A2;// Lightsensor port
int n = 0; // Default LED value
int lightSensorValue = 0; 
int lightSensorPin = A2; 

void setup() {
 pinMode(LEDpin, OUTPUT);
 pinMode(lightSensor, INPUT);//read lightsensor Value
}

void loop() {
    lightSensorValue = analogRead(A2);
 n = analogRead(lightSensor);
 analogWrite(LEDpin, n/4);//Convert the lgihtSensor Value 0~1000 to Digitalvalue 0~255

  Serial.print("\t sensor= ");
  Serial.println(lightSensorValue);
  delay(1000);
}
