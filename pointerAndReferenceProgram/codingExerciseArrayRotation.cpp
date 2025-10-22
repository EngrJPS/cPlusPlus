#include <iostream>
using namespace std;

void rotate_array(int* arr, int size, int k) {
    // Your implementation here
    int *first {arr};
    int *last {arr + size - k};
    int *temp = new int[size];

    if(size < k){
        while(first < last){
            int temp = *first;
            *first = *last;
            *last = temp;
        }
    }else{

        int count{0};

        for(int i{0}; i < k; i++){
            temp[i] = *last;
            last++;
            count++; // 2
        }

        for(int i{count}; i < size; i++){
            temp[i] = *first;
            first++;
        }

        for(int i{0}; i < size; i++){
            arr[i] = temp[i];
        }
    }
}

void print_array(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int size1 = 5;
    rotate_array(arr1, size1, 2);
    print_array(arr1, size1);  // Expected: 4 5 1 2 3
    
    int arr2[] = {10, 20, 30};
    int size2 = 3;
    rotate_array(arr2, size2, 1);
    print_array(arr2, size2);  // Expected: 30 10 20
    
    return 0;
}


/*
    [1, 2, 3, 4, 5] -> [4, 5, 1, 2, 3]  k: 2


    1st reverse:
     0  1  2  3  4
     |  |  |  |  |
    [5, 4, 3, 2, 1]

    2nd reverse: start: arr, last: arr + k - 1
     s  l
     |  |
    [5, 4, 3, 2, 1]

    [4, 5, 3, 2, 1]

    3rd reverse: start: arr + k, last: arr + size -1
           s     l
           |     |
    [4, 5, 3, 2, 1]

    [4, 5, 1, 2, 3]
*/