#include "MemberOfParliament.h"
#include "Minister.h"
#include "Speaker.h"
#include "Parliament.h"
#include<iostream>
#include<string>
using namespace std;

Parliament::Parliament() {
	parMems = new MemberOfParliament*[5];
	parMems[0]=new Speaker("Speaker1");
	parMems[1]=new Minister("Anne") ;
	parMems[2]=new Minister("Lee");
	parMems[3]=new Minister("James");
	parMems[4]=new Speaker("Speaker2");
}
MemberOfParliament** Parliament::get_members() {
	return parMems;
}
