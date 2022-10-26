#include "MemberOfParliament.h"
#include "Minister.h"
#include "Speaker.h"
#include "Parliament.h"
#include<iostream>
#include<string>
using namespace std;
int main () {
	Parliament *par;
	par = new Parliament();
	MemberOfParliament** mems;
	mems = par->get_members();
	for (int i=0;i<5;i++) {
		cout << mems[i]->get_name() << endl;
	}
	return 0;
}


