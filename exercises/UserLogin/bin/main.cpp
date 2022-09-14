#include <iostream>
#include <fstream>
#include <string>
#include "../lib/UserOptions.cpp"

using namespace std;

    int main(){
        int choice;
        cout << "1: Register\n2: Loggin\nYour choice: "; cin >> choice;
        if(choice == 1){
            UserOption::reg();
            main(); // recursively call main function
        }
       else if(choice == 2){
            bool status = UserOption::isLoggedIn();
            if(!status){
                cout << "incorrect username or password." << endl;
                return 1;
            }
            else{
                cout << "successful login!" << endl;
                return 0;
            }
        }

    }

