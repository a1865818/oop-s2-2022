#include"Helicopter.h"
#include"AirCraft.h"
#include<iostream>
#include<string>
int main () {
    Helicopter *heli1;
    heli1=new Helicopter(5690,"AB");
    heli1->fly(45,10);
    cout<<heli1->get_fuel()<<" "<<heli1->get_numflight()<<endl;
    return 0;
}