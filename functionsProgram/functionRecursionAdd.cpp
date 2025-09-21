#include <iostream>
using namespace std;

/*
Write a C++ program to find the sum of digits of a number using recursion.
You need to implement the function int sum_of_digits(int n) that takes an 
integer n as an argument and returns the sum of its digits.
*/

int sum_of_digits(int n){
    int modNum{0};
    if(n == 0){
        return 0;
    }
    modNum = n % 10;
    n /= 10;
    return modNum + sum_of_digits(n);
}


int main(){

    cout << sum_of_digits(1234) << endl;
    cout << sum_of_digits(9999) << endl;
    cout << sum_of_digits(1000) << endl;

    return 0;
}