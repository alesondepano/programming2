/**
 * @file main.cpp
 * @brief Module 4 
 * 
 * Structure or struct it is the template or a custom data type. this can combine different data types or structure.
 * 
 * Elements is what we call the variables inside
 * 
 */

 #include <iostream>
 using namespace std;
 
//  syntax: struct_key_word name_of_the_struct {}
struct Human
{
    int id, age;
    string firstName, lastName;
};


int main()
{
    int id, age;
    string firstName, lastName;
    
    // we use struct as data type. object or struct variable
    Human bill;

    Human student[10];

    cout << "Name:";
    cin >> firstName;
    
    cout << "Name:";
    // bill = object / struct variable
    // firstName = key
    // . = this is the way to access value
    cin >> bill.firstName;
    
    cout << "Student 1";    
    cout << "Name: ";
    cin >> student[0].firstName;

    cout << "Student 2";    
    cout << "Name: ";
    cin >> student[1].firstName;
   
    cout << "Student 3";    
    cout << "Name: ";
    cin >> student[2].firstName;


    system("pause");
    return 0;
}
 