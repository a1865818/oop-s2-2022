#include <iostream>

int *readNumbers(int n) {
  int *numbers = new int[n];

  for (int i = 0; i < n; i++) {
    std::cout << "Enter the number #" << i + 1 << ": ";
    std::cin >> numbers[i];
  }

  return numbers;
}

void printNumbers(int *numbers, int length) {
  for (int i = 0; i < length; i++) {
    std::cout << i << " " << numbers[i] << std::endl;
  }
}