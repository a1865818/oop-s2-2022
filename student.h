#include<string>
using namespace std;

class Student {
    private:
        string name;
        int id;
        double grade;
    public:
    Student();
    Student(string s_name,int s_id, double s_grade) ;
    Student(string s_name,int s_id);
    ~Student();
        string get_name() { return name; }
        int get_id () { return id;}
        double get_grade () {return grade;}
    void set_name (string new_name) {
        name = new_name;
    }
    void set_id (int new_ID ) {
        id = new_ID;
    }
    void set_grade (double new_grade) {
        grade = new_grade;
    }
    bool is_pass() ;
};
Student::Student():name("Placeholder"),id(0),grade(0){  
   // cout<<"an object of class student was created"<<endl;
};
Student::Student(string s_name,int s_id) {
    name = s_name;
    id=s_id;
    grade=0;
}

Student::Student(string s_name,int s_id,double s_grade) {
    name = s_name;
    id=s_id;
    grade=s_grade;
}

Student::~Student()
{
    //cout<<"A student object was deleted"<<endl;;
}
bool Student::is_pass() {
    if (grade < 50)
    {
        return false;
    }else {
        return true;
    }
    
}