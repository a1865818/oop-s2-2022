#include <iostream>
using namespace std;
bool is_array_palindrome(int integers[], int length) {
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
int sum_integers(int integers[], int length) {
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + integers[i];
    }
    return sum;
}

int palindrome_sum(int integers[], int length) {
    int sum = 0;
    if (length < 1)
    {
        return -1;
    }
    
    if (is_array_palindrome(integers,length) == true)
    {
        return sum_integers(integers,length);
    }
    else {
        return -2;
    }
    

}