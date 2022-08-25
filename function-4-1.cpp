#include <iostream>
#include <stdlib.h>

using namespace std;
int* matrix_min_max(int **vals, int row, int col){
    int min = **vals;
    int max = **vals;
    int *ret = new int(2);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j ++) {
            if (min > *(*(vals+i)+j)) {
                min = *(*(vals+i)+j);
            } else if (max < *(*(vals+i)+j)) {
                max = *(*(vals+i)+j);
            }
        }   
    }
    *ret = min;
    *(ret+1) = max;
    return ret;
}