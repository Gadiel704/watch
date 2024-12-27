#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace chrono;

void displayMenu() {
    cout << "Simple Stopwatch\n";
    cout << "Press Enter to start and stop the stopwatch.\n";
    cout << "Press Enter again to see the elapsed time.\n";
}

int main() {
    displayMenu();
    cin.ignore(); // Wait for the user to press Enter

    // Start the stopwatch
    auto start = high_resolution_clock::now();
    cout << "Stopwatch started. Press Enter to stop.\n";
    cin.ignore();

    // Stop the stopwatch
    auto stop = high_resolution_clock::now();
    cout << "Stopwatch stopped. Press Enter to display the elapsed time.\n";
    cin.ignore();

    // Calculate elapsed time
    auto duration = duration_cast<seconds>(stop - start);
    cout << "Elapsed time: " << duration.count() << " seconds.\n";

    return 0;
}
