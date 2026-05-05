/*Write a program to ask the student "What year student are you? Give them the choice to enter value “1
2 3 4”. Then ask the student to enter GPA . Identify which students will graduate and which will not
graduate according to these conditions.
• if gpa is greater than or equal to 2.5 and year greater than or equal to '4' he/she will graduate
• if year is less than '4' or gpa is less than 2.5 he/she will not graduate*/
#include<iostream>
using namespace std ;
int main ()
{
    int y ;
    float  GPA ;
    cout << " What year student are you? \n1)year 1 \n2)year 2 \n3)year 3\n4)year 4 "<<endl;
    cin >> y;
    cout << " Enter your GPA "<<endl ;
    cin >> GPA ;
    if ( GPA >= 2.5 && y >= 4 )
    cout << " Congratulation you will graduate "<< endl ;
    else if ( y < 4 || GPA < 2.5)
    cout << " Good luck for the next time "<< endl;
    return 0 ;


    
}