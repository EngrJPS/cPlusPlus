// I need to understand quick sort DSA to solve this problem

#include <iostream>
using namespace std;

// Your function goes here
int partition(int* arr, int size, int pivot, int& lessCount, int& greaterCount) {
    
    // Step 1
    lessCount = 0;
    greaterCount = 0;

    // Step 2
    for(int i{0}; i < size; i++){
        if(*(arr + i) < pivot){
            lessCount++;
        }else{
            greaterCount++;
        }
    }

    int *temp = new int[size];
    // Step 3
    int pivotPos{0};
    for(int i{0}; i < size; i++){
        if(arr[i] < pivot){
            temp[pivotPos] = arr[i];
            pivotPos++;
        }
    }

    int pivotIndex = pivotPos;

    for(int i{0}; i < size; i++){
        if(arr[i] >= pivot){
            temp[pivotPos] = arr[i];
            pivotPos++;
        }
    }

    for(int i{0}; i < size; i++){
        arr[i] = temp[i];
    }

    delete []temp;

    return pivotIndex;
}

// Helper function to print array
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Test 1: Basic case
    int arr1[] = {7, 2, 9, 3, 5, 8, 1};
    int less1, greater1;
    cout << "Test 1 - Original: ";
    printArray(arr1, 7);
    
    int pivotIdx1 = partition(arr1, 7, 5, less1, greater1);
    cout << "After partition: ";
    printArray(arr1, 7);
    cout << "Pivot index: " << pivotIdx1 << ", Less: " << less1 << ", Greater/Equal: " << greater1 << endl;
    cout << "Expected: Less=3, Greater=4\n\n";
    
    // Test 2: All elements less than pivot
    int arr2[] = {1, 2, 3, 4};
    int less2, greater2;
    cout << "Test 2 - Original: ";
    printArray(arr2, 4);
    
    int pivotIdx2 = partition(arr2, 4, 10, less2, greater2);
    cout << "After partition: ";
    printArray(arr2, 4);
    cout << "Pivot index: " << pivotIdx2 << ", Less: " << less2 << ", Greater/Equal: " << greater2 << endl;
    cout << "Expected: Less=4, Greater=0\n\n";
    
    // Test 3: All elements greater than pivot
    int arr3[] = {5, 6, 7, 8};
    int less3, greater3;
    cout << "Test 3 - Original: ";
    printArray(arr3, 4);
    
    int pivotIdx3 = partition(arr3, 4, 2, less3, greater3);
    cout << "After partition: ";
    printArray(arr3, 4);
    cout << "Pivot index: " << pivotIdx3 << ", Less: " << less3 << ", Greater/Equal: " << greater3 << endl;
    cout << "Expected: Less=0, Greater=4\n\n";
    
    return 0;
}