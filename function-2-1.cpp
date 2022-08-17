#include <iostream>
#include <string>
using namespace std;
void multiples_of_seven(int *nums, int length) {
  int i = 0;

  for (; i < length; i++) {
    if (*(nums + i) % 7 == 0) {
      cout << *(nums + i) << endl;
    }
  }
}