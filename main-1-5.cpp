#include <iostream>
using namespace std;
extern int count_evens(int n);
int main() {
  int n = 5;
  cout << count_evens(n) << endl;
}