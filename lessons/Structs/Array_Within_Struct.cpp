#include <iostream>
using namespace std;

// Structures can also hold arrays as member variables

struct programmerDataType{
    int employeeID;
    string name;
    string jobTitle;
    double salary;
    string progLang[4];
};

int main(){
    // syntax: struct name_of_strucr variable_name
    struct programmerDataType prog1 = {1001, "Baki Hanma", "Senior Software Developer",345864.35,
    {"C++","Python","Dart","SQL"}};
    return 0;
}

