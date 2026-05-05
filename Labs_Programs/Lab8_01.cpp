#include<iostream>
using namespace std;

// Changed to void because we are printing, not returning a number
void evenORodd(int x); 

int main () {
    int Num;
    
    while(true) {
        cout << "Enter a Number (0 to quit): "; 
        cin >> Num; // Moved INSIDE the loop

        if (Num == 0) {
            cout << "Good bye" << endl;
            break;
        }

        evenORodd(Num);
        cout << endl; // Added for a clean new line
    }
    
    return 0;
}

void evenORodd(int x) {
    if (x % 2 == 0) { // Used == for comparison
        cout << "Even";
    } else {
        cout << "Odd";
    }
}