#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include <iostream>
#include <string>
using namespace std;
class AirCraft {
 protected:
      int weight;           // the weight of AirCraft
      float fuel=100;           // fuel percentage, initially 100%
      int numberOfFlights=0;  // initially 0
    public:
        AirCraft();
        AirCraft(int w);// creates an Aircraft with weight w
        void refuel();               // Resets fuel back to 100%
        void set_weight(int w);
        void set_numflight(int nflight);
        void set_fuel(float f);
        float get_fuel();
        int get_weight();
        int get_numflight();
        virtual void fly(int headwind, int minutes)=0;         // headwind in km/h and minutes (time flying)
        ~AirCraft();
};
#endif