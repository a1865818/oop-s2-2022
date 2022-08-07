#include<iostream>
using namespace std;
extern void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);
int main() {
    int student_size, i;
cout<<"Number of students:"<<" ";
cin>>student_size;
string courses[4] = {"OOP", "Statistics", "Electronics", "Quantum Mechanics"};

string students[student_size] ;

for ( i = 0; i < student_size; i++)
{
    cout<<"Student's name: "<<" ";
    cin>>students[i];
}


int j;

int report_card[student_size][4] ;
for ( i = 0; i < student_size; i++)
{
   for ( j = 0; j < 4; j++)
   {
    cout<<"Grade of"<<" "<<students[i]<<" ";
    cin>>report_card[i][j];
   }
   
}



print_class(courses, students, report_card, student_size);

}