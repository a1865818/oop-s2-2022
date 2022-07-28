#include<iostream>
int max_element(int array[], int n){
    int temp = array [0];
    if (n<1)
    {
        return 0;
    }
    
    for (int i = 0; i < n; i++)
    {
       if (temp < array[i])
       {
         temp = array[i];
       }
      
    }
     return temp;
}