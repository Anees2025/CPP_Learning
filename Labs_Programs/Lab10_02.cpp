#include <iostream>
#include <cmath>
using namespace std;
double avg(double arr[], int sz){
    if (sz <= 0) return 0.0;
    double sum = 0.0;
    for (int i = 0; i< sz; i++){
        sum += arr[i];
    } return sum/sz;
}
double Standard_Daviation(double x[], int n){
    if (n<=1) return 0.0;
    double mean = avg(x,n);
    double sum_sq_diff = 0.0;

    for (int i =0; i<n; i++){
        sum_sq_diff += pow(x[i] -mean, 2);
    }
    return sqrt(sum_sq_diff/(n-1));
}
int main(){
    double number[]= {10.0,12.0,23.0,25.0,16.0,24.0,21.0,16.0};
    int n = sizeof(number) / sizeof(number[0]);
    /*for (int i = 0; i<7; i++ ){
        cin >> number[i];
    }*/
   //  double sd = Standard_Daviation(number,n);
    cout <<"the standard daviation is : "<<Standard_Daviation(number,n) << endl;
    return 0;
}