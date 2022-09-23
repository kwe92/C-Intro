#include <iostream>
#include <fstream>
#include <string>

using namespace std;

    class UserOption{
    public:
    
    static bool isLoggedIn(){
    string username, password,compare_un, compare_pw;
    cout << "enter username: "; cin >> username;
    cout << "Enter password: "; cin >> password;

    ifstream read("/Users/kwe/C-Language/exercises/UserLogin/data/" + username + ".txt");// ifstream is a data type that reads a file
    getline(read, compare_un);// Kinda like read line
    getline(read, compare_pw);
    if(compare_un == username && compare_pw == password){
        return true;
    }
    else
    {
        return false;
    }
    }

    static  void reg(){
        string username, password;
        cout << "Select a username: "; cin >> username;
        cout << "Select password: "; cin >> password;

        ofstream file;
        file.open("/Users/kwe/C-Language/exercises/UserLogin/data/" + username + ".txt");
        file << username << endl << password;
        file.close();
    }
};