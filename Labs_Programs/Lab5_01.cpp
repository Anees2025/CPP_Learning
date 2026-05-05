/*Write a program to ask the user to enter age
• if the age is less than 0 or above 160 display "You're lying - you CANNOT be that age.
• if the age is in between 35 to 80 display “You can save money on your car insurance”
• if the age is in between 0 to 34 or 81 to 160 display "Sorry, we don't have any deals for you
today!"*/

#include<iostream>
using namespace std ;
int main () {
    int age ;
    cout << " Enter your age : "<<endl;
    cin >> age ;
    if ( age < 0 || age  > 160 )
        cout << "you are lying- You CANNOT be that age "<<endl;

    else if (age > 35 &&  age < 80)
    cout << " you are saving mony on your car insureance "<<endl;
    else if ((age >=0 && age <= 34)  || (age >= 81 && age  <=160 ))
    cout <<" sorry we don't have deal for you today! " << endl ;
    return 0 ;

}