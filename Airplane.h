#ifndef AIRPLANE_H
#define AIRPLANE_H
#include"AirCraft.h"
#include"Helicopter.h"
#include<iostream>
#include<string>
using namespace std;
class Airplane:public AirCraft{
    protected:
        int numPassengers;
    public:
        Airplane();
        Airplane(int w,int p);
        void reducePassengers(int x);
        int get_numPassengers();
        ~Airplane();
        void fly(int headwind, int minutes);
};
#endif