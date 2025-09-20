#include <iostream>
#include <string>
#include <typeinfo>

using namespace std;

string print_guest_list(const string guest_list[], int guest_list_size);
void clear_guest_list(string guest_list[], int guest_list_size);

void event_guest_list(){
    string guest_list[] {"Larry", "Moe", "Curly"};
    size_t guest_list_size {3};

    print_guest_list(guest_list, guest_list_size);
    clear_guest_list(guest_list, guest_list_size);
    print_guest_list(guest_list, guest_list_size);
}


int main(){

    event_guest_list();
    return 0;
}

string print_guest_list(const string guest_list[], int guest_list_size){
    string guests{};
    // Can't use range base for loop. Interesting...
    // for(auto guest_name : guest_list){

    // }

    for(int i{0}; i < guest_list_size; i++){
        cout << guest_list[i] << endl;
    }

    return typeid(guest_list).name(); // What is typeid operatpr?
}

void clear_guest_list(string guest_list[], int guest_list_size){
    for(int i{0}; i < guest_list_size; i++){
        guest_list[i] = " ";
    }
}

