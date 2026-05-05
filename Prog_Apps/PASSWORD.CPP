/*
    • Input a password string.
    • Check:
        ◦ Minimum length (≥ 8)
        ◦ Contains uppercase, lowercase, digit, special character
    • Display strength:
        ◦ Weak / Medium / Strong
*/

#include <iostream>
#include <string>
#include <cctype>   // for isupper, islower, isdigit, ispunct
using namespace std;

int main() {

    string password;

    cout << "========= PASSWORD STRENGTH CHECKER =========\n";
    cout << "Enter your password: ";
    cin >> password;

    // ── Step 1: Declare condition flags
    bool hasUpper   = false;
    bool hasLower   = false;
    bool hasDigit   = false;
    bool hasSpecial = false;
    bool hasLength  = password.length() >= 8;

    // ── Step 2: Loop through every character
    for (int i = 0; i < password.length(); i++) {
        char c = password[i];   // current character

        if (isupper(c))  hasUpper   = true;
        if (islower(c))  hasLower   = true;
        if (isdigit(c))  hasDigit   = true;
        if (ispunct(c))  hasSpecial = true;
    }

    // ── Step 3: Count how many conditions passed
    int score = hasLength + hasUpper + hasLower + hasDigit + hasSpecial;
    //          true=1, false=0 → booleans add up naturally

    // ── Step 4: Display individual checks
    cout << "\n--- Password Analysis ---\n";
    cout << "Length ≥ 8      : " << (hasLength  ? "Y" : "N") << "\n";
    cout << "Uppercase letter: " << (hasUpper   ? "Y" : "N") << "\n";
    cout << "Lowercase letter: " << (hasLower   ? "Y" : "N") << "\n";
    cout << "Digit           : " << (hasDigit   ? "Y" : "N") << "\n";
    cout << "Special char    : " << (hasSpecial ? "Y" : "N") << "\n";
    cout << "Score           : " << score << "/5\n";

    // ── Step 5: Determine and display strength
    cout << "\nPassword Strength: ";

    if (score <= 2) {
        cout << "WEAK\n";
        cout << "Tip: Add uppercase, digits and special characters.\n";
    } else if (score <= 4) {
        cout << " MEDIUM\n";
        cout << "Tip: Add missing character types to make it stronger.\n";
    } else {
        cout << " STRONG\n";
        cout << "Your password meets all security requirements.\n";
    }

    cout << "=============================================\n";

    return 0;
}