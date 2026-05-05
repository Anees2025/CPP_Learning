/*Write a program in which the user can input data (integer type) and then a while loop tests to see if the
value(s) is valid. The loop is skipped for all valid input but for invalid input (float type ) the loop is
executed and prompts the user to enter new (valid) input. Input data should be the drink that user want
to drink.
The beverages are:
1 – Coffee
 2 – Tea
 3 – Coke
 4 – Orange juice*/
 #include"iostream"
 using namespace std;
 int main (){
    int choice;
   

    while(choice !=0 ){
         cout <<"1: Tea\n2: Coffee\n3: Coke\n4: Orange juice \n press 0 to exit;"<<endl;
    cin >> choice;
        if (choice >=1 && choice <=4){
            cout << "you choice is "<< choice<< endl;
             }else{
                cout << " you are supposed to enter from 1 to 4 reinter your choice\again enter 0 to exit:";
                cin >> choice;
             }
        
    }
 }