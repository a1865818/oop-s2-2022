#include <iostream>
using namespace std;
void print_summed(int array1[3][3], int array2[3][3]) {
  int row1 = 3, row2 = 3, col1 = 3, col2 = 3;
  if (row1 == row2 && col1 == col2) {
    for (int i = 0; i < row1; i++) {
      for (int j = 0; j < col1; j++) {
        if (j == col1 - 1) {
          cout << (array1[i][j] + array2[i][j]) ;
        } else {
          cout << (array1[i][j] + array2[i][j]) << " ";
        }
      }
      cout << "\n";
    }

  } else {
    cout << "In-valid Sizes\n";
  }
}