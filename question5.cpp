#include <iostream>
using namespace std;

int main() {
    int choice;
    bool quit = false;

    while (!quit) {
        // Displaying the menu
        cout << "Menu:" << endl;
        cout << "1. Calculate the area of a circle" << endl;
        cout << "2. Calculate the area of a rectangle" << endl;
        cout << "3. Calculate the area of a triangle" << endl;
        cout << "4. Quit" << endl;

        // Get the user's choice
        cout << "Enter your choice: ";
        cin >> choice;

        // switch-case
        switch (choice) {
            case 1: {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                double area = 3.14159 * radius * radius;
                cout << "The area of the circle is: " << area << endl;
                break;
            }
            case 2: {
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                double area = length * width;
                cout << "The area of the rectangle is: " << area << endl;
                break;
            }
            case 3: {
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                double area = 0.5 * base * height;
                cout << "The area of the triangle is: " << area << endl;
                break;
            }
            case 4:
                quit = true;
                break;
            default:
                cout << "Invalid choice." << endl;
                break;
        }
    }

    return 0;
}