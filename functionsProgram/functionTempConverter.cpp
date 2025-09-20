#include <iostream>
#include <cmath>
using namespace std;

double fahrenheit_to_celsius(double);
double fahrenheit_to_kelvin(double);

int main(){

    double celsius_temp{}, kelvin_temp{}, fahrenheit_temperature{89.0};

    celsius_temp = fahrenheit_to_celsius(fahrenheit_temperature);
    kelvin_temp = fahrenheit_to_kelvin(fahrenheit_temperature);

    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temp << " degrees celsius and " << kelvin_temp << " degrees kelvin.";

    return 0;
}

double fahrenheit_to_celsius(double temp){
    return round((5.0/9.0)*(temp - 32));
}

double fahrenheit_to_kelvin(double temp){
    return round(((5.0/9.0)*(temp - 32)) + 273);
}