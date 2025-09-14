#include <iostream>
using namespace std;

/*
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they
    would like cleaned and provide an estimate such as:

Estimate for carpet cleaning service:
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35

Cost: $110
Tax: 6.6
------------------------
Total estimate: $116.6
This estimate is valid for 30 days
*/

int main(){

// Initialize the constant variables
    const double small_room_cost {25.0};
    const double large_room_cost {35.0};
    const double tax_rate {0.06};
    const int validity_days {30};

// Prompt greetings to the user
    cout << "Welcome to Frank's Carpet Cleaning Services!" << endl;

// Prompt the user for the number of small rooms and large rooms they would like cleaned
    cout << "How many rooms would you like cleaned for small rooms and large rooms? ";
// Assign it in the variables
    double user_smallRoom_req;
    double user_largeRoom_req;
    cin >> user_smallRoom_req >> user_largeRoom_req;

// Initialize literal variables
    double cost_per_smallRoom {small_room_cost * user_smallRoom_req};
    double cost_per_largeRoom {large_room_cost * user_largeRoom_req};
    double total_cost_room {cost_per_largeRoom + cost_per_smallRoom};
    double cost_tax {total_cost_room * tax_rate};
    double total_cost_with_tax {cost_per_smallRoom + cost_per_largeRoom + cost_tax};


// Diplay the price for small rooms
    cout << "\nPrice per small room: $" << small_room_cost << endl;

// Display the price for large rooms
    cout << "Price per large room: $" << large_room_cost << endl;

// Display tax
    cout << "Total price of cleaning each room: $" << total_cost_room << endl;

    cout << "Total tax to pay: $" << cost_tax << endl;
    cout << "------------------------" << endl;

// Display the total estimate for the cleaning
    cout << "Total estimate for the cleaning: $" << total_cost_with_tax << endl;

// Display the days before estimate will expire
    cout << "This estimation is valid for " << validity_days << endl;

    return 0;
}