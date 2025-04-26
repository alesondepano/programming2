#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int width;
    int area = 0;
};

void computeArea(Rectangle&);

int main(){
    Rectangle rect;
    int length, width;

    cout << "Enter length in meters: ";
    cin >> rect.length;
    cout << "Enter width in meters: ";
    cin >> rect.width;

    computeArea(rect);
    cout << "\nThe area of the rectangle with sizes: "
        << rect.length << " cm. and " << rect.width << " cm. "
        << "is " << rect.area << endl;
}

void computeArea(Rectangle& rect){
    rect.length *= 100;
    rect.width *= 100;
    rect.area =  rect.length * rect.width;
}