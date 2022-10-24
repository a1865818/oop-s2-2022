#ifndef ZOO_H
#define ZOO_H
#include"animal.h"
#include"vegie.h"
#include"hunter.h"
#include<iostream>
#include<string>
using namespace std;
class zoo{
    public:
        zoo(string n,int cows,int lions);
        string get_name();
        int get_number_of_animals ();
        animal **get_animals();
    private:
        string name;
        int number_of_animals;
        animal **animals;
};
#endif