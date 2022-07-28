#include <iostream>
using namespace std;
extern bool is_ascending(int array[], int n);
int main() {
  int a[5] = {2, 3, 4, 5, 6};
  int n = 5;
  cout << is_ascending(a, n) << endl;
  return 0;
}