#ifndef AIRFLEET_H
#define AIRFLEET_H
#include"AirCraft.h"
#include"Helicopter.h"
#include<iostream>
#include<string>
#include"Airplane.h"
using namespace std;
class AirFleet{
    private:
        AirFleet();/* creates an AirFleet containing pointers to 5 AirCraft objects as an array; 
                    These AirCraft objects could be either Helicopters or Airplanes, and in any order*/
        AirCraft **fleet;
        int count;
    public:
        void addAirCraft(AirCraft *aircraft);      // Adds a AirCraft to the fleet
        AirCraft **get_fleet();           // Returns the array of pointers to the five AirCraft objects
        int get_count();                  // Returns the amount of AirCrafts added to the fleet
        static AirFleet* createFleet(int authority);
};
#endif