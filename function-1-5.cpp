#include<iostream>
int count_evens(int number){
    int result = 0;
    int i;
    for (i = 0; i <= number; i++)
    {
        if (i % 2 == 0){
            result = result + i;
        }
    }
    return result;
}