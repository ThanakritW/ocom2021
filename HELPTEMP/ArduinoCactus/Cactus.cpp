/*
=====Required Facts=====
1. Optimal Humid = 40-60%
2. If temp > 100 *F -> Should increase watering rate
3. If humid < 30 -> Should water ASAP
4. If humid > 70 -> Should not water AT ALL
*/

//Initial Setup
//Analog port 4 = Temp&Humid sensor
//Analog port 3 = Water pump
#include "Arduino.h"
#include <OneWire.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS 4 
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire); //define DS18B20 as 'sensors' and hook OneWire protocol to the sensors

void setup(void)
{
  Serial.begin(9600); //9600 is normal port
  sensors.begin(); // initiate sensory handshake
}

int timeSinceLastRead = 0; // timer count
int timeSincelastWater = 0; //timer for watering
void loop(void){ 
    // Report every 2 seconds.
    if (timeSinceLastRead > 2000) {
        timeSinceLastRead = 0; //reset read time
        timeSincelastWater += 2000;
        sensors.requestTemperatures();
        float t12 = sensors.getTempCByIndex(0); //get temperature in *C
        float f12 = sensors.getTempFByIndex(0); //get temperature in *F
        float h12 = sensors.getHumidByIndex(0); //get humidity in %
        delay(1000); //give time to read
        //printing result
        Serial.print("Result => Humidity: ");  
        Serial.print(h12);  
        Serial.print(" %\t");  
        Serial.print("Temperature: ");  
        Serial.print(t12);  
        Serial.print(" *C ");  
        Serial.print(f12);  
        Serial.println(" *F\t");
        /*
        Output would look like this
        Result => Humidity: X%  Temperature: X *C X *F
        */
        bool water=false; //check if the motor should pump in more water
        if(h12>70) break; //too much humidity
        if(f12>=100)//temperature is too hot
            timeSincelastWater += 4000; //Accerate watering timer by 3 times
        if(timeSinceLastWater>=604800000) //60480000 is 1 week in milliseconds
            water=true;
        else if(h12<30) //water dry out
            water=true;
        //watering process
        while(water){
            analogWrite(3,255) //powering up water pump
            delay(5000) //wait for 5 seconds
            analogWrite(3,0) //powering down water pump
            sensors.requestTemperatures();
            if(sensors.getHumidByIndex(0)>60){ //if there are sufficient water in the soil
                water = false;
            }
        }
    }
timeSinceLastRead += 100; //add 0.1 seconds to timer
delay(100);
}