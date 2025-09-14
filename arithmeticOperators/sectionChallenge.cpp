#include <iostream>
using namespace std;
/*
Write a program that asks the user to enter the following:
An integer representing the number of cents

The program should then display how to provide the change to the user

In the US:
    1 dollar is 100 cents
    1 quarter is 25 cents
    1 dime is 10 cents
    1 nickel is 5 cents, and
    1 penny is 1 cent
*/
int main(){

    //Initialize variables
    int dollar_to_cents {100}, quarter_to_cents {25}, dime_to_cents{10}, nickel_to_cents{5}, penny_to_cents{1};

    cout << "Enter the number of cents that is greater than zero: ";
    int user_amount_cents {0};
    cin >> user_amount_cents;
    
    cout << "The amount in cents: " << user_amount_cents << endl;

    // Computation
    double remainder {0.0};
    int result {0};

    //Convert the cents to dollar
    result = user_amount_cents / dollar_to_cents;


    cout << "The change for dollar: " << result << endl;

    //Get remainder
    remainder = ((static_cast<double>(user_amount_cents) / 100) - result) * 100;

    //Convert the cents to quarter
    result = remainder / quarter_to_cents;
    
    cout << "The change for quarter: "<< result << endl;

    //Get remainder 
    remainder = ((static_cast<double>(user_amount_cents) / quarter_to_cents) - result) * quarter_to_cents;

    // Convert the cents to dime
    result = remainder / dime_to_cents;

    cout << "The change for dime: "<< result << endl;

    //Get remainder
    remainder = ((remainder / dime_to_cents) - result) * dime_to_cents;

    //Convert the cents to nickel
    result = remainder / nickel_to_cents;
    cout << "The change for nickel: "<< result << endl;

    //Get remainder
    remainder = ((remainder / nickel_to_cents) - result) * nickel_to_cents;

    //Convert the cents to penny
    result = remainder / penny_to_cents;
    cout << "The change for penny: "<< result << endl;

    cout << "\nThis how to use the modulo operator" << endl;

    //Computation
    int mod_result {0};
    int mod_remainder {0};

    //Convert cents to dollar
    mod_result = user_amount_cents / dollar_to_cents;
    cout << "The change for dollar: " << mod_result << endl;

    //Get remainder 92
    mod_remainder = user_amount_cents % dollar_to_cents;

    //Convert cents to quarter 3
    mod_result = mod_remainder / quarter_to_cents;
    cout << "The change for quarter: " << mod_result << endl;

    //Get remainder 17
    mod_remainder = mod_remainder % quarter_to_cents;

    //Convert cents to dime 1
    mod_result = mod_remainder / dime_to_cents;
    cout << "The change for dime: " << mod_result << endl;

    //Get remainder 7
    mod_remainder %= dime_to_cents;
    
    //Convert cents to nickel
    mod_result = mod_remainder / nickel_to_cents;
    cout << "The change for nickel: " << mod_result << endl;

    //Get remainder 2
    mod_remainder %= nickel_to_cents;

    //Convert cents to penny
    mod_result = mod_remainder / penny_to_cents;
    cout << "The change for penny: " << mod_result << endl;
    return 0;
}