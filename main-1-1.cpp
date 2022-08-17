#include <string>
#include <iostream>
using namespace std;
extern void string_2d_copy(string first[][2], string second[][2], int n);
int main() {
    string first_string[3][2] = {{"sam","robert"},{"george", "jose"},{"mark","philipot"}};
    string second_string[3][2];
    string_2d_copy( first_string,second_string,3);
    return 0;
}