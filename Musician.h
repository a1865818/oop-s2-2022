#ifndef MUSICIAN_H_
#define MUSICIAN_H_
#include <iostream>
class Musician
{
 private:
  std::string instrument;
  int experience;
 public:
  Musician();  // default constructor
  // a constructor that takes the instrument played and the years of experience
  Musician(std::string instrument, int experience);
  // returns the instrument played
  std::string get_instrument();
  // returns the years of exprience
  int get_experience();
  
};

#endif /* MUSICIAN_H_ */