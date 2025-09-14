#include <iostream>
#include <vector>
using namespace std;

/*
Given a vector of integers, determine how many integers are present before you see the value -99 . Note, it's possible -99  is not in the vector! If -99  is not in the vector then the result will be equal to the number of elements in the vector.

The final result should be stored in an integer variable named count .

Note that you the different vectors will be tested against your code. You do not need to declare the vector of integers. vec  is the name of the vector you should use.
*/

int main(){

    vector<int> vec (10, 0);

    int limitNum {-99}, count{0}, i{0};
    
    while(i < vec.size() && vec[i] != limitNum){
        i++;
        count++;
    }
    
    cout << count << endl;
    return 0;
}