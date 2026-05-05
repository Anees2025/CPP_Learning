//Recursion Functions
/*The Recursion Function calls itself Untill solve 
smaller version of same problem*/
#include <iostream>

int factorial(int n) {
    // 1. Base Case: factorial of 0 or 1 is 1
    if (n <= 1) {
        return 1;
    }
    // 2. Recursive Step: n * factorial of (n-1)
    return n * factorial(n - 1);
}

int main() {
    std::cout << "Factorial of 5 is: " << factorial(4) << std::endl;
    return 0;
}