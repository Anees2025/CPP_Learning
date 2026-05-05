/*TASK 1:
Assuming there are 7.48052 gallons in one cubic feet, write a program that asks to enter a number of
gallons, and displays the equivalent in cubic feet.
The Format of output should be like this:
Enter Gallons: 10
10 Gallons = 1.3368 Cubic Feet.*/
#include <iostream>
using namespace std;
int main (){
   // int one.cubic.feet = 7.48052 34;

    double Gallon_per_cubic_feet =7.48052;
        double Input_gallon ;
    cout << "Enter the Nuber of Gallons:"<<endl;
    cin >>Input_gallon ;
       Input_gallon = Input_gallon/Gallon_per_cubic_feet;

    cout << " Gallon in_cubic feet :"<<Input_gallon<< endl;
    return 0 ;



}