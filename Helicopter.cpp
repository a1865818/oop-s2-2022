#include"Helicopter.h"
#include<iostream>
#include<string>
#include"AirCraft.h"
using namespace std;
Helicopter::Helicopter(){

}
int Helicopter::heliID=0;
Helicopter::Helicopter(int w,string n){
    name=n;
    weight=w;
    craftID=heliID;
    heliID++;
}
void Helicopter::set_craftID(int id) {
    craftID=id;
}
void Helicopter::set_name(string n){
    name=n;
}
int Helicopter::get_craftID() {
    return craftID;
}
string Helicopter::get_name(){
    return name;
}
void Helicopter::fly(int headwind, int minutes){
    if (fuel>20)
    {
        if (headwind>=40&&weight>5670)
        {
            fuel=fuel-(0.4*minutes)-(0.01*(weight-5670)*minutes);
        }
        else if(headwind>40&&weight<5670){
            fuel=fuel-(0.4*minutes);
        }else if (headwind<40&&weight<5670){
            fuel=fuel-(0.2*minutes);
        }else if (headwind<40&&weight>5670){
            fuel=fuel-(0.2*minutes)-(0.01*(weight-5670)*minutes);
        }
        numberOfFlights++;
    }else{
        fuel=fuel;
        numberOfFlights=numberOfFlights;
    }
    
}
Helicopter::~Helicopter(){

}