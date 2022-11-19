#include "student_view.h"
#include <iostream>
using namespace std;
void StudentView::printStudentDetails(string rollNo, string name)
{
    cout << "Student:\n";
    cout << "Roll Number: " << rollNo << endl;
    cout << "Name: " << name << endl;
};