#include <iostream>
#include "Wagon.h"
using namespace std;
int main() {
  Capybara c[5];
  c[0].setName("Peter");
  c[0].setAge(18);
  c[1].setName("Harry");
  c[1].setAge(19);
  c[2].setName("Jenny");
  c[2].setAge(20);
  c[3].setName("B");
  c[3].setAge(22);
  c[4].setName("An");
  c[4].setAge(25);
 Wagon test_Wagon;
 for (int i = 0; i <= 4; i++)
 {
  if (test_Wagon.addCapybara(c[i]))
  {
    cout<<"Capybara added successfully.";
  }
  else{
    cout<<"Full. Cannot add Capybara now";
  }
  cout<<endl;
 }
return 0;
}
