void setup()
{
  pinMode(LEDB, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  int ldr_sensr_deger = analogRead(A0);
  Serial.println(ldr_sensr_deger);

  if (ldr_sensr_deger < 2000)
  {
    digitalWrite(LEDB, 1);
  }
  else
  {
    digitalWrite(LEDB, 0);
  }

  delay(500);

}
