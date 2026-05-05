/*TASK 2 :
Create the equivalent of a four-function calculator. The program should ask the user to enter a number,
an operator, and another number. (Use floating point.) It should then carry out the specified
arithmetical operation: adding, subtracting, multiplying, or dividing the two numbers.
• Use a switch statement to select the operation. Finally, display the result. When it finishes the
calculation, the program should ask whether the user wants to do another calculation. The
response can be ‘y’ or ‘n’.
• Some sample interaction with the program might look like this:
Enter <first number> <operator> <second number>: 10 / 3
answer = 3.333333 Do another (y/n)? y
Enter <first number> <operator> <second number>: 12 + 100
answer = 112 Do another (y/n)? n*/
#include<iostream>
using namespace std;
int main (){
    float x,y,result;
    char opr, choice ;

    do{
        cout << "Enter <first number> < Operator> < second number>:";
        cin >> x>>opr>>y;
        switch (opr){
            case '+':
            result = x + y;
            break;
            case '-': 
            result = x-y;
            break;
            case '*':
            result =x*y;
            break;
            case '/':
            result = x/y;
            break;
            default: 
            cout << "Error Invalid operator enterd." << endl ;
        }
         cout << result << endl ;
        cout << " Do another (y/n)?:";
        cin >> choice ;
        cout << endl;
    } while (choice == 'y');
    cout << " Good bye"<< endl ;
    return 0;
}