#ifndef CAPYBARA_H
#define CAPYBARA_H
#include<iostream>
#include<string>
using namespace std;
class Capybara {
    private:
        string _name;
        int _age;
    public:
        Capybara();
        string getName();
        void setName(string capyName);
        int getAge();
        void setAge(int capyAge);  
        
};
#endif