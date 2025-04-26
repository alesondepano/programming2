#include<iostream>

using namespace std;

int add(int, int);
double add(double, double);
double add(double, int);
double add(int, double);
int add(int, int, int);

int main(){
    cout << add(12, 23) << endl;
    cout << add(12.45, 23.98) << endl;
    cout << add(12.45, 23) << endl;
    cout << add(12, 23.98) << endl;
    cout << add(12, 23, 67) << endl;
}

int add(int n1, int n2){
    return n1 + n2;
}

double add(double n1, double n2){
    return n1 + n2;
}

double add(double n1, int n2){
    return n1 + n2;
}

double add(int n1, double n2){
    return n1 + n2;
}

int add(int n1, int n2, int n3){
    return n1 + n2 + n3;
}