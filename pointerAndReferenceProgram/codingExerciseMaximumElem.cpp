#include<iostream>
using namespace std;

int find_max_element(int*, int);

int main(){

    int arr[] = {12, 45, 67, 23, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
 
    int maxElement = find_max_element(arr, size);

    cout << "The max element in the array is: " << maxElement << endl;
}

int find_max_element(int* arr, int size){
    int max = *arr;
    for(size_t i{0};i < size; i++){
        if(max < *(arr + i)){
            max = *(arr +i);
        }
    }

    return max;
}