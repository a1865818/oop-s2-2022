#include<string.h>
#include<string>
#include<iostream>


using namespace std;

extern void multiples_of_seven(int *nums, int length);

int main()
{
int old_array[5] = { 7,14,3,28,5 };
int *ptr = &old_array[0];

multiples_of_seven(ptr, 5);


return 0;
}