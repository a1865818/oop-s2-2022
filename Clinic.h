#ifndef CLINIC_H
#define CLINIC_H
#include"Cage.h"
#include<string>
using namespace std;
class Clinic{
    private:
        int max_size;
        string name;
        int curr_size;
        Cage *members;
    public:
        Clinic();
        Clinic(string name, int max_size);
        int get_number_of_cages();
        string get_name();
        Cage *get_cages();
        bool add_cage(Cage new_cage);
        ~Clinic();
};
#endif