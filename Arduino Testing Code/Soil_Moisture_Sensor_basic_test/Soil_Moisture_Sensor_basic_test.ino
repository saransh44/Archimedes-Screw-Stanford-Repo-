double mSensor = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}
void loop() {
  // put your main code here, to run repeatedly:
  /*mSensor = analogRead(A0);
  Serial.print("Moisture Sensor Value:");
  Serial.println(mSensor);  
  Serial.print(mSensor/1024*100);  
  Serial.println(" %");  
  delay(1000);*/

  mSensor = analogRead(A0);
  Serial.print("Moisture Sensor Value:");
  Serial.println(mSensor);  
  Serial.print((mSensor/1024*100 - 100) * -1);  
  Serial.println(" %");  
  delay(1000);
   
}
