#include"Helicopter.h"
#include"AirCraft.h"
#include<iostream>
#include<string>
#include"Airplane.h"
using namespace std;
Airplane::Airplane() {

}
Airplane::Airplane(int w,int p){
    weight=w;
    numPassengers=p;
}
void Airplane::reducePassengers(int x){
    if (numPassengers < 0)
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
     float FuelUsed = 0;
    if(headwind >= 60){
        FuelUsed = 0.5 * minutes;
    }
    if(headwind < 60){
        FuelUsed = 0.3 * minutes;
    }
    if(numPassengers > 0){
        FuelUsed = FuelUsed + (minutes*numPassengers * 0.001);
    }

    if (fuel < 20 ){
    }
    
    if(fuel - FuelUsed > 0){
        fuel = fuel - FuelUsed;
        numberOfFlights++;
    }
}
Airplane::~Airplane() {

}