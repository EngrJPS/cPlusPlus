#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

string print_guest_list(const string guest1, const string guest2, const string guest3);
void clear_guest_list(string &guest1, string &guest2, string &guest3);

void event_guest_list(){

    string guest_1 {"Larry"};
    string guest_2 {"Moe"};
    string guest_3 {"Curly"};

    print_guest_list(guest_1, guest_2, guest_3);
    clear_guest_list(guest_1, guest_2, guest_3);
    print_guest_list(guest_1, guest_2, guest_3);
    
}

int main (){

    event_guest_list();
    return 0;
}

string print_guest_list(const string guest1, const string guest2, const string guest3){

    cout << guest1 << endl;
    cout << guest2 << endl;
    cout << guest3 << endl;

    string test_1 = typeid(guest1).name(), test_2 = typeid(guest2).name(), test_3 = typeid(guest3).name();
    return test_1 + test_2 + test_3;
}

void clear_guest_list(string &guest1, string &guest2, string &guest3){
    guest1 = " ";
    guest2 = " ";
    guest3 = " ";
}