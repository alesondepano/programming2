#include<iostream>
using namespace std;

class Parent{
    public:
        int parentValue;
};

class Child : public Parent{
    public:
        int childValue;
};


int main(){
    Child c;

    c.parentValue = 12;
    c.childValue = 23;

    cout << "Value in parent: " << c.parentValue << endl;
    cout << "Value in child: " << c.childValue << endl;
}