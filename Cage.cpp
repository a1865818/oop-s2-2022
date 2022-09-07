#include"Cage.h"
Cage::Cage():newName(""),newNumber(0) {}
Cage::Cage(string newName, int newNumber):newName(newName),newNumber(newNumber){}
string Cage::get_name(){
    return newName;
}
int Cage::get_IDnum() {
    return newNumber;
}
Cage::~Cage() {}