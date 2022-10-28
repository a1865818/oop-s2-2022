#ifndef AIRFLEET_H
#define AIRFLEET_H
#include"AirCraft.h"
#include"Helicopter.h"
#include"Airplane.h"
#include<iostream>
#include<string>
using namespace std;
class AirFleet{
    private:     
        AirFleet();
        AirCraft **fleet;
        int count;
    public:
        void addAirCraft(AirCraft *aircraft);
        AirCraft **get_fleet();
        int get_count();
        static AirFleet *createFleet(int authority);
};
#endif