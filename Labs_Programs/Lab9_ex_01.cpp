//Inline functions

#include <iostream>
using namespace std;
inline int Max (int  x, int y){
return (x > y) ? x:y;
}
int main(){
    
    cout << "Max (2000,40) " << Max(2000 ,40)<<endl;
    return  0;
}