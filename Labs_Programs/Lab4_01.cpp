 /*Write a program that takes two integer numbers from a user and shows the answers after performing
bitwise AND, OR and XOR on these two Numbers:
Your output should be like this. Solve these on a paper to verify the answers.
Enter 1st Number: 100
Enter 2nd Number: 200
100 & 200 = 64
100 | 200 = 236
100 ^ 200 = 172
Press any key to continue*/


#include<iostream>
using namespace std;
int main ()
{
    int num1,num2;
    cout <<"Enter two integer Numbers"<<endl; cin>>num1>>num2;
    cout <<num1<< "&"<<num2<< "="<< (num1&num2)<<endl;
    cout <<num1<< "|"<<num2<< "="<< (num1|num2)<<endl;
    cout <<num1<< "^"<<num2<< "="<< (num1^num2)<<endl;
    return 0 ;



}