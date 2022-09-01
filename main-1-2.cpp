#include <iostream>

#include "Person.h"
using namespace std;
int main() {
  Person p1(4399, "Harry");
  Person p2(5000, "Naomi");
  Person p3(3300, "Paolo");
  Person p4(4000, "Garry");
  p3.setName("Minh");
  p3.setSalary(6000);
  cout << p1.getName() << " " << p1.getSalary() << endl;
  cout << p2.getName() << " " << p2.getSalary() << endl;
  cout << p3.getName() << " " << p3.getSalary() << endl;
  cout << p4.getName() << " " << p4.getSalary() << endl;
  return 0;
}