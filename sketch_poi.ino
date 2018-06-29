
const char str[] = "lat::21.321::lon::157.808";


void setup()
{
  Serial.begin(9600);
  while (! Serial); // Wait untilSerial is ready - Leonardo
  Serial.println("Enter LED Number 0 to 7 or 'x' to clear");
}

void loop()
{
  if (Serial.available())
  {
    char ch = Serial.read();
    if (ch)
    {
      int led = ch - '0';
      Serial.print("You Chose ");
      Serial.print(str);
    }
  }
}

