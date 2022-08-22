#include <iostream>
extern int *readNumbers(int n);
extern void printNumbers(int *numbers, int length);
int main() {
  int n;

  std::cout << "Enter the size of array: ";
  std::cin >> n;

  int *array = readNumbers(n);

  std::cout << "The elements of array:" << std::endl;

  printNumbers(array, n);

  delete array;

  return 0;
}