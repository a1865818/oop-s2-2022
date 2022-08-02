#include <iostream>
using namespace std;
int array_max(int integers[], int length) {
    int temp = integers[0];
    for (int i = 0; i < length; i++)
    {
        if (temp < integers[i])
        {
           temp = integers[i];
        }
        
    }
    return temp;
}
int array_min(int integers[], int length) {
    int temp = integers[0];
    for (int i = 0; i < length; i++)
    {
        if (temp > integers[i])
        {
           temp = integers[i];
        }
        
    }
    return temp;
}
int sum_min_max(int integers[], int length) {
    int sum = 0;
    int max = array_max( integers, length);
    int min = array_min( integers, length);
    sum = sum + max + min;
    return sum;
}