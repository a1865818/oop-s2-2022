#include <iostream>
using namespace std;
extern int bin_to_int(int binary_digits[], int number_of_digits);
int main() {
  int array[30] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1,};
  cout << bin_to_int(array, 13);
  cout << endl;
  return 0;
}