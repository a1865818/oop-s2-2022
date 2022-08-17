#include <string>
#include <iostream>
using namespace std;
 void copy_integers(int old_array[],int new_array[],int length) {
    int *oldA = old_array;
    int *newA = new_array;
    for (int i = 0; i < length; i++)
    {
        *(newA+i)=*(oldA+i);
    }
    for (int i = 0; i < length; i++)
    {
        
        if (i<length-1)
        {
            cout<<*(newA+i)<<" ";
        }
        else {
            cout<<*(newA+i)<<endl;
        }
   }

 }