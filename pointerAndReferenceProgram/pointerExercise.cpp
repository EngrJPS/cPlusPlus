#include<iostream>

using namespace std;

void arr_print(int *start, int *end);
void arr_increment(int *arr, int *end, int size, int inc=1);

int main(){

    int arr[] {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);

    arr_print(arr, &arr[size]);

    arr_increment(arr, &arr[size], size, 3);

    return 0;
}

void arr_print(int *arr, int *end){
    for(arr; arr < end; arr++){
        cout << *arr << " ";
    }
    cout << "\n";
}

void arr_increment(int *arr, int *end, int size, int inc){
    for(int i{0}; i < size; i++){
        arr[i] += inc;
    }

    arr_print(arr, end);
}