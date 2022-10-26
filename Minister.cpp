#include "MemberOfParliament.h"
#include "Minister.h"
#include <iostream>
#include<string>
using namespace std;

Minister::Minister() {
	
}

int Minister::voterID=0;

Minister::Minister(string n):MemberOfParliament(n,"Minister",10) {
	memberID=voterID;
	voterID++;
} 

void Minister::set_memberID(int id) {
	memberID=id;
}
void Minister::set_state(string st) {
	state = st;
}
void Minister::set_voterID(int id) {
	voterID=id;
}
int Minister::get_memberID() {
	return memberID;
}
string Minister::get_state() { 
	return state;
}
int Minister::get_voterID() {
	return voterID;
}
bool Minister::isElectionYear() {
	if (get_yearsService()>4) {
		return true;
	} else {
		return false;
	}
}
Minister::~Minister() {
	
}
