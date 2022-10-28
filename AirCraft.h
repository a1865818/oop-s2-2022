#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include <iostream>

class AirCraft {
 protected:
  int weight;               // the weight of AirCraft
  float fuel = 100;         // fuel percentage, initially 100%
  int numberOfFlights = 0;  // number of flights
 public:
  AirCraft();
  AirCraft(int w);
  void fly(int headwind, int minutes);
  void refuel();  // refuel the aircraft
  void set_numberOfFlights(int n);
  void set_fuel(float f);
  void set_weight(int w);

  float get_fuel();

  int get_weight();
  int get_numberOfFlights();

  ~AirCraft();
};

#endif