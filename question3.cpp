#include <iostream>
using namespace std;

int main() {
    string fullName, course;
    int score;

    // Get input from the user
    cout << "Enter the full name of the student: ";
    getline(cin, fullName);

    cout << "Enter the course: ";
    getline(cin, course);

    cout << "Enter the score: ";
    cin >> score;

    // Determine the grade using switch-case
    string grade;
    switch(score) {
        case 70 ... 100:
            grade = "A";
            break;
        case 60 ... 69:
            grade = "B";
            break;
        case 50 ... 59:
            grade = "C";
            break;
        case 40 ... 49:
            grade = "D";
            break;
        case 0 ... 39:
            grade = "F";
            break;
        default:
            grade = "Invalid score";
            break;
    }

    // Output the full name, course and grade
    cout << "Full Name: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}