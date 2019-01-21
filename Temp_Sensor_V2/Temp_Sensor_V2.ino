
float tempC = 0.0;
int reading;
int tempPin = 0;
float tempF;
float temp = 0;
void setup()
{
analogReference(INTERNAL);
Serial.begin(9600);
}

void loop()
{

reading = analogRead(tempPin);
tempC = reading / 9.31;
temp = (5.0 * analogRead(tempPin) * 100.0) / 1024;

    tempF = tempC * (9.0/5.0) + 32.0;

Serial.println(temp);

delay(1000);
}

