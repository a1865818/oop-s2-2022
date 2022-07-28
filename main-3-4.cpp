#include <iostream>
using namespace std;
extern int print_pass_fail(char grade);
int main() {
  char a = 'B';
  print_pass_fail(a);
  return 0;
}