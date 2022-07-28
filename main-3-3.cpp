#include<iostream>
extern double weighted_average(int arr[], int size);
using namespace std;
int main() {
  int arr[] = {1, 2, 1, 4, 1, 3};
  cout << weighted_average(arr, 6) << endl;
  return 0;
}