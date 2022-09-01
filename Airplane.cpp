#include "Airplane.h"
#include "Person.h"
#include <iostream>
#include <string>
using namespace std;
Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot) {
  this->callsign = callsign;
  this->thePilot = thePilot;
  this->theCoPilot = theCoPilot;
}
void Airplane::setPilot(Person thePilot) { this->thePilot = thePilot; }
Person Airplane::getPilot() { return thePilot; }
void Airplane::setCoPilot(Person theCoPilot) { this->theCoPilot = theCoPilot; }
Person Airplane::getCoPilot() { return theCoPilot; }
void Airplane::printDetails() {
  cout << "Call Sign :" << callsign << endl;
  cout << "Pilot Name :" << thePilot.getName() << endl;
  cout << "The Co-Pilot Name :" << theCoPilot.getName() << endl;
}