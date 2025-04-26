#include<iostream>
using namespace std;

void display(string[3][2]);

int main(){
    string data[3][2] = {
        {"Joseph", "25"},
        {"John", "15"},
        {"Jake", "30"},
    };

    display(data);
}

void display(string data[3][2]){
    for(int i = 0; i < 3; i++){ // Outer loop is for row
        cout << "Record #" << (i+1) << ": ";
        for(int j = 0; j < 2; j++){ // Inner loop is for column
            cout << data[i][j] << " : ";
        }
        cout << endl;
    }
}