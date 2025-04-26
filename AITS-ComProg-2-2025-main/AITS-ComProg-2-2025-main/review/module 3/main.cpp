/**
 * @file main.cpp
 * @brief Module 3 
 * 
 * Character Manipulation
 * 
 */

 #include <iostream>
 #include <cctype>
 #include <string>
 using namespace std;
 
 int main()
 {
     string name, partialName;
 
     cout << "Enter name: ";
     cin >> name;
 
     partialName = name;
 
     partialName.erase(0, 1);
 
     cout << "Hello, " << (char) toupper(name[0]) << partialName;
     
     system("pause");
     return 0;
 }
 