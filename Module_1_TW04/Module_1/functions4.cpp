#include<iostream>

using namespace std;

int num1, num2;

int add(){ // Function without arguments but has a return statement
    int result = num1 + num2;
    return result;
}

int main(){
    int result;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    // cout << "The sum is " << add();
    result = add();
    cout << "The sum is " << result;
}