#include <iostream>
using namespace std;

struct Student
{
    string name;
    string course;
    int year;
    int academicYear;
};


int main (){

    struct Student JP {"Jimson", "Humanities", 2, 2027};

    cout << "The student created is named " << JP.name << " he/she is in the " << JP.course << " " << JP.year << "nd year student in FY" << JP.academicYear << endl;

    struct Student *AK = new Student;
    AK->name = "Armor King";
    AK->course = "Wrestling";
    AK->year = 4;
    AK->academicYear = 2031;

    cout << "The student created is named " << (*AK).name << " he/she is in the " << (*AK).course << " " << (*AK).year << "th year student in FY" << (*AK).academicYear << endl;

    cout << sizeof(JP)<< endl;

    return 0;
}