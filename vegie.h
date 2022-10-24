#ifndef VEGIE_H
#define VEGIE_H
#include"animal.h"
#include<string>
using namespace std;
class vegie:public animal{
    protected:
        string favourite_food;
        static int nextID;
    public:
        vegie(string n,int v);
        string getFavourite ();
        void setFavourite(string n);
        string get_name();
};
#endif