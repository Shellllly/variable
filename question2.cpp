#include <iostream>
using namespace std;

int main() {
    string fullName, course;
    int score;

    // Get input from the user
    cout << "Student Full name: ";
    getline(cin, fullName);

    cout << " Student Course: ";
    getline(cin, course);

    cout << "Student Score: ";
    cin >> score;

    // Determine the grade using the scores given
    string grade;
    if (score >= 70) {
        grade = "A";
    } else if (score >= 60) {
        grade = "B";
    } else if (score >= 50) {
        grade = "C";
    } else if (score >= 40) {
        grade = "D";
    } else if (score >= 0) {
        grade = "F";
    } else {
        grade = "Invalid score";
    }

    // Output the full name, course, and grade
    cout << "Full Name: " << fullName << endl;
    cout << "Course: " << course << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}