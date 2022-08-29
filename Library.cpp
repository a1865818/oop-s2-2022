#include <iostream>
#include "Library.h"
#include "Book.h"
using namespace std;

Library::Library()
{
Book books_lib[100];
num_books=0;
}

void Library::add(Book book)
{
books_lib[num_books]=book;
num_books++;
}

bool Library::borrow(string book_borrow)
{
	for (int i=0;i<num_books;i++) {
		if ((book_borrow==books_lib[i].name)&&books_lib[i].num_copies>=1) {
			books_lib[i].num_copies--;
			return true;
		}
	}
	return false;
}

bool Library::returning(string book_return)
{
	for (int i=0;i<num_books;i++) {
		if (book_return==books_lib[i].name) {
			books_lib[i].num_copies++;
			return true;
		}
	}
	return false;
}


