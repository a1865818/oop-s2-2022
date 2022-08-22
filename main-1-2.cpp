#include<iostream>
using namespace std;
extern int lookup_fishing_fine(int over);
int main (){
    int over;
    over=0;
    cout << "my fishing fine is: " << lookup_fishing_fine(over) << endl;
    over=10;
    cout << "my fishing fine is: " << lookup_fishing_fine(over) << endl;

    over=21;
    cout << "my fishing fine is: " << lookup_fishing_fine(over) << endl;
    over=50;
    cout << "my fishing fine is: " << lookup_fishing_fine(over) << endl;
    return 0;
}
