/**
 * @file main.cpp
 * @brief Module 5 
 * 
 * Pointer - it is a variable that stores a location
 * Dereferencing - stating this is using the address
 * Address-of - stating your address
 * 
 * new - this a function which creates a new variable
 * delete - this a function which delete a variable
 */

#include <iostream>
using namespace std;

void InputValue(int& value){
    cout << "Enter Value: ";
    cin >> value;
}

void InputValueWithPointer(int value){
    cout << "Enter Value: ";
    cin >> value;
}

int main()
{
    int value1 = 0, value2 = 0;
    int * pointerOfValue1 = &value1;

    // before modification
    cout << "Ref With Pointer: " << *pointerOfValue1 << endl;
    
    InputValue(value1);
    InputValueWithPointer(value2);
    
    cout << "With Pointer: " << value1 << endl;
    cout << "Without Pointer: " << value2 << endl;
    
    // after modification
    cout << "Ref With Pointer: " << *pointerOfValue1 << endl;

    system("pause");
    return 0;
}
