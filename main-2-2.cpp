#include"Helicopter.h"
#include"AirCraft.h"
#include"Airplane.h"
#include<iostream>
#include<string>
int main () {
   Airplane *aip1;
   aip1=new Airplane(3000,130);
   aip1->set_fuel(95);
   aip1->reducePassengers(30);
   aip1->fly(60,120);
   cout<<aip1->get_numPassengers()<<" "<<aip1->get_numflight()<<" "<<aip1->get_fuel()<<endl;
   return 0;
}