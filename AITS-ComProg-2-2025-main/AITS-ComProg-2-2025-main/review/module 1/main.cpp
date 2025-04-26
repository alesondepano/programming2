/**
 * @file main.cpp
 * @brief Module 1
 * 
 * - Function: Block reusable code
 * 
 *  - Type of Function based on who create it:
 *     - User Defined Function: function created by Developer
 *     - Built-in Function: function that is already created by the programming language
 *      - Ex: cout, cin, endl, system, etc.
 * 
 *  - Type of Functions based on return value:
 *      - void: function that does not return a value
 *      - non-void: function that return a value
 * 
 *  - Type of Functions based on parameter:
 *     - function with parameter: function that accept values
 *     - function without parameter: function that does not accept values
 */

#include <iostream>
using namespace std;

/*
    Function Prototype: declaration promise of function

    elements:
    - return type: it is returning a value
    - function name: specification of what function we are making
    - parameter: accepted values
*/ 
// user defined function, non-void function, function with parameter
int EnterValue(string instruction);

// user defined function, void function, function with parameter
void DisplayValue(int val) {
    cout << "Value: " << val << endl;
}

// user defined function, void function, function without parameter
void WelcomeMessage() {
    cout << "Welcome to the program" << endl;
}

int main()
{
    int val1, val2, val3, val4, val5;

    WelcomeMessage();

    // sample of code that dont use function
    // cout << "Enter Value 1:";
    // cin >> val1;
    // cout << "Enter Value 2:";
    // cin >> val2;
    // cout << "Enter Val 3:";
    // cin >> val3;
    // cout << "Enter Val 4:";
    // cin >> val4;
    // cout << "Enter Val 5:";
    // cin >> val5;

    // cout << "Val 1:" << val1;
    // cout << "Val 2:" << val2;
    // cout << "Val 3:" << val3;
    // cout << "Val 4:" << val4;
    // cout << "Val 5:" << val5;

    // sample of using function
    val1 = EnterValue("1");
    val2 = EnterValue("2");
    val3 = EnterValue("3");
    val4 = EnterValue("4");
    val5 = EnterValue("5");

    DisplayValue(val1);
    DisplayValue(val2);
    DisplayValue(val3);
    DisplayValue(val4);
    DisplayValue(val5);
    
    system("pause");
    return 0;
}

/*
    Function Declaration: 

    elements:
    - return type: it is returning a value
    - function name: specification of what function we are making
    - parameter: accepted values
    - body: where the codes logic exist
*/
int EnterValue(string instruction) {
    int val;

    cout << "Enter Value " << instruction << ": ";
    cin >> val;

    // return is a built-in function that is used to return a value
    return val;
}