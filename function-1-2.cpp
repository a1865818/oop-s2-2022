#include<iostream>
using namespace std;
int lookup_fishing_fine(int over) {
    int fine;
    if (over <= 0)
    {
        fine = 0;
        
    }else if (0<over&&over<10)
    {
        fine = 180;
        
    }else if (10<=over&&over<20)
    {
        fine = 406;
        
    }else if (20<=over&&over<30)
    {
        fine = 825;
        
    }else if (30<=over&&over<45)
    {
        fine = 1500;
        
    }else if (over>=45)
    {
        fine = 1690;
        
    }
    return fine;
    
}