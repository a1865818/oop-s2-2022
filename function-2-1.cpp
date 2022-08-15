#include <iostream>

using namespace std;
#include <stdio.h>
float add_op(float left, float right)
{
float sum;
sum=left+right;
return sum;
}

float subtract_op(float left, float right)
{
float result;
result=left-right;
return result;

}

float arithmetic_ops(float left, float right, std::string op)
{
float sum,result;
if(op=="add")
{
sum=add_op(left,right); //call function if operation is add
cout<<sum<<endl;;
}
else if(op=="subtract")
{
result=subtract_op(left, right); //call function if operation is subtract
cout<<result<<endl;
}
return 0;
}