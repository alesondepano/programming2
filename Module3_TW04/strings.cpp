#include<iostream>
using namespace std;

int main(){
    char str1[] = "Hello";
    char str2[] = {'H','e','l','l','o','\0'}; // 'Hello'
    string str3 = "Hello";

    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    cout << str1[0] << endl;
    cout << str2[1] << endl;
    cout << str3[4] << endl;

    int size = str3.length();
    cout << size << endl;

    str1[1] = 'a';
    cout << str1 << endl;
}