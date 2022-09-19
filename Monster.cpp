#include "Character.h"
#include "Monster.h"
#include "Item.h"
#include <iostream>
#include <string>
using namespace std;
// Constructor taking an item, name, and bool as parameters to create object
Monster::Monster(Item mWeapon, string mName, bool mStatus)
{
	exWeapon = mWeapon;
	name = mName;
	status = mStatus;
}
// method displaying voice of monster
void Monster::display()
{
	cout << name << ": grrr grrrr..." << endl;
}
// method displaying stats of monster
void Monster::showDetails()
{
	cout << "This is " << name << ". The only way to kill it is: You have to use " << exWeapon.getName() << "." << endl;
}
// method checking if monster is dead by an item ( taking as parameter) or not, return a bool
bool Monster::isDead(Item weapon)
{
	if (exWeapon.getName() == weapon.getName() && exWeapon.getName() != "")
	{
		return true;
	}
	else
	{
		return false;
	}
}
// method set an item from parameter to be the exWeapon for monster
void Monster::setExWeapon(Item weapon)
{
	exWeapon = weapon;
}
// method returning the name of the exclusive weapon
string Monster::getExWeaponName()
{
	return exWeapon.getName();
}
// Destructor
Monster::~Monster()
{
}
