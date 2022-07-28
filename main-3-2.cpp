#include <iostream>
extern int median_array(int array[], int n);
int main() {
  int array[5] = {5, 3, 3, 8, 9};
  std::cout << median_array(array, 5) << std::endl;
}