/*An electricity company calculates bills based on usage.
Tasks:
    • Input units consumed.
    • Apply rates:
        ◦ First 100 units → Rs. 5/unit
        ◦ Next 200 → Rs. 8/unit
        ◦ Above 300 → Rs. 10/unit
    • Add surcharge if bill > 5000.
    • Allow multiple users using loops.
*/
 #include <iostream>
 #include <string>
 using namespace std;

 // Seprate funtion : single responsibility principle 
float calculateBill(float units){
    float bill =0;

    if(units <=100){
        bill = units *5;
             
    }else if (units <= 300){
        bill = (100*5)+((units-100)*8);
    }else {
        bill =(100*5)+(200*8)+((units- 300)*10);
    }
    return bill;
}
int main(){
    char continueChoice;

    do{
        float units;
        // input with validation 
        cout << "\nEnter units consumed ";
        cin>> units;
        if (units <0) {
            cout <<"Invalid input. Units cannot be negative .\n";
            continue; // skip to next iteration 

        }
        // Calculate bill 
        float bill = calculateBill(units);
        // Apply surcharge
        float surcharge = 0;
        if(bill > 5000){
            surcharge = bill*0/10; //10% surcharge 
            cout << "Sircharge applied 10%: Rs."<<  surcharge << endl ;


        } float totalBill = bill + surcharge;
        // Display breakdown 
        cout <<"------------------------------"<<endl;
        cout << " Units consumed : " << units << endl;
        cout << "Base bill       : " << bill  << endl;
        cout << "surcharge       : " << surcharge<< endl;
        cout <<"Total bill       : " << totalBill << endl;
        cout <<"-----------------"<<endl;
        // Ask to continue 
        cout <<" Calculate for another user ?(y/n): ";
        cin >> continueChoice;

    } while (continueChoice == 'y'|| continueChoice == 'Y');
    cout << "Program exited. Thank you. "<< endl;
    return 0;
}

