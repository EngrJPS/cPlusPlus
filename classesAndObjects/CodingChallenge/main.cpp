#include "Dog.h"
#include <iostream>

using namespace std;


int main(int, char**){
    
    Dog my_dog;

    my_dog.set_name("Spot");
    string myDog{my_dog.get_name()};

    my_dog.set_age(3);
    int dogAge{my_dog.get_age()};

    cout << "My dog's name is " << myDog << endl;
    cout << "My dog's age is " << dogAge << endl;
    
    my_dog.dog_bark();
    return 0;
}
