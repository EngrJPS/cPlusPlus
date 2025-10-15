/*
Challenge: Student Score Manager

Goal:
Write a program that manages a single student’s score using both pointers and references.

Requirements:

Create a function void updateScore(int* ptr, int newScore)

It should use a pointer to update the student’s score.

Create another function void addBonus(int& ref, int bonus)

It should use a reference to add some bonus points to the score.

In main():

Declare an integer score = 75;

Call updateScore() to set the score to 90.

Then call addBonus() to add 5 more points.

Finally, print the final score.
*/
#include <iostream>
#include <string>

using namespace std;

void updateScore(int *num, int newScore);

void addBonus(int &num, int addNum);

int main(){
    int score{75};
    int *ptr_score{&score};

    cout << score << endl;

    updateScore(ptr_score, 90);

    cout << score << endl;

    addBonus(*ptr_score, 5);
    
    cout << score << endl;
    return 0;
}

void updateScore(int *num, int newScore){
    *num = newScore;
}

void addBonus(int &num, int bonus){
    num += bonus;
}