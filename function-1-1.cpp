#include <iostream>
using namespace std;
int temp;
void print_ascending(int *vals, int len) {
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if (vals[i] > vals[j]) {
        temp = vals[i];
        vals[i] = vals[j];
        vals[j] = temp;
      }
    }
  }
  for (int i = 0; i < len; i++) {
    if (i < len - 1) {
      cout << vals[i] << " ";
    } else
      cout << vals[i];
  }
}