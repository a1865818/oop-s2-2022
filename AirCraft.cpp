#include "AirCraft.h"

AirCraft::AirCraft(){

}

AirCraft::AirCraft(int w){
    weight = w;
}

int AirCraft::get_weight(){
    return weight;
}

void AirCraft::set_weight(int w){
    weight = w;
}

float AirCraft::get_fuel(){
    return fuel;
}

void AirCraft::set_fuel(float f){
    fuel = f;
}

int AirCraft::get_numberOfFlights(){
    return numberOfFlights;
}

void AirCraft::set_numberOfFlights(int n){
    numberOfFlights = n;
}

void AirCraft::refuel(){
    fuel = 100;
}

AirCraft::~AirCraft(){}