#include "Dog.h"
#include <iostream>
#include <string>

std::string Dog::get_name(){
    return name;
}

void Dog::set_name(std::string n){
    name = n;
}

int Dog::get_age(){
    return age * 7;
}

void Dog::set_age(int n){
    age = n;
}

void Dog::dog_bark(){
    std::cout << "Bark!" << std::endl;
}