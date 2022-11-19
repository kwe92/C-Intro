#include <iostream>
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

class User
{
private:
    string username, password;
    User(string un, string pw)
    {
        username = un;
        password = pw;
    }

public:
    string getUserName()
    {
        return username;
    }

    string setUserName(string un)
    {
        username = un;
    }

    string getPassword()
    {
        return username;
    }

    string setPassword(string un)
    {
        username = un;
    }

    // static void reg()
    // {
    //     string username, password;
    //     cout << "Select a username: ";
    //     cin >> username;
    //     cout << "Select password: ";
    //     cin >> password;

    //     ofstream file;
    //     file.open("/Users/kwe/C-Language/exercises/UserLogin/data/" + username + ".txt");
    //     file << username << endl
    //          << password;
    //     file.close();
    // }
};