#include<iostream>
#include "MusicBox.h"
using namespace std;
int main () {
    MusicBox *a ,*b;
    a=new MusicBox();
    b=new MusicBox("ABC",100);
    cout<<a->get_song()<<endl;
    cout<<a->get_width()<<endl;
    cout<<b->get_song()<<endl;
    cout<<b->get_width()<<endl;
    return 0;
}