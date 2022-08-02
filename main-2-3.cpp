#include <iostream>
using namespace std;
extern bool is_palindrome(int integers[], int length) ;
extern int sum_if_palindrome(int integers[], int length);
int main () {
    int array[5] ={1,2,3,2,1};
    int n = 5;
    cout<<is_palindrome(array,n)<<endl;
    cout<<sum_if_palindrome(array,n)<<endl;
    return 0;
}