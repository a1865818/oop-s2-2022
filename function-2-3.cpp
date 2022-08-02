#include <iostream>
using namespace std;
bool is_palindrome(int integers[], int length) {
    int i = 0 ;
    int j = length-1;
    while (i < j) {
        if (integers[i] != integers[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int sum_if_palindrome(int integers[], int length) {
    int sum = 0;
    if (length < 1)
    {
        return -1;
    }
    
    for (int i = 0; i < length; i++)
    {
        sum = sum + integers[i];
    }
    return sum;

}