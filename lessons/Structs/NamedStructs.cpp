// Named Structs
//  - Named structs can be used as datatypes
//  - Just as public classes can be used as datatypes
//  - Prefix the struct body with a name
//  - You then dont need to suffix the struct body with variable tags

#include <iostream>
using namespace std;

struct employeeDataType{
    int employeeID;
    string name;
    string jobTitle;
    double salary;
};

// Create a function to display the struct employeeDataType
void displayStruct(struct employeeDataType e){
    cout << "Employee ID: " << e.employeeID 
        << "\n" << "Name: " << e.name 
        << "\n" << "Job Title: " << e.jobTitle 
        << "\n" << "Salary: " << e.salary 
        << endl; 

}

int main(){
    // Declaring variables emp1 && emp2 as employeeDataType struct
    // - To declare a variable that uses the structure
    //   use the prefix name of the structure as the data type of the variable
    employeeDataType emp1, emp2;
    emp1.employeeID = 1001;
    emp1.name = "Baki Hanma";
    emp1.jobTitle = "World Champion";
    emp1.salary = 685394.73;

    emp2.employeeID = 1002;
    emp2.name = "Ban";
    emp2.jobTitle = "Immortal";
    emp2.salary = 885394.73;

    displayStruct(emp1);
    displayStruct(emp2);
    return 0;
}