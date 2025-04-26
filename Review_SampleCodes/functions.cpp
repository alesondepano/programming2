#include<iostream>
using namespace std;

// return_type identifier([parameters_list])

void display(); // Function prototype (declaration)

int main(){
    display(); // Call the function (invoke)
}

void display(){ // Function definition (body)
    cout << "Hello, functions!";
}