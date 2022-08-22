#include<iostream>
#include "function-4-1.h"

// implementation of a BusCounter constructor taking cap
BusCounter::BusCounter(int cap)
{
	bus_count=0;
	capacity=cap;
}

// implementation of the BusCounter bus_count function
int BusCounter::get_count()
{
	return bus_count;	
}

// implementation of the BusCounter board function
void BusCounter::board() 
{
	if (bus_count<capacity) {
		bus_count++;
	}
}

// implementation of the BusCounter exit function
void BusCounter::exit() 
{
	if (bus_count>0) {
		bus_count--;
	}
}

