/*
Adafruit Arduino - Lesson 5. Serial Monitor
*/

char ch;
int i = 1;

void setup()
{
  Serial.begin(9600);
  while (! Serial); // Wait untilSerial is ready - Leonardo
  Serial.println("Enter number from 0 - 10");
}

void loop()
{
  if (Serial.available())
  {
    ch = Serial.read();
  };
  if(ch == '1'){
    while (i == 1) {
      Serial.print("UNO");
      i++;
    }
  };
  if(ch == '2'){
    while (i == 1) {
      Serial.print("DOUS");
      i++;
    }
  };


}