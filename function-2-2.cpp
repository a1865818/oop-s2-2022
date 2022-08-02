#include <iostream>
using namespace std;
int binary_to_int(int binary_digits[], int number_of_digits) {
    int base_10_number = 0;
    int base = 1;
    int i = number_of_digits -1;
    while (i >= 0)
    {
        base_10_number = base_10_number + binary_digits[i]*base;
        base = base * 2;
        i--;
    }
    return base_10_number;
   

}