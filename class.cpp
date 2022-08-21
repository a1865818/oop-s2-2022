#include <iostream>
#include<string>
#include "student.h"
using namespace std;
class Classroom
{
private:
    int class_size ;
    Student*students_record;
public:
    Classroom(){
        class_size=0;
        students_record = new Student[class_size];
    };
    Classroom(int a_class_Size) {
        class_size = a_class_Size;
        students_record = new Student[class_size];
    }
    ~Classroom(){
        delete [] students_record;
    };
};





int main () {
  Classroom OOP2022(5);


   
}

