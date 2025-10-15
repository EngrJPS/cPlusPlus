/*
Problem Statement
You are given a list of students and their scores in a subject. Your task is to:

Update a student's score using a reference.

Swap the scores of two students using pointers.

Display the updated list of students and scores.

📥 Input
An array of student names (strings).

A corresponding array of scores (integers).

The name of the student whose score needs to be updated and the new score.

The names of two students whose scores need to be swapped.

📤 Output
The updated list of students and their scores.

🔧 Requirements
Use a reference to update the score of a student.

Use pointers to swap the scores of two students.
*/

#include <iostream>
#include <string>
using namespace std;

void updateScore(int &score, int newScore);

void swapScores(string *score1, string *score2);

int main(){
    string students[] {"Alice", "Bob", "Charlie"};
    int scores[] {85, 90, 78};

    cout << "Before the update:" << endl;
    for(auto student : students){
        cout << student << endl;
    }

    for(auto score : scores){
        cout << score << endl;
    }

    updateScore(scores[1], 95);
    swapScores(students, (students + 2));

    cout << "After the update:" << endl;

    for(auto student : students){
        cout << student << endl;
    }

    for(auto score : scores){
        cout << score << endl;
    }
    
    
    return 0;
}

void updateScore(int &score, int newScore){
    score = newScore;
}

void swapScores(string *student1, string *student2){
    string temp{};
    temp = *student1;
    *student1 = *student2;
    *student2 = temp;
}