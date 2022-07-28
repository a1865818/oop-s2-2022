#include <iostream>
using namespace std;
extern bool is_descending(int array[], int n);
int main() {
  int a[5] = {2, 3, 4, 5, 6};
  int n = 5;
  cout << is_descending(a, n) << endl;
  return 0;
}