#include<iostream> 
using namespace std;

int cube (int& x ){
    return x*x*x;// This value returned by funtion should be the answer 
}
int main (){
    int n=1;
    while (n!=0){
        cout <<"Enter a Number (0) for exit: "; cin >> n;
        cout <<"\tcube(" << n << ")="// in programing the input is called argument 
        << cube(n) << endl; //This is call of funtion 

    }
    return 0;
}

/*
passed by value mean the variable value is copy to next funtion 

passed by reference mean both variable sharing same memory if one
change value in memory the change effect the second variable because
 both are getting value from same address

passed by address(pointer) mean giving a physical address of variable
 value located in ram it is usually giving by * or & operator in pointer
  giving a GPS coordinates similar to passed by referance 
*/
