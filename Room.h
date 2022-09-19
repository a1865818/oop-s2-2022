#ifndef ROOM_H
#define ROOM_H
#include "Item.h"
#include "Monster.h"
#include <iostream>
#include <string>
using namespace std;
class Room
{
protected:
	int number;				 // the number of Room
	Monster *currentMonster; // current monster in this room
	Item *currentItem;		 // current item in this room
	int numberOfDoors;		 // current number of doors in this room
	string *doorDirection;	 // an array including all available directions from the doors
							 // all details of methos are in cpp file
public:
	Room();
	Room(int number);
	void setNumber(int number);
	void setCurrentMonster(Monster *monster);
	void setCurrentItem(Item *item);
	Monster *getCurrentMonster();
	Item *getCurrentItem();
	void removeMonster();
	void removeItem();
	void showAvailableDirection();
	string *availableDirection();
	int getNumberOfDoors();
	~Room();
};

#endif
