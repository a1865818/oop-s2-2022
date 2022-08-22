#include <iostream>
extern int *readNumbers(int n);
extern void printNumbers(int *numbers, int length);
int main() {
  int n;

 
  std::cin >> n;

  int *array = readNumbers(n);

  

  printNumbers(array, n);

  delete array;

  return 0;
}