#ifndef HELICOPTER_H
#define HELICOPTER_H
#include"AirCraft.h"
#include<iostream>
#include<string>
using namespace std;
class Helicopter:public AirCraft{
    private:
        static int heliID;
    protected:
        string name;
        int craftID;
    public:
        Helicopter();
        Helicopter(int w,string n);
        ~Helicopter();
        void set_craftID(int id);
        void set_name(string n);
        int get_craftID();
        string get_name();
        void fly(int headwind, int minutes);
};
#endif