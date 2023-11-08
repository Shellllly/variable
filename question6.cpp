#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    int timer = 0;
    bool quit = false;

    while (!quit) {
        // Reset the timer
        timer = 0;

        // Display the traffic light
        switch (timer) {
            case 0:
                cout << "Traffic Light: Red" << endl;
                this_thread::sleep_for(chrono::seconds(3)); // Wait for 3 seconds
                timer++;
                break;
            case 1:
                cout << "Traffic Light: Yellow" << endl;
                this_thread::sleep_for(chrono::seconds(2)); // Wait for 2 seconds
                timer++;
                break;
            case 2:
                cout << "Traffic Light: Green" << endl;
                this_thread::sleep_for(chrono::seconds(4)); // Wait for 4 seconds
                timer++;
                break;
            default:
                break;
        }

        // Check if the program should quit
        if (timer > 2) {
            quit = true;
        }
    }

    return 0;
}