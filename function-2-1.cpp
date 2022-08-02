#include<iostream>
#include <string>
#include <stdlib.h>
using namespace std;
void print_binary_str(std::string decimal_number) {
    int base_10 = stoi(decimal_number) ;
    int i = 0;
    int base_2[50];
    while (base_10 > 0)
    {
        base_2[i++] = base_10 % 2;
        base_10 = base_10 / 2;
    }
    for (int j = i-1 ; j >= 0; j--)
    {
        cout<<base_2[j];
    }
    cout<<endl;
    

}