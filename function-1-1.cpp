#include <iostream>
using namespace std;

int array_sum(int array[], int n) {
  if (n < 1) {
    return 0;
  }
  int result = 0;
  for (int i = 0; i < n; i++) {
    result = result + array[i];
  }
  return result;
}