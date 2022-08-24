#include <iostream>
#include <string>
using namespace std;
extern string month_lookup(int month);
int main () {
    cout<<month_lookup(12);
    return 0;
}