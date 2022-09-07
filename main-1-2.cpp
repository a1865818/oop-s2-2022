#include<iostream>
#include<string>
#include"Clinic.h"
int main () {
  Cage *c1,*c2,*c3;
  c1=new Cage();
  c2=new Cage("a",3);
  c3=new Cage("b",4);
  Clinic *clinic;
  clinic=new Clinic("d",5);
  cout<<clinic->get_name()<<endl;
//   cout<<clinic->get_cages()<<endl;
  cout<<clinic->get_number_of_cages()<<endl;
  string _return;
  _return=clinic->add_cage(*c1)?"successful":"full!";
  cout<<_return<<endl;
  _return=clinic->add_cage(*c2)?"successful":"full!";
  cout<<_return<<endl;
  _return=clinic->add_cage(*c3)?"successful":"full!";
  cout<<_return<<endl;
  Cage *cages=clinic->get_cages();
  for (int i = 0; i < clinic->get_number_of_cages(); i++) 
  {
    cout<<cages[i].get_name()<<endl;
    cout<<cages[i].get_IDnum()<<endl;
  }
  delete clinic;
return 0;
}