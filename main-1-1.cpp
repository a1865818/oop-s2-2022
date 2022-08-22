#include <iostream>
extern int *readNumbers();
extern void printNumbers(int *numbers, int length);
int main() {
  int n;

 
  std::cin >> n;

  int *array = readNumbers();

  

  printNumbers(array, n);

  delete array;

  return 0;
}