#include <iostream>
using namespace std;
bool equalsArray(int *numbers1, int *numbers2, int length) {
  bool res = true;

  if (length < 1)
    res = false;
  else {
    for (int i = 0; i < length; i++) {
      if (numbers1[i] != numbers2[i]) {
        res = false;
        break;
      }
    }
  }
  return res;
}
void readNumbers(int *arr, int length) {
  for (int i = 0; i < length; i++) {
    int x;
    cin >> x;
    arr[i] = x;
  }
}