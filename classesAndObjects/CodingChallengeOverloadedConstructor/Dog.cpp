#include "Dog.h"
#include <iostream>
#include <string>

Dog::Dog(std::string name_obj, int age_obj){
    name = name_obj;
    age = age_obj;
}

std::string Dog::get_name(){
    return name;
}

void Dog::set_name(std::string n){
    name = n;
}

int Dog::get_age(){
    return age;
}

void Dog::set_age(int a){
    age = a;
}

void Dog::dog_bark(){
    std::cout << "Woof!" << std::endl;
}