#include <iostream>
#include "Book.h"
#include "Library.h"
using namespace std;
// main program
int main()
{
Book *book1, *book2;
book1 = new Book("Space",3);
book2 = new Book("Galaxy",2);

Library *library;
library = new Library();
library->add(*book1);
library->add(*book2);

cout << library->borrow("Space") << endl;
cout << library->borrow("Galaxy") << endl; 
cout << library->borrow("Galaxy") << endl; 
cout << library->borrow("Galaxy") << endl; 

}
