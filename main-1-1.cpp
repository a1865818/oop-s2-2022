#include <iostream>
using namespace std;
extern int array_sum(int array[], int n);
int main() {
  int a[5] = {2, 3, 4, 5, 2};
  int n = 5;
  cout << array_sum(a, n) << endl;
}