#include<string>
#include<iostream>
using namespace std;
extern int max_sub_sum(int *nums,int length) ;
int main () {
    int old_array[10] = { 31,-41,59,26,-53,58,97,-93,-23,-84 };
    int *ptr = &old_array[0];
cout  << max_sub_sum(ptr, 10) ;
return 0;
}