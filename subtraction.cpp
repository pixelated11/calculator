#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    const string programName = "Addition calculator";
    cout << "Welcome to the program: " << programName << endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "Please enter the x that will be subtracted with y" << endl;
    int x, y;
    int sum;
    cin >> x;
    cout << "Enter the Y.";
    cin >> y;
    cout << "Calculating difference... (IF ANY NUMBER EXCEEDS 32-BIT SIGNED INTEGER, PROGRAM WILL BUG OUT.)";
    sum = x + y;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "Difference is " << sum << endl;
    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}
