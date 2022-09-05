#include<iostream>
#include "Unit.h"

using namespace std;

int main() {
	Unit *prospect, *kilburn ;
	prospect = new Unit();
	kilburn = new Unit(3,100,500);
	
	cout << prospect->get_bedrooms() << endl;
	cout << prospect->get_value() << endl;
	cout << prospect->get_area() << endl;
	
	cout << kilburn->get_bedrooms() << endl;
	cout << kilburn->get_value() << endl;
	cout << kilburn->get_area() << endl;
	
	return 0;
}
