#include<iostream>
#include<string>
using namespace std;

class Student{
    // Private members
    private:
        string name;
        string course;

    // Pubic members
    public:
        // Public data members
        int id;
        // Member functions
        void setName(string newName){
            name = newName;
        }
        void setCourse(string newCourse){
            course = newCourse;
        }
        string showName(){
            return name;
        }
        string showCourse();

};

string Student::showCourse(){
    return course;
}

int main(){
    // ISntatiate a Student object
    Student stud;
    string name, course;

    cout << "Enter ID Number: ";
    cin >> stud.id;
    cin.ignore();
    cout << "Enter name: ";
    getline(cin, name);
    cout << "Enter course: ";
    getline(cin, course);
    stud.setName(name);
    stud.setCourse(course);

    cout << "ID Number: " << stud.id << endl;
    cout << "Name: " << stud.showName() << endl;
    cout << "Course: " << stud.showCourse() << endl;
}