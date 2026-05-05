/*
    • Input attendance for 7 days (Present/Absent) for each student.
    • Store data using arrays.
    • Calculate attendance percentage.
    • Display students with less than 75% attendance.*/
#include <iostream>
#include <string>
using namespace std;

int main() {

    // ── Step 1: Get number of students FIRST
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();  // clear buffer before getline

    // ── Step 2: Declare arrays AFTER n is known
    string name[n];
    string attendance[n][7];  // "P" or "A" for each day

    // ── Step 3: Input student names
    for (int i = 0; i < n; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, name[i]);
    }

    // ── Step 4: Input attendance for each student, each day
    for (int i = 0; i < n; i++) {
        cout << "\nEntering attendance for: " << name[i] << "\n";

        for (int j = 0; j < 7; j++) {
            cout << "  Day " << j + 1 << " (P/A): ";
            cin >> attendance[i][j];

            // Input validation — only accept P or A
            while (attendance[i][j] != "P" && attendance[i][j] != "A") {
                cout << "  Invalid! Enter P or A only: ";
                cin >> attendance[i][j];
            }
        }
        cin.ignore();  // reset buffer before next getline
    }

    // ── Step 5: Calculate and display results
    cout << "\n======= ATTENDANCE REPORT =======\n";
    cout << "Name\t\tPresent\tPercent\tStatus\n";
    cout << "---------------------------------\n";

    bool anyLow = false;  // track if anyone is below 75%

    for (int i = 0; i < n; i++) {

        // Count present days
        int presentDays = 0;
        for (int j = 0; j < 7; j++) {
            if (attendance[i][j] == "P")
                presentDays++;
        }

        // Calculate percentage
        float percentage = (presentDays / 7.0) * 100;
        string status = (percentage < 75) ? "⚠ LOW" : "OK";

        cout << name[i]      << "\t\t"
             << presentDays  << "/7\t"
             << percentage   << "%\t"
             << status       << "\n";

        if (percentage < 75) anyLow = true;
    }

    // ── Step 6: Display low attendance students separately
    cout << "\n--- Students Below 75% Attendance ---\n";

    if (!anyLow) {
        cout << "All students meet the attendance requirement.\n";
    } else {
        for (int i = 0; i < n; i++) {
            int presentDays = 0;
            for (int j = 0; j < 7; j++) {
                if (attendance[i][j] == "P")
                    presentDays++;
            }
            float percentage = (presentDays / 7.0) * 100;
            if (percentage < 75)
                cout << "⚠ " << name[i] << " - " << percentage << "%\n";
        }
    }

    cout << "==================================\n";
    return 0;
}