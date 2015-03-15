#ifndef _ADAFRUIT_SENSOR_TESTOR_
#define _ADAFRUIT_SENSOR_TESTOR_

#if ARDUINO >= 100
 #include "Arduino.h"
 #include "Print.h"
#else
 #include "WProgram.h"
#endif

#include <Adafruit_Sensor.h>
#include <Adafruit_SensorTester.h>

class Adafruit_SensorTester : public Adafruit_Sensor {

 public: 
  /* Constructor */
  Adafruit_SensorTester(int32_t);

  bool getEvent(sensors_event_t*);
  void getSensor(sensor_t*);
  
 private:
   int32_t _sensorID;
};

#endif
