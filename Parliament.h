#ifndef PARLIAMENT_H
#define PARLIAMENT_H
#include "MemberOfParliament.h"
#include "Minister.h"
#include "Speaker.h"
#include<iostream>
#include<string>
using namespace std;
 
class Parliament {
	private:
		MemberOfParliament** parMems;          

	public:
		Parliament();        
		MemberOfParliament **get_members() ;
                                     
};

#endif
