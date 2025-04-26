#include<iostream>
using namespace std;

int main(){
    int size;
    while(true){
        cout << "How many values do you like?: ";
        cin >> size;

        if(size < 1) break;

        int nums[size];

        for(int i = 0; i < size; i++){
            cout << "Enter value for index [" << (i+1) <<"]: ";
            cin >> nums[i];
        }

        for(int num:nums){ // for-each loop
            cout << num << endl;
        }
    }
    
}