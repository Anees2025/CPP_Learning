// Arrays
#include <iostream>
using namespace std;
void array_fun(int age[]){
    for (int i = 0; i <= 7; i++){
        cout <<"Enter  age: "<< i+1<<" ";
        cin >> age[i];
    }
    cout <<"==============Displaying Values===================\n";
    for (int i=0;i<7;i++){
        cout <<"Age values at index :"<<age[i]<<endl;
    }
}
int main(){
    int x[7];
    array_fun(x);

    return 0;
}

