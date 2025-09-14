#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    int count {0};

//    ordinary for loop
//    for(int i=0; vec.size() > i; i++){
//        if(vec[i] % 3 == 0 || vec[i] % 5 == 0){
//            count++;
//        }
//    }

//  range-based for loop
    for (auto vecc : vec){
        if (vecc % 3 == 0 || vecc % 5 == 0){
            count++;
        }
    }

//  while loop
    // bool isRangeReached {false};
    // int limitNum {-99}, count{0}, i{0};

    // while(!isRangeReached){
    //     if(vec[i] == limitNum && i < vec.size()){
    //         isRangeReached = true;
    //     }else if(vec[i] == vec[vec.size() - 1]){
    //         count++;
    //         isRangeReached = true;
    //     }
    //     else{
    //         i++;
    //         count++;
    //     }
    // }

    cout << count << endl;

    return 0;
}