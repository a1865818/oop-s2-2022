#include"vegie.h"
#include<iostream>
int vegie::nextID=100;
vegie::vegie(string n,int v):animal(n,v){
    favourite_food="grass";
    nextID++;
    animalID=nextID;
}
string vegie::getFavourite() {
    return favourite_food;
}
string vegie::get_name(){
    return "Safe"+name;
}
void vegie::setFavourite(string f){
    favourite_food=f;
}