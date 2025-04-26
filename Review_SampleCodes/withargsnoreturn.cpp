#include<iostream>
using namespace std;
// n1 and n2 are parameters (formal parameters)
void add(int n1, int n2){
    int sum = n1 + n2;
    cout << "Sum : " << sum << endl;
}

int main(){
    add(23, 15); // 23 and 15 are called arguments (actual parameters)
}