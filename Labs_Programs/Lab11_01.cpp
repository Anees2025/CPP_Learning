#include <iostream>
#include <string>
using namespace std;

int main(){
    string text = "every action that you take is the vote for the person you wish to become aaaa";
    int count = 0;
    for (int i=0 ; i< text.length(); i++){
        if (text[i]== 'a'){
            count++;
        }
    }
    cout <<"the character 'a' appears " << count <<" times." <<endl;
}