#include<iostream>
using namespace std;

struct Student{
    // Members
    int id;
    string name;
};
    
int main(){
    // Declaring a structure variable
    // name_struct identifier
    Student stud;

    cout << "Enter you ID Number: ";
    cin >> stud.id;
    cin.ignore();
    cout << "Enter you name: ";
    getline(cin, stud.name);

    cout << "ID Number: " << stud.id << endl;
    cout << "NAME: " << stud.name << endl;
}