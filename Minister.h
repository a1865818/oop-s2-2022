#ifndef MINISTER_H
#define MINISTER_H
#include "MemberOfParliament.h"
#include<iostream>
#include<string>

using namespace std;

class Minister : public MemberOfParliament {
	private:
		static int voterID;
	protected:
		int memberID;            // unique id for the member
		string state;  // state or territory member represents          
	public:
		Minister();
		Minister(string n) ;      // Constructor with name parameter n
        void set_memberID(int id);
		void set_state(string state);
		void set_voterID(int id);
		int get_memberID();
		string get_state();
		int get_voterID();
		bool isElectionYear();
		~Minister();

};

#endif
