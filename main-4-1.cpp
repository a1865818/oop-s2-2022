#include <iostream>
extern int *readNumbers();
extern int secondSmallestSum(int *numbers, int length);

int main()

{

int* a;

a = readNumbers();

int secondsmall = secondSmallestSum(a, 10);

std::cout<<"Second smallest sum: "<<secondsmall<<std::endl;

}