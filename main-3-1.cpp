#include <iostream>
using namespace std;
extern bool equalsArray(int *numbers1, int *numbers2, int length);
extern void readNumbers(int *arr, int length);
int main() {
  int length;
  cout << "Enter the length value : ";
  cin >> length;

  if (length != 0) cout << "\nEnter " << length << " values for array 1 : ";

  int *arr1 = new int[length];
  readNumbers(arr1, length);

  if (length != 0) cout << "\nEnter " << length << " values for array 2 : ";

  int *arr2 = new int[length];
  readNumbers(arr2, length);

  bool result = equalsArray(arr1, arr2, length);

  delete (arr1);
  delete (arr2);

  cout << boolalpha << "\nResult = " << result << "\n";
}