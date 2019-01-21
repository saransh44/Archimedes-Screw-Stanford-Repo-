void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  int moistureSensor = 0;

}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Moisture Sensor Value:");
  Serial.println(analogRead(A5));  
  delay(1000);
  Serial.print("CNT5 Humidity  Sensor Value:");
  Serial.println(analogRead(A0));  
  delay(1000);
}
