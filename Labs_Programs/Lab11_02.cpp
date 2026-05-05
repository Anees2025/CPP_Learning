#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string input;
    string result= "";
    cout <<"Enter the text: ";
    getline(cin,input);
    
    for (int i = 0; i < input.length(); i++){
        if ((input[i] >='A' && input[i] <='Z') || (input[i] >='a' && input[i] <='z'))
        result += input[i];
    }
    cout <<"Cleaned text: " << result << endl;
    return 0;
}