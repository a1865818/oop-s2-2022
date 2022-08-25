#include<iostream>
using namespace std;
extern int next_match_count (int vals[],int vals_length);
int main() {
    int array[] = {1,2,2,2,3,1,1,5,2,2};
    int size = sizeof(array)/sizeof(int);
    // cout<<next_match_count(array,size);
    // cout<<endl;
    int res=next_match_count(array,size);
    cout<<res<<endl;
    return 0;
}