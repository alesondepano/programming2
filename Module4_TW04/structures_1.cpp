#include<iostream>
using namespace std;

struct Student{
    int id;
    string name;
    string course;
};

int main(){
    Student stud;

    stud.id = 1234;
    stud.name = "Joseph Calleja";
    stud.course = "BSIT";

    cout << "ID NUMBER: " << stud.id << endl;
    cout << "NAME: " << stud.name << endl;
    cout << "COURSE: " << stud.course << endl;

}