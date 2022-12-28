#include <iostream>
#include "studentController.h"
using namespace std;

StudentController::StudentController(Student student, StudentView vw)
{
    model = student;
    view = vw;
}

void StudentController::setStudentName(string studentName)
{
    model.setName(studentName);
};

string StudentController::getStudentName()
{
    return model.getName();
};

void StudentController::setStudentRollNo(string studentRollNo)
{
    model.setRollNo(studentRollNo);
};

string StudentController::getStudentRollNo()
{
    return model.getRollNo();
};

void StudentController::updateView()
{
    string rn = model.getRollNo();
    string nm = model.getName();
    view.printStudentDetails(rn, nm);
};
