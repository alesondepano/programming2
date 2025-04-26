#include<iostream>
using namespace std;

string getName(){
    string name;
    cin >> name;
    return name;
}

int main(){
    cout << "Enter your name: ";
    string myName = getName();
    cout << "Name : " << myName << endl;
}