#include<iostream>
#include<fstream>
#include<cstdio>
#include<string.h>


using namespace std;

int main(){
    string name;
    int age, id;

    cout << "Enter ID Number: ";
    cin >> id;
    cin.ignore();
    cout << "Enter you name: ";
    getline(cin, name);
    cout << "Enter age: ";
    cin >> age;

    // Produce the filename
    string filename = to_string(id);
    filename = "D:\\WORK\\Samples\\2T2425\\CCS0007_TW04\\Module_7\\" + filename + ".txt";

    // Open the file and store the data
    // Declare fstream objects
    ofstream outFile(filename);

    // Store data to file
    outFile << "ID: " << id << endl;
    outFile << "Name: " << name << endl;
    outFile << "Age: " << age << endl;

    // Close the ofstream object
    outFile.close();

    // Dead data from the file
    ifstream inFile(filename);
    string data = "";
    while(getline(inFile, data)){
        cout << data << endl;
    }
}