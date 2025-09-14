#include <iostream>
using namespace std;

// This is a function for arithmetic operators
int arithmetic_operators(int number) {
    int original_number {number};

    
    //----WRITE YOUR CODE BELOW THIS LINE----
    
    //-- Multiply number by 2 and assign the result back to number
    // number = number * 2; 
    number *= 2;
    
    
    //-- Add 9 to number and assign the result back to number
    // number = number + 9; 1
    number += 9;
    
    //-- Subtract 3 from number and assign the result back to number
    // number = number - 3; 1
    number -= 3;
    
    //-- Divide number by 2 and assign the result back to number
    // number = number / 2; 
    number /= 2;
    
    //-- Subtract original_number from number and assign the result back to number
    // number = number - original_number; 
    number -= original_number; 

    //-- Take the modulus 3 (%) of number and assign it back to number
    // number = number % 3; 
    number %= 3;
 
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    
    return number;
}

int main(){

    cout << "The result is: " << arithmetic_operators(30) << endl;
    
    return 0;
}