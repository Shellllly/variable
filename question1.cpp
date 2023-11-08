#include <iostream>
using namespace std;

int main() {
    int age;
    double bankBal;
    string crbStats;
    int customerMonths;

    // capturing customer details from the user
    cout << "Enter your age: ";
    cin >> age;

    cout << "Input your bank balance: ";
    cin >> bankBal;

    cout << "Enter your CRB status (good or bad): ";
    cin >> crbStats;

    cout << "Enter the number of months you have been a customer: ";
    cin >> customerMonths;

    // Checking the loan qualification conditions
    if (age > 25 && bankBal > 75000 && crbStats == "good" && customerMonths > 12) {
        cout << "You are qualified for the loan." << endl;
    } else {
        cout << "Sorry, you do not meet the loan qualification conditions." << endl;
    }

    return 0;
}