/*
Exercise: Array Reversal using Pointers

Specification:

Write a C++ function reverse_array that takes an integer array and its size as input and reverses the order of the elements in the array. 
The function should modify the array in-place.

Input:

arr: A pointer to the first element of the integer array.

size: The size of the array.
*/

#include<iostream>
using namespace std;

void revArray(int*, int);
int *revArray1(int *array, int size);

int main(){
    int arr[] {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    revArray(arr, size);

    int *arr2 = revArray1(arr, size);

    cout << "{ ";
    for(auto num : arr){
        cout << num << " ";
    }

    cout << "}";

    cout << "{ ";

    for(int i{0}; i < size; i++){
        cout << arr2[i] << " ";
    }
    cout << "}" << endl;

    return 0;
}

void revArray(int *array, int size){
    int *first = array; // integer value that points to the address of some value
    int *last = array + size - 1;

    for(first; first < last; first++){
        int temp = *first;
        *first = *last;
        *last = temp;
        last--;
    }
}

int *revArray1(int *array, int size){
    int *first = array;
    int *last = array + size - 1;
    int *temp = new int[size];

    for(int i{0}; i < size; i++){
        temp[i] = *last;
        last--;
    }

    return temp;
}

/*
    1: 1 < 6    temp: 1, last: temp
    Before:
    {1, 2, 3, 4, 5, 6}
     |              |
     f              l

     After:
    {6, 2, 3, 4, 5, 1}

    2: 2 < 5    temp: 2, last: temp
    Before:
    {6, 2, 3, 4, 5, 1}
        |        |
        f        l
    
    After:
    {6, 5, 3, 4, 2, 1}

    3: 3 < 4    temp: 3, last: temp
    Before:
    {6, 5, 3, 4, 2, 1}
           |  |
           f  l
    After:
    {6, 5, 4, 3, 2, 1}
*/