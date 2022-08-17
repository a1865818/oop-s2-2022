#include<string>
#include<iostream>

using namespace std;
int max_sub_sum(int *nums,int length) {
 int sum = 0;
int max_so_far = -1, max_ending_here = 0;

for (int i = 0; i < length-1; i++) {
sum = sum + *nums;;
if (max_so_far < sum)
max_so_far = sum;

if (sum < 0)
sum = 0;
nums++; // inc pointer
}
return max_so_far;
    
}
