#include <iostream>
using namespace std;
int count_numbers_in_range(int vals[], int length, int bottom, int top) {
    int res[length];
    int count =0 ;
    for (int i = bottom; i <= top; i++)
    {   
        int j=0;
        res[j]=i;
        j++;
        count ++;
       
    }
    
    return count;
}