#include<iostream>
using namespace std;

typedef int* intPtr;

int main(){
    intPtr arr;
    int nums;

    cout << "How many numbers do you want to input?: ";
    cin >> nums;

    // Create a dynamic array
    arr = new int[nums];

    for(int i = 0; i < nums; i++){
        cout << "Enter value [" << (i+1) << "]: ";
        cin >> arr[i];
    }

    // Display all the values
    for(int i = 0; i < nums; i++){
        cout << *arr++ << endl;
    }

    // Delete the dynamic array
    delete []arr;
    arr = NULL;
}