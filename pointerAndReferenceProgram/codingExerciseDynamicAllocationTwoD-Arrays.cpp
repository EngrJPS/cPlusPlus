/*
    Write a C++ program to dynamically allocate two two-dimensional arrays of floating values

    Pseudocode:
    Create a float pointer to a pointer named dynamicFloatArray is set to allocate an array of float values
    Allocate each row values for column
    Assign each row for column elements
    Display the 2D float array
*/

#include<iostream>
#include<string>
using namespace std;

void floatTwoD_Array(int row, int col);
void stringTwoD_Array(int row, int col);
string breaks{"========================================="};

int main(){
    int row{3};
    int col{4};

    floatTwoD_Array(10, 10);
    cout << breaks << endl;
    stringTwoD_Array(5,6);

    return 0;
}

// Declare function call floatTwoD_array with row and column as parameter/argument
void floatTwoD_Array(int row, int col){

    //IMPORTANT PART OF THE PROBLEM SOLVING
    // Declares a pointer to a pointer of type float is set to allocate an array of float pointers of "row"
    float **dynamicFloatArray = new float * [row];

    // Allocate each row for column
    for(int i{0}; i < row; i++){
        dynamicFloatArray[i] = new float[col];
    }
    // END OF IMPORTANT PART OF THE PROBLEM SOLVING
    float initVal{1.2};
    for(int i{0}; i < row; i++){
        cout <<"[ ";
        for(int j{0}; j < col; j++){
            dynamicFloatArray[i][j] = initVal; // Assign the value
            cout << dynamicFloatArray[i][j] << " ";
            initVal++; // Increase it by 1
        }
        cout << "]" << endl;
    }

    delete dynamicFloatArray;
}

// Declare function call stringTwoD_Array with row and column as parameter/argument
void stringTwoD_Array(int row, int col){
    // IMPORTANT PART OF THE PROBLEM SOLVING
    // Declares a pointer to a pointer of type string is set to allocate an array of string pointers of "row"
    string **dynamicStringArray = new string *[row];
    // Allocate each row for column
    for(int i{0}; i < row; i++){
        dynamicStringArray[i] = new string [col];
    }
    // END OF IMPORTANT PART OF THE PROBLEM SOLVING
    string element{"A"};

    for(int i{0}; i < row; i++){
        cout << "[ ";
        for(int j{0}; j < col; j++){
            dynamicStringArray[i][j] = element;
            cout << dynamicStringArray[i][j] << " ";
            element[0]++;
        }
        cout << "]" << endl;
    }

    delete dynamicStringArray;
}