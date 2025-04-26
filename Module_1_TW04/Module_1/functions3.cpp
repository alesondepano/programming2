#include<iostream>

using namespace std;

int num1, num2;

void add(){ // Function without arguments and no return statement
    int result = num1 + num2;
    cout << "The sum is " << result;
}

int main(){
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    add();
}