#include "MemberOfParliament.h"
#include "Minister.h"
#include "Speaker.h"
#include "Parliament.h"
#include "MemberOfParliaments.h"
#include<iostream>
#include<string>
using namespace std;

void pr05_sort(int list[], int n)
{
    bool checkSort = false;

    while (!checkSort)
    {
        checkSort = true;

        for (int i=1; i<=n-2; i=i+2)
        {
            if (list[i] > list[i+1])
             {
                swap(list[i], list[i+1]);
                checkSort = false;
              }
        }

        for (int i=0; i<=n-2; i=i+2)
        {
            if (list[i] > list[i+1])
            {
                swap(list[i], list[i+1]);
                checkSort = false;
            }
        }
    }

    return;
}


int main () {
	Minister *m1,*m2,*m3,*m4,*m5;
	m1 = new Minister("a");
	m2 = new Minister("b");
	m3 = new Minister("c");
	m4 = new Minister("d");
	m5 = new Minister("e");
	Minister** mems;
	mems = new Minister*[5];
	mems[0]=m4;
	mems[1]=m2;
	mems[2]=m5;
	mems[3]=m1;
	mems[4]=m3;
	
	for (int i=0;i<5;i++) {
		cout << mems[i]->get_memberID() << " " ;
	}
	cout << endl;
	MemberOfParliaments *ago;
	ago->sort(mems,5);
	for (int i=0;i<5;i++) {
		cout << mems[i]->get_memberID() << " " ;
	}

	return 0;
}



