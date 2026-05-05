 
#include"iostream"
using namespace std;
void zero_smaller(int&arg1, int& arg2){
if (arg1>arg2){
arg2=0;
}
else {
arg1=0 ;;
}
}
int main (){
int x,y;
cout <<"Enter two number:";
cin >>x>>y;
zero_smaller(x,y);
cout << "value for x is : " <<x <<endl;
cout << "value for y is : " <<y << endl;
return 0 ;
}