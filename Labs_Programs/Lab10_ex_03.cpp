// Two dimentional array pass to a funtion
#include <iostream>
using namespace std;
 
int sum(int a[], int n){
    int sum = 0 ;
    for (int i=0; i<n; i++)
    sum +=a[i];
    return sum;
}
int main(){
    int a[] = {11,33,44,55 };
    int size = sizeof(a) /sizeof(int);
    cout << "sum(a,size) =" << sum(a,size) << endl;
    return 0;
}