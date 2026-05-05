#include "iostream"
using namespace std;

// Function Prototype
int recursiveSum(int n);

int recursiveSum(int n) {
    // 1. THE BASE CASE
    if (n <= 1) {
        return n; 
    }
    
    // 2. THE RECURSIVE STEP
    // The function calls ITSELF with (n - 1)
    return n + recursiveSum(n - 1);
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    cout << "Sum = " << recursiveSum(number) << endl;

    return 0;
}
