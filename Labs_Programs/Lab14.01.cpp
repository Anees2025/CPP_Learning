#include <iostream>
#include <cstring>

using namespace std;
class student
{
    private :
    char name[50];
    double gpa ;
    public: 
    student()
    {
        strcpy(name, "");
        gpa= 0;}
        student(char n[], double g)
    { 
        strcpy(name, n);
        gpa=0;
    }
    void get() {
        cout <<"Enter name:";
        cin.getline(name, 50);

        cout << "Enter GPA:";
        cin >> gpa;
        cin.ignore();}
        void show()
        {
            cout << "Name " << name << endl ;
            cout << "GPA" << gpa << endl;
        }
    };
int main (){
    student s1;
    student s2;
    student s3;
    cout << "enter student data:"<<endl;
    s1.get();
    cout <<"enter student 2 data:"<<endl;
    s2.get();
    cout <<"enter student 3 data:"<<endl;
    s3.get();
    cout <<"student 1 DATA:";
    s1.show();
    cout <<"Student 2 data :"<<endl;
    s2.show();

     cout  << " Student 3 data:"<<endl;
     s3.show();
     return 0;




}