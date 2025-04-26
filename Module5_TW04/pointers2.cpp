#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6};
    int *ptr = arr;

    int size = sizeof(arr) / sizeof(int);

    int i = 1;
    while(i <= size){
        cout << *ptr << endl;
        i++;
    }
}