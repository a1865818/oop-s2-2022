#ifndef UNIT_H
#define UNIT_H

using namespace std;

class Unit
{
	public:
		Unit();
		Unit(int, double, int);
		
		int bedrooms;
		int value;
		double area;
		
		int get_bedrooms();
		int get_value();
		double get_area();
	
};

#endif
