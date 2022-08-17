#include <iostream>
#include <string>
using namespace std;
void copy_integers(int old_array[], int new_array[], int length) {
  int* ptra = &old_array[0];
  int* ptrb = &new_array[0];
  for (int i = 0; i < length; i++) {
    *ptrb = *ptra;  
    ptrb++;         
    ptra++;         
  }
}