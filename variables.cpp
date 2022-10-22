#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variable declaration
    int myNum; // Whole number without decimal
    int age, year;
    string myName, phone;
    char gender;
    bool present;
    float temp;
    double bankBalance;

    // Variable initialization
    myNum = 2;
    age = 25;
    year = 2022;
    gender = 'M';
    phone = "0710240708";
    present = true;
    temp = 36.01;
    bankBalance = 2000.123456;

    // Display variable data
    cout << "*********MY PROFILE*******";
    cout << "Number:" << myNum << endl;
    cout << "Age:" << age << endl;
    cout << "Gender:" << gender << endl;
    cout << "Current Year:" << year << endl;
    cout << "Phone:" << phone << endl;
    cout << "Attended class:" << present << endl;
    cout << "My temperature:" << temp << endl;
    cout << "My current bank balance:" << bankBalance << endl
         << endl;
}