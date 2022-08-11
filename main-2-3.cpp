#include <iostream>
using namespace std;
extern bool is_array_palindrome(int integers[], int length) ;
extern int palindrome_sum(int integers[], int length);
extern int sum_integers(int integers[], int length);
int main () {
    int array[5] ={1,2,3,2,0};
    int n = 5;
    cout<<is_array_palindrome(array,n)<<endl;
    cout<<palindrome_sum(array,n)<<endl;
    cout<<sum_integers(array,n)<<endl;
    return 0;
}