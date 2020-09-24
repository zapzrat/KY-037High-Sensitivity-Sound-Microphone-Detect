const int led = 13;
int statusLed = 0;
int checkAction = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Micro Project Thailand ~^.^~ ");
  pinMode(led, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A0);
//    Serial.println(sensorValue);


  if (sensorValue >= 100) {
   Serial.print("data : "); Serial.println(sensorValue);
    checkAction++;
    if (checkAction == 1) {
//      Serial.println("dddddddd");
      if (statusLed == 0) {
        statusLed = 1;
      }
      else if (statusLed == 1) {
        statusLed = 0;
      }
      delay(50);
    }

  }
  else if (sensorValue < 100) {
    checkAction = 0;
  }

  if (statusLed == 1) {
    digitalWrite(led, HIGH);
  }
  else if (statusLed == 0) {
    digitalWrite(led, LOW);
  }





}
