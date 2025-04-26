#include<iostream>

using namespace std;

int add(int x, int y){ // Function with arguments and return statement
    int result = x + y;
    return result;
}

int main(){
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "The sum is " << add(num1, num2);
}