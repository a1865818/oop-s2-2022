#include <iostream>
int sum_two_arrays(int array[], int secondarray[], int n) {
  if (n < 1) {
    return 0;
  }
  int result = 0;
  for (int i = 0; i < n; i++) {
    result = result + array[i];
    result = result + secondarray[i];
  }

  return result;
}