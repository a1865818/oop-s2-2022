#ifndef SPEAKER_H
#define SPEAKER_H
#include "MemberOfParliament.h"
#include "Minister.h"
#include<iostream>
#include<string>
using namespace std;
 
class Speaker : public Minister {
	private:
	int speeches;      // number of speeches given. initialised to 0.

	public:
	Speaker();       // inherit from base class default constructor
	Speaker(string p);  // setting position p calls the parent class constructor with name=="Proxy"
	void gaveSpeech(); // increment speeches by 1.
	int get_speeches(); // return value of speeches attribute
    ~Speaker();               

};

#endif
