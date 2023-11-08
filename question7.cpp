#include <iostream>
using namespace std;

int main() {
    int daysLate;
    string bookType;
    double lateFee = 0.0;

    // Get input from the user
    cout << "Enter the number of days late: ";
    cin >> daysLate;
    cout << "Enter the type of book (regular, children's, reference): ";
    cin >> bookType;

    // Calculate the late fee based on the number of days late and the book type
    if (bookType == "regular") {
        if (daysLate <= 7) {
            lateFee = daysLate * 0.50;
        } else {
            lateFee = 7 * 0.50 + (daysLate - 7) * 1.00;
        }
    } else if (bookType == "children's") {
        if (daysLate <= 5) {
            lateFee = daysLate * 0.25;
        } else {
            lateFee = 5 * 0.25 + (daysLate - 5) * 0.50;
        }
    } else if (bookType == "reference") {
        lateFee = daysLate * 2.00;
    } else {
        cout << "Invalid book type entered." << endl;
        return 0;
    }

    // Display the late fee
    cout << "The late fee for the " << bookType << " book is $" << lateFee << endl;

    return 0;
} 