#include<iostream>
#include"Person.h"
using namespace std;
Person::Person(int mySalary, string myName ) {
    this->_name=myName;
    this->_salary=mySalary;
}
Person::Person()
{

}

void Person::setName(string myName){
    this->_name=myName;
}
string Person::getName() {
    return this->_name;
}
void Person::setSalary(int mySalary){
    this->_salary=mySalary;
}
int Person::getSalary() {
    return this->_salary;
}