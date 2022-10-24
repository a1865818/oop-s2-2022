#ifndef ANIMAL_H
#define ANIMAL_H
#include<iostream>
using namespace std;
class animal{
    protected:
        string name;
        int animalID;
        int volume;
    public:
    animal(string n, int v);
    virtual string get_name()=0;
    void set_name(string n);
    void set_volume (int v);
    int get_volume();
    int get_animalsID();
};
#endif