#include"iostream"
using namespace std;
void  check  (int x){
    if (x%2==0){
        cout << "The number is even:"<< x<<endl;
     }
     else{
        cout << "The Number is odd:"<<x<< endl;
     }
}

int main(){
int test  ;
cout << " Enter number(zero for exit)";
cin >> test;
while (test!=0){
cout << "Enter number(zero for exit)" <<endl;
cin >>test;
cout <<endl;
check(test);
}
return 0 ;
}  
