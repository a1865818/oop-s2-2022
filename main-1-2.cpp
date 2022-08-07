#include<iostream>
using namespace std;
extern void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);
int main() {

string courses[4] = {"OOP", "Statistics", "Electronics", "Quantum Mechanics"};

string students[2] = {"Joe", "Bethany"};

int report_card[2][4] = {{100, 70, 50, 25}, {100, 100, 50, 75}};

print_class(courses, students, report_card, 2);

}