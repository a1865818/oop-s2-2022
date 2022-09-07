#include<string>
#include<iostream>
#include"Clinic.h"
using namespace std;
Clinic::Clinic():name(""),max_size(0),curr_size(0),members(NULL){}
Clinic::Clinic(string name, int max_size):name(name),max_size(max_size),curr_size(0){
    members=new Cage[max_size];
}
int Clinic::get_number_of_cages(){
    return curr_size;
}
string Clinic::get_name() {
    return name;
}
Cage* Clinic::get_cages(){
    return members;
}
bool Clinic::add_cage(Cage new_cage){
    if (curr_size < max_size)
  {
    members[curr_size] = new_cage;
    curr_size++;
    return true;
  }
  return false;
}
Clinic::~Clinic()
{
  if (members != NULL) delete[] members;
}
