#include<iostream>
#include<cstring>

using namespace std;

int main(){
    string str1, str2;
    cout << "Enter first string: ";
    // cin >> str1;
    getline(cin, str1);
    cout << "Enter second string: ";
    // cin >> str2;
    getline(cin, str2);

    cout << "Length of first string: " << str1.length() << endl;
    cout << "Length of second string: " << str2.length() << endl;
    if(str1.compare(str2) == 0){
        cout << "The two strings are equal.\n";
    }else{
        cout << "The two strings are not equal.\n";
    }
    cout << "The two strings together: " << str1.append(str2) << endl;

    cout << "First character of first string: " << str1.at(0) << endl;
    cout << "First 2 characters of second string: " << str2.substr(0, 2) << endl;
}