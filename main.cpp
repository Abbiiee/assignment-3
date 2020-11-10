#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    string department;
    char departmentC;
    string grade;
    int gradeI;
    string id;


    cout << "Enter Your name:\n";
    cin >> name;

    cout << "Enter Your department:\n";
    cin >> departmentC;
    switch (departmentC) {
        case 'A':
            department = "Control";
            break;
        case 'C':
            department = "Computer";
            break;
        case 'T':
            department = "Telecommunication";
            break;
    }

    cout << "Enter Your grade:\n";
    cin >> gradeI;
    switch (gradeI) {
        case 100 ... 90:
            grade = "A";
            break;
        case 90 ... 80:
            grade = "B";
            break;
        case 80 ... 70:
            grade = "C";
            break;
        case 60 ... 50:
            grade = "D";
            break;
        default:
            grade = "F";
            break;
    }

    cout << "Enter Your id:\n";
    cin >> id;

    cout << "Name: " << name << endl;
    cout << "Department: " << department << endl;
    cout << "Grade" << grade << endl;
    cout << "Id" << id << endl;

}