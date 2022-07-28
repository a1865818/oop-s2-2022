#include <iostream>
using namespace std;
extern int num_count(int array[], int n, int number);
int main() {
  int a[5] = {2, 3, 4, 5, 2};
  int n = 5;
  cout << num_count(a, n, 2) << endl;
}