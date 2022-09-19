#include "Item.h"
#include "Monster.h"
#include "Room.h"
#include <iostream>
#include <string>
using namespace std;
// default constructor which will not be use
Room::Room()
{
}
// constructor taking a number a parameter
Room::Room(int rNumber)
{
	// create an array storing available directions
	numberOfDoors = 0;
	number = rNumber;
	doorDirection = new string[4];
	// use if else to check where is room in the castle and change the number of doors
	if ((number) % 3 != 0)
	{
		doorDirection[numberOfDoors] = "East";
		numberOfDoors++;
	}
	if ((number) % 3 != 1)
	{
		doorDirection[numberOfDoors] = "West";
		numberOfDoors++;
	}
	if (number <= 6)
	{
		doorDirection[numberOfDoors] = "South";
		numberOfDoors++;
	}
	if ((number) >= 4)
	{
		doorDirection[numberOfDoors] = "North";
		numberOfDoors++;
	}
	// create 5 items in this game
	Item *item1, *item2, *item3, *item4, *item5;
	item1 = new Item("The sword of Gryffindor", 100);
	item2 = new Item("The Elder wand", 200);
	item3 = new Item("", 0);
	item4 = new Item("The Cloak of Invisibility", 300);
	item5 = new Item("The Golden Snitch", 350);
	// assign them to specific items in each room, and empty items for others
	if (number == 3)
	{
		currentItem = new Item("The sword of Gryffindor", 100);
	}
	else if (number == 7)
	{
		currentItem = new Item("The Elder wand", 200);
	}
	else if (number == 2)
	{
		currentItem = new Item("The Cloak of Invisibility", 300);
	}
	else if (number == 4)
	{
		currentItem = new Item("The Golden Snitch", 350);
	}
	else
	{
		currentItem = new Item("", 0);
	}
	// create alive Monsters for the room 6 and 8, and default ( dead) monsters for other rooms
	if (number == 8)
	{
		currentMonster = new Monster(*item1, "Basilisk", true);
	}
	else if (number == 6)
	{
		currentMonster = new Monster(*item2, "Dementor guard", true);
	}
	else
	{
		currentMonster = new Monster(*item3, "", false);
	}
	// Deallocate
	delete item1;
	delete item2;
	delete item3;
	delete item4;
	delete item5;
}
// method changing the number(id) of room
void Room::setNumber(int rNumber)
{
	number = rNumber;
}
// method changing monster of room, taking a monster pointer as parameter
void Room::setCurrentMonster(Monster *rMonster)
{
	currentMonster = rMonster;
}
// method  changing item in the room, taking an item as parameter
void Room::setCurrentItem(Item *rItem)
{
	currentItem = rItem;
}
// method returning the monster in the room
Monster *Room::getCurrentMonster()
{
	return currentMonster;
}
// method returning the item in the room
Item *Room::getCurrentItem()
{
	return currentItem;
}
// method to remove the current monster
void Room::removeMonster()
{
	delete currentMonster;
}
// method removing the current item
void Room::removeItem()
{
	delete currentItem;
}
// method showing the available directions in rooms
void Room::showAvailableDirection()
{
	cout << "There are " << numberOfDoors << " doors on your ";
	// use if else to display the right msg for each condition
	for (int i = 0; i < numberOfDoors; i++)
	{
		if (i == numberOfDoors - 1)
		{
			cout << "and ";
		}
		cout << doorDirection[i];
		if (numberOfDoors > 2 && i != numberOfDoors - 1)
		{
			cout << ", ";
		}
		else
		{
			cout << " ";
		}
	}
	cout << "." << endl;
}
// method returning a string array of directions available
string *Room::availableDirection()
{
	return doorDirection;
}
// method returning the number of doors
int Room::getNumberOfDoors()
{
	return numberOfDoors;
}
// destructor
Room::~Room()
{
	delete currentItem;
	delete currentMonster;
	delete doorDirection;
}
