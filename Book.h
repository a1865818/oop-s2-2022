#ifndef BOOK_H
#define BOOK_H
#include <string>
// Class definition for a book
class Book
{
public:
Book();
Book(std::string bname, int bnum_copies);
std::string name;
int num_copies;
};
#endif //BOOK_H
