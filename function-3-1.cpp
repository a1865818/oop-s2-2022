#include<iostream>
using namespace std;
int next_match_count (int vals[],int vals_length) {
    int count=0;
    for (int i = 0; i < vals_length-1; i++)
    {   
       if (vals[i]==vals[i+1])
       {
       count++;
       }
    }
    return count;
}