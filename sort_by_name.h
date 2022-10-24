#ifndef SORT_BY_NAME_H
#define SORT_BY_NAME_H
#include<iostream>
#include"animal.h"
using namespace std;
class sort_by_name{
    public:
        static void sort(animal **animals,int n);
};
#endif