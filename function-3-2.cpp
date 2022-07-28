#include<iostream>
#include<math.h>
using namespace std;
int median_array(int array[], int n){
    int i = 0;
    int j = n;
    int k = 0;
    int x = 0;
    int num = 0;
    int sort_array[n];
    for ( i = 0; i < n; i++)
    {
        sort_array[i] = array[i];   
    }
    for ( i = 0; i < n; i++)
    {
        if (sort_array[i] > sort_array[i+1]){
            num = sort_array[i];
            sort_array[i] = sort_array[i+1];
            sort_array[i+1] = num;
        }
    }
   int median = 0;
   if (n%2==0)
   {
    median =   ( sort_array[j/2] +sort_array[j/2 -1] ) /2;
   }
   else {
    median = sort_array[j/2];
   }
    return median;
}