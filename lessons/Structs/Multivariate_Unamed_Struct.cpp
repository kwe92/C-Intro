// One struct with multiple variables

#include <iostream>
using namespace std;

struct {
    int employeeID;
    string name;
    string jobTitle;
    double salary;
} emp1, emp2;

int main(){
    emp1.employeeID = 1001;
    emp1.name = "Baki Hanma";
    emp1.jobTitle = "World Champion";
    emp1.salary = 685394.73;

    emp2.employeeID = 1002;
    emp2.name = "Ban";
    emp2.jobTitle = "Immortal";
    emp2.salary = 885394.73;

    cout << "Employee ID: " << emp1.employeeID 
        << "\n" << "Name: " << emp1.name 
        << "\n" << "Job Title: " << emp1.jobTitle 
        << "\n" << "Salary: " << emp1.salary 
        << endl; 

    cout << "Employee ID: " << emp2.employeeID 
        << "\n" << "Name: " << emp2.name 
        << "\n" << "Job Title: " << emp2.jobTitle 
        << "\n" << "Salary: " << emp2.salary 
        << endl; 
    return 0;
}