#include<iostream>
using namespace std;
extern void count_digits(int array[4][4]);
int main () {
    int numbers[4][4]={{1,2,1,3},{4,5,6,7},{1,8,8,0},{9,0,1,2}};
    count_digits(numbers);
    cout<<endl;
    return 0;
}