int TMPvalor = 0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  TMPvalor = analogRead(A0);
  Serial.println(TMPvalor);
  if (TMPvalor > 200) {
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);
  } else {
        digitalWrite(13, LOW);
        digitalWrite(12, LOW);
  }
  delay(10);
}
