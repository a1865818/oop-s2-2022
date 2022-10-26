#include "MemberOfParliament.h"
#include "Minister.h"
#include "Speaker.h"
#include<iostream>
#include<string>
using namespace std;

Speaker::Speaker() {
	
}   
Speaker::Speaker(string p):Minister("Proxy") {
	set_position(p);
	speeches=0;
} 
void Speaker:: gaveSpeech() {
	speeches++;
}
int  Speaker::get_speeches() {
	return speeches;
}
Speaker::~Speaker() {
	
}     
