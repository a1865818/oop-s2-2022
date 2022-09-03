#include"Airplane.h"
#include<iostream>
#include"Person.h"
using namespace std;
int main()
{
Person p1(50000,"John");
Person p2(45000,"Andrew");
Person p3(35000,"Cathy");
Airplane airplane("CAP34535",p1,p2);
cout<<"Displaying Aircraft Details :"<<endl;
airplane.printDetails();
cout<<"\n\n"<<endl;
airplane.setPilot(p3);
cout<<"Displaying Aircraft Details :"<<endl;
airplane.printDetails();
return 0;

}