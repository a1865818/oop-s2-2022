#include <iostream>
using namespace std;
int *matrix_min_max(int **vals, int rows, int columns) {
  int *matrix_result = new int[2];
  
  int min = vals[0][0];
  int max = vals[0][0];
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      if (vals[i][j] >= max)
        max = vals[i][j];
      else if (vals[i][j] <= min)
        min = vals[i][j];
    }
  }
  for (int i = 0; i < 2; i++)
  {
    matrix_result[i]=min;
    if (i=1)
    {
      matrix_result[i]=max;
    }
    
  }
  
  cout << *matrix_result << endl;
  cout << *(matrix_result+1 )<< endl;
  
  return 0;
}