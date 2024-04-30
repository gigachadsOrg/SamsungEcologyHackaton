#include "Wire.h"
#include "SHT2x.h"

SHT2x sht;


void setup()
{
  Serial.begin(9600);
  Wire.begin();
  sht.begin();
}


void loop()
{
  
   Serial.print("");
  Serial.print(sht.getTemperature(),3);
   Serial.print(" ");
  Serial.println(sht.getHumidity(),3);
  delay(1000);
  sht.read();

}