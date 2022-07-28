#include <iostream>
double array_mean(int array[], int n) {
  if (n < 1) {
    return 0;
  }
  int result = 0;
  for (int i = 0; i < n; i++) {
    result = result + array[i];
  }
  return result * 1.0 / n;
}