#include <iostream>
using namespace std;

int main() {
    string username, password;
    string correctUser = "admin";
    string correctPass = "cyber123";
    int attempts = 0;

    while (attempts < 3) {
        cout << "\n=== Secure Login System ===\n";
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        // Check username
        if (username != correctUser) {
            cout << "❌ Invalid Username!\n";
        }
        else {
            // Username correct, now check password
            if (password != correctPass) {
                cout << "❌ Wrong Password!\n";
            }
            else {
                cout << "✅ Access Granted. Welcome Admin!\n";
                return 0; // exit program on success
            }
        }

        attempts++;
        cout << "Attempts left: " << 3 - attempts << endl;
    }

    // If loop finishes
    cout << "\n🚨 Account Locked due to multiple failed attempts!";
    return 0;
}
