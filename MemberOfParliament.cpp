#include "MemberOfParliament.h"
#include<iostream>
#include<string>
using namespace std;
MemberOfParliament::MemberOfParliament() {

}

MemberOfParliament::MemberOfParliament(string n,string p, int l) {
	name =n;
	position=p;
	yearsService = l;
}

void MemberOfParliament::set_name(string n){
	name=n;
}
void MemberOfParliament::set_position(string p) {
	position =p;
}
void MemberOfParliament::set_yearsService(int years) {
	yearsService=years;
}
string MemberOfParliament::get_name()  {
	return name;
}
string MemberOfParliament::get_position() {
	return position;
}
int MemberOfParliament::get_yearsService() {
	return yearsService;
}
		
MemberOfParliament::~MemberOfParliament() {
	
}
