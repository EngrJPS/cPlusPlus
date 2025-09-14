#include <iostream>
#include <vector>
using namespace std;

/*******************************************************
 * Write your code in the provided area.
 * 
 * This function should use a do while loop to iterate over
 * the automatically provided vector (vec) of characters looking 
 * for the first occurrence of a lowercase English vowel ('a','e','i','o','u').
 * 
 * If a vowel is found, you should display to cout:
 * 
 * "Vowel found: " followed by the vowel that was found.
 * 
 * If no vowel is found in the vector, then you should display to cout:
 * 
 * "No vowel was found"  
 * 
 * For example, below are several examples of vectors and what your output should be:
 * 
 * {'f','r','a','n','k'}    Vowel found: a
 * {'F','R','A','N','K'}    No vowel was found
 * {'h','e','l','l','o'}    Vowel found: e
 * {}                       No vowel was found
 * {'x','y','z','o'}        Vowel found: o
 * 
 * Please do NOT add std::endl or '\n' to your output statement.
 * *****************************************************/

/*
Check the vector if it is empty
Do the inspection each characters in the vector for vowels
if the vowel is found end the loop
else no vowel display "No vowel was found"
*/


int main(){
    vector<char> vec{'x','y','z','o'};
    int n{0}; 
    bool isVowelFound {false};

    if(!vec.empty()){
        do{
            if(vec[n] == 'a' || vec[n] == 'e' || vec[n] == 'i' || vec[n] == 'o' || vec[n] == 'u'){
                isVowelFound = true;
            }else{
                n++;
            }
        }while(vec.size() > n && !isVowelFound);

        if(isVowelFound){
            cout << "Vowel was found: " << vec[n] << endl;
        }else{
            cout << "No vowel was found" << endl;
        }

    }else{
        cout << "No vowel was found" << endl;
    }
    return 0;
}