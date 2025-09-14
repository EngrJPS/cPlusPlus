#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    vector <string> serafinFam {"Jimson", "Nikka", "Monica", "Ismael" };

    for(string serafin : serafinFam){
        cout << serafin << endl;
    }
    return 0;
}