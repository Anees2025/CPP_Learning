/*ATM Simulation (Conditional Statements + Loops)
Design a simple ATM system.
Tasks:
    • Ask user to enter PIN (3 attempts allowed).
    • Display menu:
        1. Balance Inquiry
        2. Deposit
        3. Withdraw
        4. Exit
    • Perform operations using conditions.
    • Ensure withdrawal does not exceed balance*/ 
    #include<iostream>
    using namespace std;
    int main (){
        int correctPIN = 1337;
        float balance = 10000.0;
        int enterPIN;
        int attempts = 0 ;
        bool unlocked = false;
        //PIN verification 3 attemps allowed 
        while (attempts < 3 ){
            cout << "Enter you PIN: ";
            cin >> enterPIN;
            attempts ++ ;
            if (enterPIN == correctPIN){
                unlocked = true;
                cout << "PIN accepted. Welcome\n";
                break;

            }else {
                cout <<  "Wronge PIN. Attempts left: "<< (3- attempts) << "\n";

            }
        }
        
        //Block access if PIN failed 
        if (!unlocked) {
            cout << "Card blocked. Too many wrong attempts. \n ";
            return 0;
        }
        //ATM Menu Loop 
        int choice ;
        do {
            cout << "\n==============ATM MENU================\n";
            cout << "1. Balance Inpuiry:\n";
            cout << "2. Deposit:\n";
            cout << "3. Withdraw:\n";
            cout << "4. exit:\n";
            cout << "Enter choice:\n";
            cin >> choice;
            
            switch (choice) {
                case 1:
                cout << "Your balance is: Rs. " << balance << endl;
            break;
        case 2: {
            float amount;
            cout << "Enter deposit amount: Rs. ";
        cin >> amount;
        if (amount <=0){
            cout <<"Invalid amount.\n";

        }else {
            balance+= amount;
     cout << "Rs. " << amount << "deposited successfully.\n";
    cout << "New balance: Rs. " << balance << endl;
       }
       break;
        }
        
        case 3: {
            float amount;
            cout << "Enter withdrawal amount: Rs. ";
            cin >> amount;
            if (amount <= 0){
                cout << "invalid amount.\n";
            }else if (amount > balance) {
                cout << "insuffiecient balance!\n";
            }else{
                balance -=amount;
                cout <<"Rs. " << amount << "withdrawn successfully.\n";
                cout << "Remaining balance : Rs. " << balance << endl;

            } 
            break;

        }
        case 4:
        cout << "thank you for using the ATM. Goodbye !\n";
        break;
        default: 
        cout<< "Invalid option. Please try again. \n";
    }
} while (choice !=4);
return 0;
    }
