#include<iostream>
using namespace std;

int add(int, int);
int add(int, int, int);
double add(double, double);
double add(int, double);

// Function names MUST be the same
// Function parameters MUST be different
// Return types has no effect on overloading

int main(){
    cout << "Sum : " << add(23, 15) << endl;
    cout << "Sum : " << add(23.45, 15.25) << endl;
    cout << "Sum : " << add(23, 15.25) << endl;
}

int add(int n1, int n2){
    // int sum = n1 + n2;
    // return sum;
    return (n1 + n2);
}

int add(int n1, int n2, int n3){
    return (n1 + n2 + n3);
}

double add(double n1, double n2){
    return (n1 + n2);
}

double add(int n1, double n2){
    return (n1 + n2);
}