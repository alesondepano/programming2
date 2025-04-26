#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[50], str2[50];

    cout << "Enter first string: ";
    // cin >> str1;
    cin.getline(str1, 50);
    cout << "Enter second string: ";
    // cin >> str2;
    cin.getline(str2, 50);

    // Using strcmp;
    // cout << (strcmp(str1, str2));
    if(strcmp(str1, str2) == 0){
        cout << "The two strings are equal!\n";
    }else{
        cout << "The  strings are not equal!\n";
    }

    char str3[50];
    // Using strcpy
    strcpy(str3, str1);
    cout << "Third string value: " << str3 << endl;
}