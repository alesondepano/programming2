#include<iostream>
using namespace std;

struct Student{
    int id;
    string name;
    string course;
};

int main(){
    Student studs[3];

    studs[0].id =  1234;
    studs[0].name = "Joseph Calleja";
    studs[0].course = "BSIT";

    studs[1].id =  2345;
    studs[1].name = "Melissa Calleja";
    studs[1].course = "BSHIM";

    studs[2].id =  34567;
    studs[2].name = "Jlo Calleja";
    studs[2].course = "BSCE";

    for(Student stud:studs){
        cout << "ID NUMBER: " << stud.id << endl;
        cout << "NAME: " << stud.name << endl;
        cout << "COURSE: " << stud.course << endl << endl;
    }
}