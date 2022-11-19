#include <iostream>        // write to console and read keyboard input
#include <fstream>         // read and write to files
#include <string>          // string data type
#include "UserOptions.cpp" // custom module
// TODO: Create a header and implementation files for UserOptions

/*
 Create a simple user log in
    - The if user registers
    - Create a new user
    - if the user wants to login, pronpt them to log in
    - if the input password does not match the save password them write wrong username or password
    - User Actions:
        - register
        - login


*/
using namespace std;

int main()
{
    int choice;
    cout << "1: Register\n2: Loggin\nYour choice: ";
    cin >> choice;
    if (choice == 1)
    {
        UserOption::reg();
        main(); // recursively call main function
    }
    else if (choice == 2)
    {
        bool status = UserOption::isLoggedIn();
        if (status)
        {
            cout << "incorrect username or password." << endl;
            return 1;
        }
        else
        {
            cout << "successful login!" << endl;
            return 0;
        }
    }
}
