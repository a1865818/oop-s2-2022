#include<iostream>
#include "Musician.h"
using namespace std;
int main () {
    Musician *a ,*b;
    a = new Musician();
    b= new Musician("violin",10);
    cout<<a->get_experience()<<endl;
    cout<<a->get_instrument()<<endl;
    cout<<b->get_experience()<<endl;
    cout<<b->get_instrument()<<endl;
    return 0;
}