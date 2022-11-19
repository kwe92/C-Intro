// TODO: create header files and implementation files for Student,StudentView, StudentController

#include <iostream>
#include "student_controller.h"

using namespace std;

int main()
{
    Student s1;
    StudentView view;
    StudentController controller(s1, view);

    controller.setStudentName("Kweayon");
    controller.setStudentRollNo("9999");
    controller.updateView();
    controller.setStudentName("Ronin");
    cout << "\n";
    controller.updateView();
    return 0;
}