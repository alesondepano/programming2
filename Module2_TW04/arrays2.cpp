#include<iostream>
using namespace std;

int getSum(int[], int);

int main(){
    int size;
    
    // Ask the user how many numbers to input
    cout << "How many numbers you want to input?: ";
    cin >> size;

    // Declare the array using the size entered by the user
    int nums[size];

    // Input the numbers
    for(int i = 0; i < size; i++){
        cout << "Enter number [" << (i+1) << "]: ";
        cin >> nums[i];
    }
    // Call the getSum function passing the array as argument
    int sum = getSum(nums, size);
    cout << "The sum of all the numbers is: " << sum << endl;
}

int getSum(int nums[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + nums[i];
    }
    return sum;
}