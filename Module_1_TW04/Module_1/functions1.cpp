#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double num = 25;
    double squareRoot = sqrt(num);
    double power = pow(num, 2);

    cout << "The square root of " << num << " is " << squareRoot << endl;
    cout << num << " raised to the power of 2 is " << power << endl;
}