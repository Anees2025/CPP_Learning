#include <iostream>
#include <stdlib.h>
using namespace std;
void compute( double&, double&, const double& );
int main(){ // tests the computeCircle() function:
double r,a,c; cout << "Enter radius: "; cin >> r;
compute(a, c, r);//we created link of a and c with area and circumference, with computer funtion those both variable shares same value as a and c stored so if any change in c and a effect the main funtion a and c . We used const to tell computer that we will never chage radious in computer funtion it would be only read because we gave value in main funtion 
cout << "Area = " <<a<<", Circumference = " <<c<< endl;
  return 0;
} // end of main
// this function returns the area and circumference of a circle
void compute(double& area, double& circumference,
const double& r){
const double PI = 3.141592653589793;
area = PI*r*r;
circumference = 2*PI*r;
}