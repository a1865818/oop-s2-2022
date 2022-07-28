#include <iostream>
using namespace std;
extern double sum_even(int array[], int n);
int main() {
  int a[5] = {2, 3, 4, 5, 2};
  int n = 5;
  cout << sum_even(a, n) << endl;
  return 0;
}