#include<iostream>
using namespace std;

struct Student{
    int id;
    string name;
    string course;
};

void inputData(Student[], int);
void dislayData(Student);
bool search(Student[], int, int);

int main(){
    int size;

    cout << "How many student records to enter?: ";
    cin >> size;
    Student studs[size];

    inputData(studs, size);

    // Search and display the information
    int id;
    cout << "Enter ID Number of student to display: ";
    cin >> id;
    search(studs, size, id);
}

void inputData(Student studs[] , int size){
    for(int i = 0; i < size; i++){
        cout << "Enter ID Number of student [" << (i+1) << "]: ";
        cin >> studs[i].id;
        cin.ignore();
        cout << "Enter Name of student [" << (i+1) << "]: ";
        getline(cin, studs[i].name);
        cout << "Enter COURSE of student [" << (i+1) << "]: ";
        getline(cin, studs[i].course);
    }
}

void displayData(Student stud){
    cout << "\n";
    cout << "ID NUMBER: " << stud.id << endl;
    cout << "NAME: " << stud.name << endl;
    cout << "COURSE: " << stud.course << endl << endl;
}

bool search(Student studs[], int size, int id){
    bool found = false;
    for(int i = 0; i < size; i++){
        if(studs[i].id == id){
            displayData(studs[i]);
            return true;
        }
    }

    return false;
}