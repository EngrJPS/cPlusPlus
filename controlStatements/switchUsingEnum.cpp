#include <iostream>
using namespace std;

int main(){

    //Use the enum to declare integral types
    enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

    week today;

    today = Monday;
    
    cout << "Today is " << today +1 << endl;
}