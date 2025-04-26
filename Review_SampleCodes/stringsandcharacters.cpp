#include<iostream>
#include<cstring>
using namespace std;
    
int main(){
    char str1[25]; // C-String
    char str1_copy[25];
    string str2; // String
    string str2_copy;

    string s1 = "a", s2 = "A";
    cout << (s1.compare(s2)) << endl;

    cout << "Enter first string: ";
    // cin >> str1;
    cin.getline(str1, 25);
    cout << "Enter second string: ";
    // cin >> str2;
    getline(cin, str2);

    // Using C-Strings
    cout << "The length of the first string is " << strlen(str1) << endl;
    strcpy(str1_copy, str1);
    cout << "Comparing values: " << strcmp(str1, str1_copy) << endl;
    // NOTE: comparing string will give us on the the following results
    // 0 -> the strings are equal
    // -1 -> the first string is LESSER (lexicographically) than the second
    // 1 -> the first string is GREATER (lexicographically) than the second
    cout << "Append strings: " << strcat(str1, str1_copy) << endl;

    // Using strings
    cout << "The length of the first string is " << str2.length() << endl;
    str2_copy = str2;
    cout << "Comparing values: " << str2.compare(str2_copy) << endl;
    // str2 == str2_copy
    cout << "Append strings: " << str2.append(str2_copy) << endl;
}