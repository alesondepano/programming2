#include<iostream>

using namespace std;

void copy(int *x){
    cout << "The value of x passed from main is: " << *x << endl;
    *x = 13;
    cout << "The value of x as assigning a new value: " << *x << endl;
}

int main(){ // Sample for pass-by-reference
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Original value of num: " << num << endl;
    copy(&num);
    cout << "Value of num after function call: " << num << endl;
}