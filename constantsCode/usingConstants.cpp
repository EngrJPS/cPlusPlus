#include <iostream>
using namespace std;

/*
Pseudocode:
    Prompt the user to enter the number of rooms
    Display the number of rooms
    Diplay price per room

    Display cost: (number of rooms * price per room)
    Display tax: (number of rooms * price per room * tax)
    Display total estimate: (number of rooms * price per room) + (number of rooms * price per room * tax)
*/

int main(){

    const double taxRate {0.06};
    const int roomPrice {30};
    const int validDays {30};

    cout << "Enter the number of rooms: ";
    int numRooms;
    cin >> numRooms;

    int roomCost {numRooms * roomPrice};
    double totalTax {numRooms * roomPrice * taxRate};
    double totalCost {roomCost + totalTax};

    cout << "Total cost: $" << roomCost <<  endl;

    cout << "Tax is: $" << totalTax << endl;
    cout << "========================" << endl;
    cout << "Overall cost is: $" << totalCost << endl;
    cout << "This estimate is valid for " << validDays << " days" << endl;
    return 0;
}