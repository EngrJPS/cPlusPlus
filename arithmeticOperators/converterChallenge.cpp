#include <iostream>
using namespace std;

int main(){

    /*
    Convert a Peso to dollar
    */

    // The value of USD per PESO
    const double PESO_TO_DOLLAR {0.018};
    
    // Conversion result
    double convertResult {0};

    cout << "Enter PHP money: ";
    double pesoCurrency {0};
    cin >> pesoCurrency;
    convertResult = PESO_TO_DOLLAR * pesoCurrency;

    cout << "From PHP " << pesoCurrency << " to USD " << convertResult << endl;

    return 0;
}
