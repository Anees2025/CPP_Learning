#include "iostream"
#include "cstdlib"
using namespace std;

int main () {
  string name;
  string command;

  cout << "Enter your name : ";
  getline(cin, name );
  command = " echo Hello " + name;
  system(command.c_str()); 
  return 0;
}
