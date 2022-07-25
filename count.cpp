#include <iostream>
// Sums together all positive numbers and returns them
int count(int array[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] > 0 && array[i]%2==0) {
            count += 1;
        }
    }

    return count;
}