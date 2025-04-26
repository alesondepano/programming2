#include<iostream>
using namespace std;

class Student{
    // Pubic members
    public:
        // Public data members
        int id;
        string name;
        string course;

};

int main(){
    Student stud1, stud2;

    stud1.id = 1234;
    stud1.name = "Joseph Calleja";
    stud1.course = "BSIT";

    stud2.id = 2345;
    stud2.name = "Melissa Calleja";
    stud2.course = "BSHRM";

    cout << "ID Number: " << stud1.id << endl;
    cout << "Name: " << stud1.name << endl;
    cout << "Course: " << stud1.course << endl;

    cout << "ID Number: " << stud2.id << endl;
    cout << "Name: " << stud2.name << endl;
    cout << "Course: " << stud2.course << endl;
}