/*Write a program that prints the square of the numbrrs from
 1 to 20 using a two-column formate using for loop */

#include<iostream>
using namespace std;
int main (){
    int sqr;
    cout << " Enter a number to print square ";
    cin >> sqr;
    for ( sqr ; sqr <= 20; sqr++)
    cout << sqr<<"^2 = "<<sqr*sqr<<endl;
    return 0 ;

}
