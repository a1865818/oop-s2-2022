#include<iostream>
#include"Capybara.h"
using namespace std;
int main () {
    Capybara c1,c2,c3,c4;
    c1.setName("An");
    c1.setAge(18);
    c2.setName("B");
    c2.setAge(19);
    c3.setName("Bee");
    c3.setAge(20);
    c4.setName("Ba");
    c4.setAge(17);
    cout<<c1.getName()<<" "<<c1.getAge()<<endl;
    cout<<c2.getName()<<" "<<c2.getAge()<<endl;
    cout<<c3.getName()<<" "<<c3.getAge()<<endl;
    cout<<c4.getName()<<" "<<c4.getAge()<<endl;
    return 0;
}