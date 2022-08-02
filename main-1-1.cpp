#include <iostream>
using namespace std;
extern int sum_diagonal(int array[4][4]);
int main () {
    int a[4][4] = {{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
    cout<<sum_diagonal(a)<<endl;
    return 0;
}