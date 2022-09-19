#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>
using namespace std;
// Abstract class which will not be created as an object
class Character
{
protected:
    string name; // the name of the character
    bool status; // the status of the character, which true = alive, and false = dead
    // details of the method are in the cpp file
public:
    Character();
    Character(string name, bool status);

    // Two virtual functions
    virtual void display() = 0;
    virtual void showDetails() = 0;

    void setStatus(bool status);
    bool getStatus();
    string getName();
    ~Character();
};

#endif
