#include <iostream>
using namespace std;

double weightedAverage(int arr[], int size) {
  double sum = 0;
  int count;
  for (int i = 0; i < size; i++) {
    count = 0;
    for (int j = 0; j < size; j++) {
      if (arr[i] == arr[j]) {
        count++;
      }
    }
    sum += ((1.0 * arr[i] * count) / size);
  }
  return sum;
}
