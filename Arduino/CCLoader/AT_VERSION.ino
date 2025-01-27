// Connect Teensy's Serial4 to the BLE module.
void setup2() {  
  Serial.begin(115200);
  Serial4.begin(9600);
  Serial.println("Started!");
}

void loop2() {
  unsigned char Continue = 0;
  unsigned char Verify = 0;
  while (1)
  {
    Serial.print("Waiting input:");
    while (!Serial.available());
    String s = Serial.readString();
    Serial4.write(s.c_str());
    // DO NOT SET CR HERE, LET'S USE THE ARDUINO SERIAL TERMINAL OPTIONS
    //Serial4.write("\r\n");

    delay(100);
    while (Serial4.available())
    {
      while (Serial4.available())
      {
        char b = Serial4.read();
        Serial.print(b);
      }
      delay(50);
    }
  }
}


