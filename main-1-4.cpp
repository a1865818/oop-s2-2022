#include <iostream>
using namespace std;
extern int sum_two_arrays(int array[], int secondarray[], int n);
int main() {
  int a[5] = {2, 3, 4, 5, 2};
  int n = 5;
  cout << sum_two_arrays(a, a, 5) << endl;
}