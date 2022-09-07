#include<iostream>
#include "Cage.h"
using namespace std;
int main () {
    Cage *a ,*b;
    a=new Cage();
    b=new Cage("ABC",10);
    cout<<a->get_name()<<endl;
    cout<<a->get_IDnum()<<endl;
    cout<<b->get_name()<<endl;
    cout<<b->get_IDnum()<<endl;
    return 0;
}