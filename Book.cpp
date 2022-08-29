#include <iostream>
#include "Book.h"
using namespace std;

Book::Book()
{
	name=" ";
	num_copies=0;
} 

Book::Book(string bname, int bnum_copies)
{
name = bname;
num_copies=bnum_copies;
}

