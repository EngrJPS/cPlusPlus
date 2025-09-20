#include <iostream>
using namespace std;
// In this exercise you will create a program that will be used to automatically print a grocery list. Most weeks the grocery list is the same and so you may begin by declaring the function prototype print_grocery_list which has the default argument values:

void print_grocery_list(int apples = 3, int oranges = 7, int mangos = 13);

void modify_grocery_list(){
    print_grocery_list();
    print_grocery_list(5);
    print_grocery_list(7, 11);
}

int main(){

    modify_grocery_list();
    return 0;
}

void print_grocery_list(int apples, int oranges, int mangos){
    cout << "apples is: " << apples << "\n" << "oranges is: " << oranges << "\n" << "mangos is: " << mangos << "\n" << endl;
}