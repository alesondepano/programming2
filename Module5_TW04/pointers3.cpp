#include<iostream>
using namespace std;

int main(){
    int *ptr = new int;

    *ptr = 15;

    cout << *ptr << endl;

    // Delete the dynamic variable
    delete ptr; // ptr becomes a dangling pointer

    cout << *ptr << endl;

    // Assign NULL to the pointer
    ptr = NULL;
    cout << ptr << endl;
}