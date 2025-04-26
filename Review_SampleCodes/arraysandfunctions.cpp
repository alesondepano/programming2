#include<iostream>
using namespace std;

int getSum(int[], int);
    
int main(){
    int size;
    cout << "How many values do you like?: ";
    cin >> size;

    if(size < 1) return 0; // Stops the program execution

    int nums[size];
    for(int i = 0; i < size; i++){
        cout << "Enter value [" << (i+1) <<"]: ";
        cin >> nums[i];
    }

    cout << "The sum of the numbers: " << getSum(nums, size) << endl;
}

int getSum(int nums[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += nums[i];
    }

    return sum;
}