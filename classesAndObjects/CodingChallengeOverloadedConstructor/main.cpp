#include "Dog.h"
#include <iostream>
#include <string>

using namespace std;

int main(int, char**){
    
    Dog fido{"Fido", 4};
    Dog spot{"Spot", 5};

    fido.dog_bark();
    spot.dog_bark();

    cout << "It's fido's birthdate. He's a year older now" << endl;
    fido.set_age(5);
    cout << fido.get_name() << "'s age is " << fido.get_age() << endl;

    cout << "Spot is 2 years older than fido" << endl;
    spot.set_age(7);
    cout << spot.get_name() << "'s age is " << spot.get_age() << endl;

    cout << "Both dogs agrees!" << endl;

    cout << "Fido: ";
    fido.dog_bark();
    
    cout << "Spot: ";
    spot.dog_bark();
    return 0;
}
