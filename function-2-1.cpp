#include <iostream>
using namespace std;

void hexDigits(int *numbers,int length)
{
for(int i=0;i<length;i++) 
{
cout << i << " " << numbers[i] << " "; 

if(numbers[i]>=0 and numbers[i]<=9)
cout << numbers[i];
else
{
switch(numbers[i])
{
case 10:
cout << "A";
break;
case 11:
cout << "B";
break;
case 12:
cout << "C";
break;
case 13:
cout << "D";
break;
case 14:
cout << "E";
break;
case 15:
cout << "F";
break;
}
}
cout << endl;
}
}