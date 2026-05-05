/*Write a program that follows the sequence use the appropriate date type that could deal with fractional
inputs:
Enter temperature in Fahrenheit: 100
100 Fahrenheit = 37.7778 Celsius
Enter temperature Celsius: 37.5
73.5 Celsius = 99.5 Fahrenheit
Hint: F = 32 + C * 5/9*/
#include<iostream>
using namespace std;
int main ()
{float F,C;
    cout << "Enter temperature in Fahrenheit:"; cin >> F;
    C = 5.0/9.0 * (F-32);
    cout <<F<< " Fahrenheit ="<<C<<" Celsius"<<endl;
    cout << "Enter temperature Celsiius:"; cin >> C ;
    F = 32 + (C*9.0/5.0);
    cout <<C<< "Celsius=" <<F << "Fahrenheit"<<endl;
    return 0;

}
