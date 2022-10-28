#include"Helicopter.h"
#include<iostream>
#include<string>
#include"AirCraft.h"
#include"Airplane.h"
using namespace std;
Airplane::Airplane(){

}
Airplane::Airplane(int w,int p){
    weight=w;
    numPassengers=p;
}
void Airplane::reducePassengers(int x){
    if (numPassengers<0)
    {
        numPassengers=0;
    }else{
        numPassengers=numPassengers-x;
    }
    
}
int Airplane::get_numPassengers(){
    return numPassengers;
}
void Airplane::fly(int headwind, int minutes){
    if (fuel<20)
    {   
        fuel=fuel;
        numberOfFlights=numberOfFlights;
       
    }else{
         if (headwind>=60)
        {
            fuel=fuel-(0.5*minutes)-(0.001*(numPassengers)*minutes);
        }
        else if (headwind<60){
            fuel=fuel-(0.3*minutes)-(0.001*(numPassengers)*minutes);
        }
        numberOfFlights++;
    }
}



Airplane::~Airplane(){

}