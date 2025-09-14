#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 5; ++i){
        cout << i << " ";
        if(i == 5){
            cout << "\n";
        }
    }

   int sum {0}, limitNum{15}, divisorNum{2}, index{1};
   for(index = 1; limitNum >= index; index++){

    cout << index << " " ;

    if(index == limitNum){
        cout << "\n";
    }

    if(index % divisorNum == 1){
        sum += index;        
    }

   }
   cout << sum << endl;
}