#ifndef PANDA_H
#define PANDA_H
#include <string>
#include "Book.h"
// Class definition for a Library
class Library
{
public:
Library();
Book books_lib[100];
int num_books;
void add(Book book_add);
bool borrow(std::string book_borrow);
bool returning(std::string book_return);
};
#endif
