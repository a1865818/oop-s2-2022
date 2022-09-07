#ifndef CAGE_H
#define CAGE_H
#include <iostream>
#include<string>
using namespace std;
class Cage {
    private:
        string newName;
        int newNumber;
    public: 
        Cage();
        Cage(string newName, int newNumber);
        string get_name();
        int get_IDnum();
        ~Cage();
};
#endif