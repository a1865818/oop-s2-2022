#ifndef PERSON
#define PERSON
#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
        string _name;
        int _salary;
    public:
    Person();
        Person(int mySalary, string myName);
        string getName();
        void setName(string myName);
        int getSalary();
        void setSalary(int mySalary);
};
#endif