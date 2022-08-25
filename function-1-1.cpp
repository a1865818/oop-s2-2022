

#include <iostream>
using namespace std;
void print_ascending (int *vals, int size) {
    int min = -1000000;
    for (int i = 0; i < size; i++) {
        if (*(vals+i) >= min) {
            cout << *(vals+i) << " ";
            min = *(vals + i);
        }
    }
    cout << endl;
}
