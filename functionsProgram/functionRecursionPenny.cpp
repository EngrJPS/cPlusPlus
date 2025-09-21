#include <iostream>
#include <iomanip>

using namespace std;

double penny_double(int days, double penny = 0.01);

void amount_accumulated(){
    double total_amount{};

    total_amount = penny_double(25);

    cout << "The total amount of penny saved: " << setprecision(10) << total_amount;

}

int main(){
    amount_accumulated();
    return 0;
}

double penny_double(int days, double penny){

    if(days <= 1){
        return penny;
    }
    days--;
    return penny_double(days, penny*2);

}