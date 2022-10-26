#include "MemberOfParliament.h"
#include "Minister.h"
#include "Speaker.h"
#include<iostream>
#include<string>
using namespace std;
int main () {
	Speaker *spk;
	spk = new Speaker("abc");
	cout << spk->get_name() << " " << spk->get_position() << endl;
	cout << spk->get_speeches() << endl;
	spk->gaveSpeech();
	cout << spk->get_speeches() << endl; 
	
	return 0;
}


