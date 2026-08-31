int sensor = 7;
int led = 6;
void setup()
{
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
}

void loop()
{
  if (digitalRead(sensor) == HIGH) {
    digitalWrite (led, HIGH);
        
  } else { 
    digitalWrite (led, LOW);
  }
}