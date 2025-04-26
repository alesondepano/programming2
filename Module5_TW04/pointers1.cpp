#include<iostream>
using namespace std;

int main(){
    int var = 17;
    int *ptr = &var;
    // int *ptr2 = NULL;
    int *ptr2 = nullptr; // This is more recommended

    cout << var << endl;
    // This will show the address of the variable var
    cout << ptr << endl; 
    // This will show the value pointed by the pointer ptr
    cout << *ptr << endl;

    *ptr = 23;
    cout << var << endl;
    cout << *ptr << endl;
    cout << ptr2 << endl;
}