int sensorPin = A0; // select the input pin for the potentiometer

int sensorValue = 0; // variable to store the value coming from the sensor


float i = 0;
float fixtemp = 20.;
int fixInput = 560;
float fixedDegreeValue = 5.5;


 
void setup () 
{
  Serial.begin (9600);
}
 
void loop () 
{

 sensorValue = analogRead(sensorPin);  
  if (sensorValue > fixInput ){ // ice cube
   // Serial.print(sensorValue);
    
    i = sensorValue - fixInput;
    i = i /fixedDegreeValue; 
    //Serial.print(sensorValue);
   // Serial.print(" and i = ");
   // Serial.println(i);
    Serial.print("Temperature = ");
    fixtemp = fixtemp - i;
    Serial.print(fixtemp);
    Serial.println(" C");
  }  
  else if(sensorValue < fixInput) //thea cup
  {
     i =  fixInput - sensorValue;
    i = i /fixedDegreeValue; 
   // Serial.print(sensorValue);
   // Serial.print(" and i = ");
   // Serial.println(i);
    Serial.print("Temperature = ");
    fixtemp = fixtemp + i;
    Serial.print(fixtemp);
    Serial.println(" C");
  }
  else if(sensorValue == fixInput ){  
    
    Serial.println(" temperature  = 20 C");
    
  }
  fixtemp = 20;
  delay(5000);
}

