#include<iostream>
using namespace std;

void reverse_array(int*, int);

int main(){

    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
 
    reverse_array(arr, size);
    
    cout << "{ ";
    for(size_t i{0}; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << " }" << endl;
    return 0;
}

void reverse_array(int *arr, int size){

    int *start = arr;
    int *last = arr+size-1;

    for(start; start < last; start++){
        int temp = *start;
        *start = *last;
        *last = temp;
        last--;
    }
    
}