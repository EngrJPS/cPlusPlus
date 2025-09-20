/*
In this exercise you will create a program that computes the area of two shapes, 
a square and a rectangle, by calling the overloaded function find_area.
Begin by declaring the function prototypes for the square find_area function and the rectangle find_area function.
*/

#include <iostream>
#include <cmath>
using namespace std;

int find_area(int l);
double find_area(double l, double w);

void area_calc(){
    int square_area{};
    double rectangle_area{};

    square_area = find_area(2);
    rectangle_area = find_area(4.5, 2.3);

    cout << "The area of the square is " << square_area << "\n" << "The area of the rectangle is " << rectangle_area;
}

int main(){

    area_calc();
    return 0;

}

int find_area(int l){
    return pow(l, 2);
}

double find_area(double l, double w){
    return l * w;
}