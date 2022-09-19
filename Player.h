#ifndef PLAYER_H
#define PLAYER_H
#include "Character.h"
#include "Inventory.h"
#include <iostream>
#include <string>
using namespace std;
class Player : public Character
{
protected:
    Inventory playerInventory; // the inventory of the player
    // all details of method are in cpp file
public:
    Player(Inventory pInventory, string name, bool status);
    void display();
    void showDetails();
    void setName(string name);
    void setInventory(Inventory *pInventory);
    Inventory *getInventory();
    ~Player();
};

#endif
