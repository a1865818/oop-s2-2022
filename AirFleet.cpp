#include"Helicopter.h"
#include<iostream>
#include<string>
#include"AirCraft.h"
#include"Airplane.h"
#include"AirFleet.h"
using namespace std;
AirFleet::AirFleet(){
    fleet= new AirCraft*[5];
    count=0;
}
void AirFleet::addAirCraft(AirCraft *aircraft){
   fleet[count]=aircraft;
    count++;
}
AirCraft **AirFleet::get_fleet(){
    return fleet;
    
  }
int AirFleet::get_count(){
    return count;
}
AirFleet* AirFleet::createFleet(int authority) {
    if (authority==10)
    {
        return new AirFleet();
    }else{
        return NULL;
    }
    
}
