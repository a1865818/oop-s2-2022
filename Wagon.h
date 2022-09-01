#ifndef WAGON_H
#define WAGON_H
#include<iostream>
#include<string>
#include"Capybara.h"
using namespace std;
class Wagon {
    private:
        Capybara c[4];
        int _counts;
    public:
        Wagon();                               
        bool addCapybara(Capybara newCapy);   
        void emptyWagon();                     
        void printCapybaras();  
};
#endif