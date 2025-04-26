#include<iostream>
using namespace std;

// void add(int n1, int n2);
void add(int, int);

int main(){
    add(23, 15);
}

void add(int n1, int n2){
    int sum = n1 + n2;
    cout << "Sum : " << sum << endl;
}