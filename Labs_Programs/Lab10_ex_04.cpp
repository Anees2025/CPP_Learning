#include <iostream>
using namespace std;
void display(int n[][4], int row, int col){
    for (int i = 0; i < row ; i++){
        for (int j = 0; j < col ; j++){
        cout<< n[i][j] <<" ";
        }
    }cout <<endl;
}
int main (){
    int num[3][4] = {
        {11,12,13,14},
        {21,22,23,24},
        {31,32,33,34}
    };
    display(num,3,4);
    return 0;
}