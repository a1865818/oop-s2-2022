#ifndef HUNTER_H
#define HUNTER_H
#include "animal.h"
#include<string>
using namespace std;
class hunter:public animal{
    private :
        int kills;
        static int nextID;
    public:
        hunter(string n, int v); 
        string get_name();
        int get_kill();
        void set_kill(int k);
};
#endif