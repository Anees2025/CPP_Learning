/*Tasks:
    • Define a structure for product (name, price, quantity).
    • Store multiple products in an array.
    • Calculate total bill.
    • Apply discount:
        ◦ 10% if bill > 5000
        ◦ 15% if bill > 10000
    • Display final invoice */ 
#include <iostream>
#include <string>
using namespace std;

struct mix {
    string name;    // ✅ Fix 1: string not char
    int price;
    float quantity;
};

int main() {
    int n;
    cout << "Enter Number of Products: ";
    cin >> n;
    cin.ignore();   // ✅ Fix 2: clear buffer before getline

    mix product[n];
    float totalBill = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter the name of Product: ";
        getline(cin, product[i].name);   // ✅ Fix 2: handles spaces

        cout << "Enter the price of product: ";
        cin >> product[i].price;

        cout << "Enter the quantity of product: ";
        cin >> product[i].quantity;

        cin.ignore();   // ✅ reset buffer after each cin>> before next getline

        totalBill += product[i].price * product[i].quantity;
    }

    // Discount logic — unchanged, yours was correct ✅
    float discountPercentage = 0;

    if (totalBill > 10000)
        discountPercentage = 15;
    else if (totalBill > 5000)
        discountPercentage = 10;

    float discountAmount = totalBill * (discountPercentage / 100);
    float finalBill = totalBill - discountAmount;

    // Display invoice
    cout << "\n========= FINAL INVOICE ==========\n";
    cout << "Product\t\tPrice\tQty\tSubtotal\n";
    cout << "----------------------------------\n";

    for (int i = 0; i < n; i++) {
        float subtotal = product[i].price * product[i].quantity; // ✅ Fix 3: typo
        cout << product[i].name      << "\t\t"
             << product[i].price     << "\t"
             << product[i].quantity  << "\t"
             << subtotal             << "\n";
    }

    cout << "----------------------------------\n";
    cout << "Total Bill     : Rs. " << totalBill << "\n";
    cout << "Discount (" << discountPercentage   // ✅ Fix 4: show percentage
         << "%)    : Rs. " << discountAmount << "\n";
    cout << "Final Bill     : Rs. " << finalBill << "\n";
    cout << "==================================\n";

    return 0;
}