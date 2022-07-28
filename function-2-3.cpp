#include <iostream>
using namespace std;
void two_five_nine(int array[], int n) {
  int count_two = 0, count_five = 0, count_nine = 0;
  int i = 0;
  while (i < n) {
    
    switch (array[i]) {

      case 2:
        count_two++;
        break;
      case 5:
        count_five++;
        break;
      case 9:
        count_nine++;
        break;
      default:
        break;
    }
    i++;
  }
  cout << "2:" << count_two << ";";
  cout << "5:" << count_five << ";";
  cout << "9:" << count_nine << ";"<<endl;
}