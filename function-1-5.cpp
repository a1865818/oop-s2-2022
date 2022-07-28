#include<iostream>
int count_evens(int number){
    int count = 0;
    int i;
    for (i = 1; i <= number; i++)
    {
        if (i % 2 == 0){
            count ++;
        }
    }
    return count;
}