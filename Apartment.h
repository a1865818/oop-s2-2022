#ifndef APARTMENT_H
#define APARTMENT_H
#include "Unit.h"
 using namespace std;
 
 class Apartment {
 	public:
 		Apartment(); 
		Apartment(int capacity);  
		
		Unit *units_collection;
		int max_capacity;
		int current_number;
		
		int get_capacity(); 
		int get_current_number_of_units(); 
		Unit *get_contents();
		bool add_unit(Unit unit);
		~Apartment();
 	
 };
 
 #endif
