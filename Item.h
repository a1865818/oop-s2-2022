#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
using namespace std;
class Item
{
protected:
    string name; // name of the item
    int value;   // value of the item
                 // All details of method are in the cpp file
public:
    Item();
    Item(string name, int value);
    void setName(string name);
    void setValue(int value);
    string getName();
    int getValue();
    ~Item();
};

#endif
