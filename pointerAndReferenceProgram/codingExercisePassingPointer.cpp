#include<iostream>
using namespace std;

void multiply_integer(int*, int);

int main(){

    int num{5};
    int *pNum{&num};

    cout << num << endl;

    multiply_integer(pNum, 10);

    cout << num << endl;

    return 0;
}

void multiply_integer(int *num, int multiplier){
    *num *= multiplier;
}