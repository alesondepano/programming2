#include<iostream>

using namespace std;

void add(int x = 0, int y = 0){ // Function with defaut arguments
    int result = x + y;
    cout << "The sum is " << result;
}

int main(){
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    add(5);
}