#include"AirCraft.h"
#include<iostream>
#include<string>
AirCraft::AirCraft() {

}
AirCraft::AirCraft(int w) {
    weight=w;
}
void AirCraft::set_fuel(float f){
    fuel=f;
}
void AirCraft::set_numflight(int nflight){
    numberOfFlights=nflight;
}
void AirCraft::set_weight(int w){
    weight=w;
}
void AirCraft::refuel() {
    fuel=100;
}
float AirCraft::get_fuel(){
    return fuel;
}
int AirCraft::get_numflight() {
    return numberOfFlights;
}
int AirCraft::get_weight(){
    return weight;
}
AirCraft::~AirCraft() {
    
}