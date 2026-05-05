#include <iostream> 
using namespace std;

inline bool is_digit(char n ){
    if (n >= '0' && n <= '9' ){
    return true;
}

    else {
        return false;
}
}
int main (){
    cout << "Enter a character " << is_digit ('4')<<endl;
    return 0;
}