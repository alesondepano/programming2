#include<iostream>

using namespace std;

void greet(); // Function prototype (declare the function)

int main(){
    cout << "Hi, I am Joseph!\n";
    greet();
    cout << "I am fine, thank you.";

    return 0;
}

void greet(){ // Function definition (define the body of the function)
    cout << "Hello there, how are you?\n";
}