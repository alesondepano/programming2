#include<iostream>
using namespace std;

int main(){
    // Declare an array of type string
    string days[] = {
        "Sunday",
        "Monday",
        "Tueday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday", // Elements with a trailing comma
        "Joseph",
        "JayCee",
    };

    // Print the 5th day of the week
    cout << days[4] << endl;

    // Change the 6th day of the week to 'Biyernes'
    days[5] = "Biyernes";
    // Show the 6th day of the week
    cout << days[5] << endl;

    // Display of the days of the week
    int size = sizeof(days)/sizeof(string);
    for(int i = 0; i < size; i++){
        cout << "Day of the week #" << (i+1) << ": " << days[i] << endl;
    }
    // Try to access an element that does not exist.
    cout << days[15] << endl;
}