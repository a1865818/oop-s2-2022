#include <iostream>
#include <math.h>
 bool is_ascending(int array[], int n){
    if (n < 1)
    {
       return false;
    }
    for (int i = 1; i < n; i++)
    {
        if (array[i-1] > array[i])
        {
            return false;
        }
    }
    
    return true;

 }