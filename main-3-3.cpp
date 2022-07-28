#include<iostream>
extern double weightedAverage(int arr[], int size);
using namespace std;
int main() {
  int arr[] = {1, 2, 1, 4, 1, 3};
  cout << weightedAverage(arr, 6) << endl;
  return 0;
}