#include "MemberOfParliament.h"
#include "Minister.h"
#include "Speaker.h"
#include "Parliament.h"
#include "MemberOfParliaments.h"
#include<iostream>
#include<string>
using namespace std;

void MemberOfParliaments::sort(Minister **member, int n) {
	bool checkSort = false;

    while (!checkSort)
    {
        checkSort = true;

        for (int i=1; i<=n-2; i=i+2)
        {
            if (member[i]->get_memberID() > member[i+1]->get_memberID())
             {
             	Minister *temp;
             	temp=member[i];
             	member[i]=member[i+1];
             	member[i+1]=temp;
//                swap(member[i], member[i+1]);
                checkSort = false;
              }
        }

        for (int i=0; i<=n-2; i=i+2)
        {
            if (member[i]->get_memberID() > member[i+1]->get_memberID())
            {
            	Minister *temp;
             	temp=member[i];
             	member[i]=member[i+1];
             	member[i+1]=temp;
//                swap(member[i], member[i+1]);
                checkSort = false;
            }
        }
    }

    return;
} 
