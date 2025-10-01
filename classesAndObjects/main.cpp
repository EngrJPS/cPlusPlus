#include <iostream>
#include <string>
#include "Account.h"
#include "AddNumbers.h"

using namespace std;

int main(){

    Account my_bank;
    // string bankName{"My bank Account"};
    my_bank.set_name("My bank Account");
    my_bank.set_balance(1000.0);

    if(my_bank.deposit(200.0)){
        cout << "Deposit OK" << endl;
    }else{
        cout << "Deposit is unsuccessful" << endl;
    }

    if(my_bank.withdraw(500)){
        cout << "Withdraw OK" << endl;
    }else{
        cout << "Withdraw Unsuccessful" << endl;
    }

    if(my_bank.withdraw(1500)){
        cout << "Withdraw OK" << endl;
    }else{
        cout << "Withdraw Unsuccessful" << endl;
    }

    int result{addNum(4, 6)};

    cout << result << endl;

    return 0;
}