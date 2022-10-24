#include"hunter.h"
int hunter::nextID=1000;
hunter::hunter(string n, int v):animal(n,v){
    kills=0;
    nextID++;
    animalID=nextID;
}
int hunter::get_kill(){
    return kills;
}
void hunter::set_kill(int k){
    kills=k;
}
string hunter::get_name(){
    return "hunter"+name;
}