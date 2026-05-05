#include <iostream>
using namespace std;
int avg(double a[], int size){
    int sum = 0 ;
     for (int i =0; i< size; i++){
        sum +=a[i];
    }
    return sum/size;
}
int main(){
    double marks[]={40,45,49,40};
    cout << avg(marks,4);
    return 0;
}