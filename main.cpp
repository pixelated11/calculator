#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    const string programName = "Basic Calculator";
    const double version = 0.1;
    cout << "Welcome, to my simple program of " << programName << endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "This program will do basic multiplication with numbers using C++." << endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "Loading calculator..." << endl;
    std::this_thread::sleep_for(std::chrono::seconds(5));
    cout << "Loaded" << endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "Starting multiplication calculator..." << endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    int x, y;
    int sum;
    cout << "Type the number in which will be multiplied with: " << endl;
    cin >> x;
    cout << "Type a number in which will be multiplied the previous number: " << endl;
    cin >> y;
    sum = x * y;
    cout << "Processing final value..." << endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "Final value is: " << sum;
    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();
    return 0;
}

