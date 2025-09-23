// Section 11
// Challenge 
/*
    Recall the challenge from Section 9 below.
    Your challenge for section 11 is to modularize your solution to the Section 9
    challenge by refactoring your solution so that it uses uses functions.
    
    You decide how to modularize the program.
    you can use my solution which is included in this file, or modularize your solution.
    
    Here are a few hints:
        - Create functions for each major function
        - Keep the functions small
        - Remember the Boss/Worker analogy
        - Keep the vector declaration in the main function and pass the vector object
          to any function that requires it

        DO NOT move the vector object outside main and make it a global variable.
    
        - You can start by defining a function that displays the menu
        - You can then define a function that reads the selection from the user and returns it in uppercase
        - Create functions for each menu option
        - Create functions that display the list of numbers, calculates the mean and so forth
        
    Take it one function at a time and take your time.
    If you get frustrated, take a break -- this isn't as easy as it looks the first time you do it!
    
    Finally,  don't forget to use function prototypes!
    
    Good luck -- I know you can do it!
*/
/*    
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.
    
    Your program should display a menu options to the user as follows:
    
    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:
    
The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space. 
For example, [ 1 2 3 4 5 ]
      
If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list 
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!

Good luck!

*/

#include <iostream>
#include <vector>
using namespace std;

void print_vectors(const vector<int> vecs);

void add_number_vector(vector<int> &vecs);

void quit_user(bool &choice);

int compare_smallest_num(const vector<int>);

int compare_largest_num(const vector<int>);

double list_average(const vector<int>);

void user_choices(char choice, vector<int> &vecs, bool &userChoice);

void clear_list(vector<int> &vecs);

int main(){

    bool isUserQuit {false};
    char userChoice{};
    vector<int> vec {};

    do{
        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "C - Clear the list" << endl;
        cout << "Q - Quit" << endl;

        cout << "\nSelect from the choices: " ;
        cin >> userChoice;
        user_choices(userChoice, vec, isUserQuit);

    }while(!isUserQuit);
    
    cout << "Thank you!" << endl;
    return 0;
}

void print_vectors(vector<int> vecs){
    if(!vecs.empty()){
        cout << "[ ";

        for(auto num : vecs){

            cout << num << " ";
        }

        cout << "]" << endl;
    }else{
        cout << "[] - the list is empty" << endl;
    }
}

void add_number_vector(vector<int> &vecs){
    int num{};
    cout << "Please add a number: ";
    cin >> num;

    vecs.push_back(num);

    for(int i{0}; i < vecs.size(); i++){
        for(int j{i}; j < vecs.size(); j++){
            if(i != j){
                if(vecs[i] == vecs[j]){
                    vecs.erase(vecs.begin() + j);
                    cout << "Duplicates are not allowed" << endl;
                }
            }
        }
    }

}

void quit_user(bool &choice){
    choice = true;
}

int compare_smallest_num(vector<int> vecs){
    int min{0};
    min = vecs[0];

    for(auto num : vecs){
    if(num < min){
            min = num;
        }
    }

    return min;
}

int compare_largest_num(vector<int> vecs){
    int max{0};
    max = vecs[0];

    for(auto num : vecs){
        if(num > max){
            max = num;
        }
    }
    return max;
}

double list_average(vector<int> vecs){
    int sum{};

    for(auto num:vecs){
        sum += num;
    }

    return static_cast<double>(sum)/vecs.size();
}

void user_choices(char choice, vector<int> &vecs, bool &userChoice){

    if(choice == 'P' || choice == 'p'){
        print_vectors(vecs);
    }else if(choice == 'Q' || choice == 'q'){
        quit_user(userChoice);
    }else if(choice == 'A' || choice == 'a'){
        add_number_vector(vecs);
    }else if(choice == 'S' || choice == 's'){
        if(!vecs.empty()){
            cout << "The smallest number is " << compare_smallest_num(vecs) << endl;
        }else{
            cout << "Unable to determine the smallest number - list is empty" << endl;
        }
    }else if(choice == 'L' || choice == 'l'){
        if(!vecs.empty()){
            cout << "The largest number is " << compare_largest_num(vecs) << endl;
        }else{
            cout << "Unable to determine the largest number - list is empty" << endl;
        }
    }else if(choice == 'M' || choice == 'm'){
        cout << "The average of the list is: " << list_average(vecs) << endl;
    }else if(choice == 'C' || choice == 'c'){
        clear_list(vecs);
    }else{
        cout << "Wrong choice - please try again" << endl;
    }
}

void clear_list(vector<int> &vecs){
    if(!vecs.empty()){
        vecs.clear();
        cout << "The list is cleared" << endl;
    }else{
        cout << "List is already empty - no need to clear" << endl;
    }
}