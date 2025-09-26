#include<iostream>
#include<string>
#include<cstring>

using namespace std;

string reverse_string(const std::string &str) {
    string reversed;
    // Write your code below this line 

    const char *end = str.c_str() + str.length() - 1;
    const char *start = str.c_str();
    
    for(size_t i{0}; i < str.length(); i++){
        reversed.push_back(*end);
        end--;
    }
    // Write your code abocve this line
    return reversed;
}

int main(){

    string input = "Hello, World!";
    cout << reverse_string(input) << endl;
    return 0;
}