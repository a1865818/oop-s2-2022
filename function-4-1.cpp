#include <iostream>
using namespace std;
int *matrix_min_max(int **vals, int num_rows, int num_cols) {
  int *mm = new int[2];
  
  int min = vals[0][0];
  int max = vals[0][0];
  for (int i = 0; i < num_rows; i++) {
    for (int j = 0; j < num_cols; j++) {
      if (vals[i][j] >= max)
        max = vals[i][j];
      else if (vals[i][j] <= min)
        min = vals[i][j];
    }
  }
  for (int i = 0; i < 2; i++)
  {
    mm[i]=min;
    if (i=1)
    {
      mm[i]=max;
    }
    
  }
  
  cout << *mm << endl;
  cout << *(mm+1 )<< endl;
  
  return 0;
}