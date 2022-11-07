#include "Adafruit_VL53L0X.h"
#define xShut 14
Adafruit_VL53L0X lox = Adafruit_VL53L0X();

void setup() {
  Serial.begin(115200);
  
  // wait until serial port opens for native USB devices
  while (! Serial) {
    delay(1);
  }

  Serial.println("Adafruit VL53L0X test");
  if (!lox.begin()) {
    Serial.println(F("Failed to boot VL53L0X"));
    while(1);
  }
  // power 
  Serial.println(F("VL53L0X API Simple Ranging example\n\n")); 
  delay(100);
  pinMode(xShut, OUTPUT); 
  digitalWrite(xShut, LOW);
}

void loop() {
  if (Serial.available() > 0)  // Daten werden empfangen
  {
    String inString = Serial.readStringUntil('\n'); // Zeichen vom Seriellen Port in inByte ablegen
    inString.trim();
    if (inString.equals("tofOn")) {
      digitalWrite(xShut, HIGH);
      Serial.println("Sensor on");
      lox.begin();
      delay(10);
    } else if (inString.equals("tofOff")) {
      digitalWrite(xShut, LOW);
      delay(10);
      Serial.println("Sensor off");
    }
  }
  
  VL53L0X_RangingMeasurementData_t measure;
    
  Serial.print("Reading a measurement... ");
  lox.rangingTest(&measure, false); // pass in 'true' to get debug data printout!

  if (measure.RangeStatus != 4) {  // phase failures have incorrect data
    Serial.print("Distance (mm): "); Serial.println(measure.RangeMilliMeter);
  } else {
    Serial.println(" out of range ");
  }
   
  delay(100);
}
