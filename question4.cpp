#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    // Get input from the user
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Determining the maximum number using switch-case
    int maxNumber;
    switch(num1 > num2) {
        case true:
            maxNumber = num1;
            break;
        case false:
            maxNumber = num2;
            break;
    }

    // Output the maximum number
    cout << "The maximum number is: " << maxNum << endl;

    return 0;
}