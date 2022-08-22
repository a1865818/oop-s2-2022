#include <iostream>
using namespace std;
extern int count_numbers_in_range(int vals[], int length, int bottom, int top);
int main() {
    int vals[]={1,7,3,4,6,5,2};
 int res=count_numbers_in_range(vals,7,3,6);
 cout<<res<<endl;
 return 0;
}