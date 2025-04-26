#include<iostream>
using namespace std;

struct Student{
    int id;
    string name;
    string course;
};

int main(){
    int size;

    cout << "How many student records to enter?: ";
    cin >> size;
    Student studs[size];

    for(int i = 0; i < size; i++){
        cout << "Enter ID Number of student [" << (i+1) << "]: ";
        cin >> studs[i].id;
        cin.ignore();
        cout << "Enter Name of student [" << (i+1) << "]: ";
        getline(cin, studs[i].name);
        cout << "Enter COURSE of student [" << (i+1) << "]: ";
        getline(cin, studs[i].course);
    }

    cout << "\n";
    for(Student stud:studs){
        cout << "ID NUMBER: " << stud.id << endl;
        cout << "NAME: " << stud.name << endl;
        cout << "COURSE: " << stud.course << endl << endl;
    }
}