#include<iostream>
#include"Capybara.h"
using namespace std;
Capybara::Capybara() {
    this->_name=" ";
    this->_age=0;
}
string Capybara::getName() {
    return this->_name;
}
void Capybara::setName(string capyName) {
    this->_name=capyName;
}
int Capybara::getAge() {
    return this->_age;
}
void Capybara::setAge(int capyAge) {
    this->_age=capyAge;
}

