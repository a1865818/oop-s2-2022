#include<iostream>
#include "Unit.h"
#include "Apartment.h"
#include<string>
using namespace std;

int main() {
	Unit *prospect, *kilburn , *lightsview ;
	prospect = new Unit();
	kilburn = new Unit(3,120,270000);
	lightsview = new Unit(2,50,300);
	
	Apartment *adel;
	adel = new Apartment(2);
	
	cout << adel->get_capacity() << endl;
	cout << adel->get_current_number_of_units() << endl;
	
	string msg;
	msg = adel->add_unit(*lightsview)?"successful":"full!" ;
	cout << msg << endl;
	msg = adel->add_unit(*kilburn)?"successful":"full!" ;
	cout << msg << endl;
	msg = adel->add_unit(*prospect)?"successful":"full!" ;
	cout << msg << endl;
	
	cout << adel->get_current_number_of_units() << endl;
	
	Unit *units = adel->get_contents();
	cout << "Prich for each unit: " << endl;
	for (int i=0;i<adel->current_number;i++) {
		cout << units[i].get_value() << endl;
	}
	
	delete adel;
	return 0;
}

