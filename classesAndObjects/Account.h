#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account{

private:
    std::string name;
    double balance;

public:
    double get_balance(){
        return balance;
    }

    void set_balance(double bal){
        balance = bal;
    }

    std::string get_name();
    void set_name(std::string n);
    bool deposit(double amount);
    bool withdraw(double amount);

};
#endif // _ACCOUNT_H