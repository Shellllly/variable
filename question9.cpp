#include <iostream>
using namespace std;

int main() {
    int age;
    string movie_type;
    double ticket_price = 0.00;

    // Get input from the user
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the movie type (regular or 3D): ";
    cin >> movie_type;

    // Calculate ticket price based on age and movie type
    if (age < 16) {
        if (movie_type == "regular") {
            ticket_price = 1000.00; // 1000 Ksh
        } else if (movie_type == "3D") {
            ticket_price = 1300.00; // 1300 Ksh
        }
    } else if (age >= 18) {
        if (movie_type == "regular") {
            ticket_price = 1500.00; // 1500 Ksh
        } else if (movie_type == "3D") {
            ticket_price = 1800.00; // 1800 Ksh
        }
    }

    // Display the ticket price in Ksh
    cout << "The ticket price is " << ticket_price << " Ksh" << endl;

    return 0;
}
