#include "Character.h"
#include "Player.h"
#include "Inventory.h"
#include <iostream>
#include <string>
using namespace std;
// Constructor taking inventory, name, status as paramters to create object
Player::Player(Inventory pInventory, string pName, bool pStatus)
{
	playerInventory = pInventory;
	name = pName;
	status = pStatus;
}
// method displaying the voice of player
void Player::display()
{
	cout << name << ": What is that..." << endl;
}
// method displaying info and tutorials for player
void Player::showDetails()
{	
	// display the name and what are in inventory
	cout << endl << "Your name is: " << getName() << endl;
	cout << "Your inventory includes: " << endl;
	Item *itemList;
	itemList = getInventory()->getItemList();
	int sum = 0;
	// list the items in the inventory
	for (int i = 0; i < 7; i++)
	{
		if (itemList[i].getName() != "")
		{
			cout << "      " << itemList[i].getName() << ": " << itemList[i].getValue() << " coins." << endl;
		}
	}
	// display the total value of this inventory
	cout << "Total value: " << getInventory()->getTotalValue() << " coins." << endl;
}
// method changing the name of player
void Player::setName(string pName)
{
	name = pName;
}
// method changing the inventory
void Player::setInventory(Inventory *pInventory)
{
	playerInventory = *pInventory;
}
// method returning the inventory of player
Inventory *Player::getInventory()
{
	return &playerInventory;
}
// destructor
Player::~Player()
{
}
