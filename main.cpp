#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {
    int count = 10;
    string namesArray[count];
    string departmentArray[count];
    string gradesArray[count];
    string idArray[count];
    for (int i = 0; i < 10; ++i) {


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
        int average = 0;
        for (int j = 0; j < 8; ++j) {

            cin >> gradeI;
            average += gradeI;
        }
        average = average / 8;
        switch (average) {
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


        namesArray[i] = name;
        departmentArray[i] = department;
        idArray[i] = id;
        gradesArray[i] = grade;
    }
    ofstream file("file.txt");
    for (int i = 0; i < count; ++i) {

        file << "Name: " << namesArray[i] << endl;
        file << "Department: " << departmentArray[i] << endl;
        file << "Grade" << gradesArray[i] << endl;
        file << "Id" << idArray[i] << endl;
    }
    return 0;
}