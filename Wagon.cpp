#include "Wagon.h"
#include <iostream>
#include <string>

using namespace std;
Wagon::Wagon() { _counts = 0; }
bool Wagon::addCapybara(Capybara newCapy) {
  if (_counts >=4) {
    return false;
  } 
    this->c[_counts]= newCapy;
  _counts++;
  return true;
}
void Wagon::emptyWagon() {
  _counts=0;
}
void Wagon::printCapybaras() {
  for (int i = 0; i < _counts; i++) {
    cout << c[i].getName() << " " << c[i].getAge() << endl;
  }
}
