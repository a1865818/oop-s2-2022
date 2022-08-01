#include<iostream>
using namespace std;
void base_10_to_2 (int base_10_num){
    int base_2[50];
    int i = 0;
    int j;
    while (base_10_num > 0)
    {
        base_2[i++] = base_10_num % 2;
        base_10_num = base_10_num / 2;
    }
    for ( j = i-1; j >= 0; j--)
    {
        cout<<base_2[j];
    }
    cout<<endl;
}

int main () {
    int num;
    cout<<"Enter a base 10 number to convert: ";
    cin>>num;
    base_10_to_2(num);
    return 0 ;
}

