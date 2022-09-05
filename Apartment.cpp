#include "Apartment.h"
#include "Unit.h"
using namespace std;

Apartment::Apartment() {
	max_capacity = 10;
	units_collection = new Unit[max_capacity];
}

Apartment::Apartment(int capacity) {
	max_capacity = capacity;
	units_collection = new Unit[max_capacity];
}


int Apartment::get_capacity() {
	return max_capacity;
}

int Apartment::get_current_number_of_units() {
	return current_number;
}
	
Unit* Apartment::get_contents() {
	return units_collection;
}

bool Apartment::add_unit(Unit unit) {
	if (current_number==max_capacity) {
		return false;
	}
	units_collection[current_number] = unit;
	current_number++;
	return true;
}

Apartment::~Apartment() {
	delete[] units_collection;
}
