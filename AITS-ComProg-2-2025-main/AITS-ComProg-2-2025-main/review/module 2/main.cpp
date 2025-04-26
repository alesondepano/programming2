/**
 * @file main.cpp
 * @brief module 2
 * 
 * Array is a way to store values in a single variable. It is a collection of similar data types. 
 * 
 *  Note: managing an array require a knowledge in index
 * 
 * - Index is a position of an element in an array. In layman's term, it is similar to how a book is being indexed.
 * - but in index it starts at 0 while in book it starts at 1
 * 
 * - Multi-dimensional Array: array that has more than one dimension
 */

#include <iostream>
#include <string>
using namespace std;

int EnterValue(string instruction);

void DisplayValue(int val) {
    cout << "Value: " << val << endl;
}

void DisplayArray(int value[], const int MAX);

int main()
{
    int val1, val2, val3, val4, val5;

    // syntax: data_type variable_array_name[size];
    int values[5];

    // syntax when it has declared value: 
    // data_type variable_array_name[size] = { value, value};
    
    // syntax of multi-dimensional array:
    // data_type variable_array_name[size][size] = { {value, value}, {value, value}};

    // overflow it is using a array that is not declared

    // sample without array
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

    // sample with array
    for (int i = 0; i < 5; i++) {
        values[i] = EnterValue(to_string(i + 1));
    }

    for (int i = 0; i < 5; i++) {
        DisplayValue(values[i]);
    }
    
    system("pause");
    return 0;
}

int EnterValue(string instruction) {
    int val;

    cout << "Enter Value " << instruction << ": ";
    cin >> val;

    // return is a built-in function that is used to return a value
    return val;
}

void DisplayArray(int value[], const int MAX)
{
    for (int i = 0; i < MAX; i++)
    {
        DisplayValue(value[i]);
    }
    
}
