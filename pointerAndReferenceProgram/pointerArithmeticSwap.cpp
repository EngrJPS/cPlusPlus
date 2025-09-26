#include<iostream>
using namespace std;

void swapPointer(int *ptr1, int *ptr2){

    *ptr1 = *ptr1 + *ptr2; // 5 + 10 = 15
    *ptr2 = *ptr1 - *ptr2; // 15 - 5 = 10
    *ptr1 = *ptr1 - *ptr2; // 15 - 10 = 5

    // My solutions:

    // int temp = *ptr1;
    // *ptr1 = *ptr2;
    // *ptr2 = temp;

    // ptr1 -> 0x5ffebc     Goal: 0x5ffeb8
    // ptr2 -> 0x5ffeb8           0x5ffebc

    // int *swap1 = ptr1 - 1; // 0x5ffeb8
    // int *swap2 = ptr2 + 1; // 0x5ffebc

    // ptr1 = swap1;
    // ptr2 = swap2;

    // cout << *ptr1 << endl;
    // cout << *ptr2 << endl;


}

int main(){
    int a{5};
    int b{10};

    int *ptrA = &a;
    int *ptrB = &b;

    cout << *ptrA << endl;
    cout << *ptrB << endl;

    swapPointer(ptrA, ptrB);

    cout << *ptrA << endl;
    cout << *ptrB << endl;

    return 0;
}