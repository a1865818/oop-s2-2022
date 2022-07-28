#include <math.h>

#include <iostream>
using namespace std;
int median_array(int array[], int n) {
    if (n < 1 || n % 2 == 0){
        return 0;
    }
  int i = 0;
  int j = n;
  int k = 0;
  int x = 0;
  int num = 0;
  int sortedarray[n];
  for (i = 0; i < n; i++) {
    sortedarray[i] = array[i];
  }
  for (k = j - 1; k > 0; k--) {
    for (x = 0; x < k; x++) {
      if (sortedarray[x] > sortedarray[x + 1]) {
        num = sortedarray[x];
        sortedarray[x] = sortedarray[x + 1];
        sortedarray[x + 1] = num;
      }
    }
  }
  int median = 0;
  if ((n % 2) != 0) {
    median = sortedarray[j / 2];
  }
  return median;
}