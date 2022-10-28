#include"Helicopter.h"
#include"AirCraft.h"
#include<iostream>
#include<string>
using namespace std;
Helicopter::Helicopter() {

}
int Helicopter::heliID=0;
Helicopter::Helicopter(int w,string n){
    name=n;
    weight=w;
    craftID=heliID;
    heliID++;
}
void Helicopter::set_craftID(int id){
    craftID=id;
}
void Helicopter::set_name(string n){
    name =n;
}
int Helicopter::get_craftID() {
    return craftID;
}
string Helicopter::get_name() {
    return name;
}
void Helicopter::fly(int headwind, int minutes){
    float FuelUsed = 0;
    if(headwind >= 40){
        FuelUsed = 0.4 * minutes;
    }
    if(headwind < 40){
        FuelUsed = 0.2 * minutes;
    }
    if(weight > 5670){
        int Exweight = weight - 5670;
        FuelUsed = FuelUsed + (minutes*Exweight * 0.01);
    }
    if (fuel < 20 ){
    }

    
    if(fuel - FuelUsed > 0){
        fuel = fuel - FuelUsed;
        numberOfFlights++;
    }
    
}
Helicopter::~Helicopter(){
    
}