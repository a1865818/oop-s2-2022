#include<iostream>
using namespace std;
extern  int *shift_left(int *vals, int len, int amount);
int main () {
    int vals1[]={5,4,3,2,1,1};
    int *sv=shift_left(vals1,6,3);
      for (int i = 0; i < 6; i++){
        
        cout << sv[i] << " ";
    }
    cout<<endl;
    return 0;
}