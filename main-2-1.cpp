#include "MemberOfParliament.h"
#include "Minister.h"
#include<iostream>
#include<string>
int main() {
	Minister *min1,*min2;
	min1 = new Minister("sc");
	min2 = new Minister("alb");
	cout << min1->get_memberID() << " " << min2->get_memberID() << endl;
	
	return 0;
}



