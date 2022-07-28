#include <iostream>
using namespace std;
extern int two_five_nine(int array[], int n);
int main() {
  int a[5] = {2, 3, 4, 5, 2};
  int n = 5;
  two_five_nine(a, n);
  return 0;
}