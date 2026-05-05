/*Write a program that takes a Number from user and performs arithmetic shift left and shift right
operations on these numbers:*/
#include <iostream>
using namespace std;
int main() {
    int take_num;
    cout <<"Enter a number:" ; cin >> take_num;

    cout << take_num<< "<< 0" << "="<<(take_num<<0)<<endl;
    cout << take_num<< "<< 2" << "="<<(take_num<<2)<<endl;
    cout << take_num<< "<< 4" << "="<<(take_num<<4)<<endl;
    cout << take_num<< "<< 6" << "="<<(take_num<<6)<<endl;
    cout << take_num<< "<< 8" << "="<<(take_num<<8)<<endl;

    cout <<"Arthimatic Right shift"<<endl ;
    cout << take_num << ">> 0" << "="<<(take_num>>0)<<endl;
    cout << take_num << ">> 2" << "="<<(take_num>>2)<<endl;
    cout << take_num << ">> 4" << "="<<(take_num>>4)<<endl;
    cout << take_num << ">> 6" << "="<<(take_num>>6)<<endl;
    cout << take_num << ">> 8" << "="<<(take_num>>8)<<endl;

return 0;


}