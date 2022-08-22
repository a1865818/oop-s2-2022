#include<iostream>
using namespace std;
 int *shift_left(int *vals, int len, int amount){
   int i=0;
    int *new_vals=new int[len];
    for (int i = 0; i < len; i++)
    {
        new_vals[i] = 0;
    }
    for (int k =amount-1; k >=0; k--)
    {
        
        new_vals[i] = vals[amount+i];
        i++;
    }
    
    return new_vals;
    
    
 } 

