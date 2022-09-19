#ifndef MONSTER_H
#define MONSTER_H
#include "Character.h"
#include "Item.h"
#include <iostream>
#include <string>
using namespace std;
class Monster : public Character
{
protected:
    Item exWeapon; // this is the item that can kill the monster
    // All details of method are in cpp file
public:
    Monster(Item exWeapon, string name, bool status);
    void display();
    void showDetails();
    bool isDead(Item weapon);
    void setExWeapon(Item exWeapon);
    string getExWeaponName();
    ~Monster();
};

#endif
