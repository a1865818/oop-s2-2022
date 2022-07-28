#include <iostream>
using namespace std;
extern int min_element(int array[], int n);
int main() {
  int a[5] = {2, 3, 4, 5, 2};
  int n = 5;
  cout << min_element(a, n) << endl;
}