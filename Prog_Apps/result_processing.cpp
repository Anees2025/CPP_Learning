/*Q1. Student Result Processing System (Arrays + Conditionals)
A university wants to automate student result processing.
Tasks:
    • Input marks of N students in 3 subjects using arrays.
    • Calculate total and average marks for each student.
    • Assign grades based on conditions (e.g., A, B, C, Fail).
    • Display:
        ◦ Highest scorer
        ◦ Number of students who passed/failed*/

#include<iostream>
#include <string>
using namespace std;
    //Funtion assining grade 
    string assignGrade(float avg) { 
        if (avg>= 80) return "A";
        else if (avg >= 65) return "B";
        else if (avg >=50) return "C";
        else return "Fail";
    }
    int main (){
        int n ;
        cout << "Enter number of students:";
        cin >> n ;
        
        //Arrays to store data 
        string names[n];
        int marks [n][3];    // 3 subject per student 
        float totals [n];
        float averages [n];
        string grades [n];

        // Input marks 
        for (int i = 0 ; i < n; i++) {
            cout << "\nEnter name of student " << i +1 << ": ";
            cin >> names[i];
            totals[i] = 0;

            for (int j = 0; j < 3; j++){
                cout << "Enter marks for subject " <<j+1 <<": ";
                cin >> marks[i][j];
                totals[i] +=marks[i][j];

            }
            averages[i] = totals[i] / 3.0;
            grades[i] = assignGrade(averages[i]);
        }
              //Display 
              cout <<"\n============Result Sheet===========\n";
              cout << "Name\t\tTotal\tAverate\tGrade\n";
              cout << "-------------------------\n";

              int passed = 0, failed = 0;
              int highestIndex = 0;

              for (int i = 0; i < n ; i++){
                cout <<names[i] << "\t\t"<< totals[i] << "\t" << averages[i] << "\t" << grades[i] << "\n";
            if (grades[i] == "Fail") failed++ ;
        else passed++;
    if (totals[i] > totals[highestIndex]) highestIndex = i;
              }
              cout << "\nHighest Scorer: " <<names[highestIndex] << " (" << totals[highestIndex] << "marks)\n";
              cout << "Students Passed : " << passed << "\n";
              cout << "Students Failed : " << failed << "\n";

              return 0 ;

        


    }
