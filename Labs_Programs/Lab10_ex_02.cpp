#include <iostream>
using namespace std;
int main (){
    int marks[5];
    int sum = 0;  

    int avg = 0;
    for (int i=0; i<5; i++){
        cout <<"Enter Marks of subject: "<<i+1<<":";
        cin >> marks[i];
          }
    for (int i = 0 ; i<=5; i++){
        sum = sum + marks[i];        
    }
    avg = sum / 5;
    cout << "Your average is:"<< avg<<endl;
}
