#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string fullName;
    string studentNumber;
    string program;
    string yearSection;
    float firstGrading;
    float secondGrading;
    float thirdGrading;
    float average;

    cout << "==========================================\n";
    cout << "              ENTER YOUR INFO             \n";
    cout << "==========================================\n";

    cout << "Enter Full Name: ";
    getline(cin, fullName);

    cout << "\nEnter Student Number: ";
    getline(cin, studentNumber);

    cout << "\nEnter Program (BSIT/BSCpE): ";
    getline(cin, program);

    cout << "\nEnter Year & Section: ";
    getline(cin, yearSection);

    cout << "\nEnter First Grading Score: ";
    cin >> firstGrading;

    cout << "\nEnter Second Grading Score: ";
    cin >> secondGrading;

    cout << "\nEnter Third Grading Score: ";
    cin >> thirdGrading;

    cout << endl;

    cout << "==========================================\n";
    cout << "            STUDENT GRADE REPORT          \n";
    cout << "==========================================\n";

    cout << "Student Name  " << right << "  :  " << right << fullName << endl;
    cout << "Student Number" << right << "  :  " << right << studentNumber << endl;
    cout << "Program       " << right << "  :  " << right << program << endl;
    cout << "Year & Section" << right << "  :  " << right << yearSection << endl;

    cout << "------------------------------------------\n";
    cout << "GRADING COMPONENT                SCORE    \n";
    cout << "------------------------------------------\n";

    cout << "First Grading " << right << "                   " << fixed << setprecision(2) << firstGrading << endl;
    cout << "Second Grading" << right << "                   " << fixed << setprecision(2) << secondGrading << endl;
    cout << "Third Grading " << right << "                   " << fixed << setprecision(2) << thirdGrading << endl;

    cout << "------------------------------------------\n";
    
    average = (firstGrading + secondGrading + thirdGrading) / 3;

    cout << "Average       " << right << "                   " << fixed << setprecision(2) << average << endl;

    cout << "==========================================\n";
    cout << "  Student Info and Grade Average.   (Jez) \n";
    cout << "==========================================\n";

    return 0;
}
