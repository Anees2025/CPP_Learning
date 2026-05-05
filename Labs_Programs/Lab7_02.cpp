#include <iostream>
using namespace std;

int main() {
    int N1, N2;

    while (true) {
        cout << "Enter first number: ";
        cin >> N1;
        cout << "Enter second number (Enter 1 to quit): ";
        cin >> N2;

        // Check the exit condition immediately after N2 is entered
        if (N2 == 1) {
            cout << "Exiting program..." << endl;
            break; 
        }

        // Perform the subtraction if we didn't break
        cout << "Result: " << N1 - N2 << endl;
        cout << "--------------------------" << endl;
    }

    return 0;
}