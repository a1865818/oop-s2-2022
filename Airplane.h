#include <string>
#include "Person.h"
using namespace std;
class Airplane  {
 public:
  Airplane(string callsign, Person thePilot, Person theCoPilot); 
  void setPilot(Person thePilot); 
  Person getPilot();
  Person getPilot();;
  Person getCoPilot();
  void printDetails();
  void setCoPilot(Person theCoPilot);
 private:
  string callsign;
  Person thePilot;
  Person theCoPilot;
};