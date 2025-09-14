#include <iostream>
using namespace std;

void isValid(int num){
    cout << "Enter an integer between 1 and 5: ";
    cin >> num;
    if(num <= 1 || num >= 5){
        cout << "Out of range, try again!" << endl;
        isValid(num);
    }else{
        cout << "Success!" << endl;
    }
}

int main(){
    int number {0};
    
    isValid(number);
    return 0;
}