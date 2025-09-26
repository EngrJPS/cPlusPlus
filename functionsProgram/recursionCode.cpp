#include <iostream>
#include <string>

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

int decreasingCountNum (int);
int ascendingCountNum(int, int inc=1);
bool isPalendrome(string s);

size_t factorialCount(size_t);


int main(){
    int number {0};
    
    // isValid(number);

    cout << decreasingCountNum(5) << endl;
    cout << "=====" << endl;
    cout << ascendingCountNum(10) << endl;
    cout << "=====" << endl;
    cout << factorialCount(5) << endl;
    cout << "=====" << endl;
    cout << "Is racecar a palendrome? "<< endl;
    cout << boolalpha << isPalendrome("racecar") << endl;
    cout << "Is high a palendrome? "<< endl;
    cout << boolalpha << isPalendrome("high") << endl;
    cout << "Is " << " " << " a palendrome? "<< endl;
    cout << boolalpha << isPalendrome(" ") << endl;
    cout << "Is X a palendrome? "<< endl;
    cout << boolalpha << isPalendrome("X") << endl;

    return 0;
}

int decreasingCountNum (int nums){

    if (nums <= 1){
        return 1;
    }
    cout << nums << endl;
    return decreasingCountNum(nums-1);
}

int ascendingCountNum(int nums, int inc){
    if(nums <= 1){
        return inc;
    }
    cout << inc << endl;
    return ascendingCountNum(nums-1, inc+1);
}

unsigned long long factorialCount(size_t n){
    if(n == 0){
        return 1;
    }
    return n * factorialCount(n-1);
}

bool isPalendrome(string s){
    if(s.length() < 2){
        return true;
    }else{
        if(s[0] != s[s.length() - 1]){
            return false;
        }
    }
    return isPalendrome(s.substr(1, s.length() - 2));
}