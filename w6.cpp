#include<iostream>
#include<string>
using namespace std;
class A {
    protected:
        int _s;
    public: 
        A(int s):_s(s){}
        A():A(-1){}
        virtual void print() {
        cout<<"S = "<<this->_s<<endl;
       }

};
class B:public A{
    private:
        double _k;
    public: 
        B(int s,double k):A(s),_k(k){}
        B():B(0,0){}
        void print() {
             cout<<"S = "<<this->_s<<" K = "<<this->_k <<endl;
        }
};
int main() {
    // B b1(500,0.25865);
    // b1.A::print();

    A *a1;
    B b1(500,0.25865);
    //a pointer to a base class can point at an object from a derived class
    a1=&b1;
    a1->print();
    return 0;
}