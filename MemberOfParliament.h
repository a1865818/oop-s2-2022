#ifndef MEMBEROFPARLIAMENT_H
#define MEMBEROFPARLIAMENT_H
#include<iostream>
#include<string>
using namespace std;
class MemberOfParliament {
	protected:
		string name;              // the name of the MemberOfParliament
 		string position;          // the position of the MemberOfParliament
 		int yearsService;         // the years of service in MemberOfParliament; takes only non-negative values
 	public:
 		MemberOfParliament();
		MemberOfParliament(string n, string p, int l) ;  // creates the parliament member name n, their position in parliament p, and number of years in service l
		void set_name(string name);
		void set_position(string position);
		void set_yearsService(int years);
		string get_name();
		string get_position();
		int get_yearsService();
		virtual bool isElectionYear()=0;
		~MemberOfParliament();
};

#endif
