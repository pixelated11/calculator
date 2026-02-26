#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

int main() {
    const string programName = "Division calculator";
    cout << "Welcome to the program: " << programName << endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "Please enter the x that will be divided with y" << endl;
    int x, y;
    int sum;
    cin >> x;
    cout << "Enter the y." << endl;
    cin >> y;
    cout << "Calculating final results..." << endl;
    sum = x / y;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout << "Final result: " << sum << endl;
    cout << "\nPress Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}
