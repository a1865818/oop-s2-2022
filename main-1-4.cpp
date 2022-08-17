#include <string>
#include <iostream>
using namespace std;
extern void copy_doubles(double *old_array,double *new_array,int length) ;
int main() {
    double arr1[]={10,20,30,40,50};
    double arr2[5];
    copy_doubles(arr1,arr2,5);
    return 0;
}