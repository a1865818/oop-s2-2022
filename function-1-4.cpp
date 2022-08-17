#include <string>
#include <iostream>
using namespace std;
void copy_doubles(double *old_array,double *new_array,int length) {
   for (int i = 0; i < length; i++)
{
*(new_array + i) = *(old_array + i);
}

for (int i = 0; i < length; i++)
{
if (i<length-1)
{
    cout << *(new_array + i) << " ";
}else {
    cout << *(new_array + i) << endl;
}

}
}
    
