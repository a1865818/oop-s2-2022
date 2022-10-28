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
  AirCraft(int w) ;
 void set_weight(int w);
 void set_numflight(int nflight);
void set_fuel(float f); 
float get_fuel();
  int get_numflight();
  int get_weight();
void refuel() ;
  virtual void fly(int headwind, int minutes)= 0;
  ~AirCraft();
};

#endif