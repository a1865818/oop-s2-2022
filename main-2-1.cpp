#include<iostream>
#include <string.h>
using namespace std;

extern float add_op(float left, float right);
extern float subtract_op(float left, float right);
extern float arithmetic_ops(float left, float right, std::string op);

int main()
{
float left,right;
std::string op;
cout<<"Enter the two numbers and the operation(add/subtract):";
cin>>left;
cin>>right;
cin>>op;
arithmetic_ops(left, right,op); //calling the function to perform arithmetic operation.
return 0;
}