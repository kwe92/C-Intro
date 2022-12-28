#ifndef STUDENTCONTROLLER_H
#define studentcontroller_h

#include <string>
#include "student.h"
#include "studentView.h"
using namespace std;

class StudentController
{

private:
    Student model;
    StudentView view;

public:
    StudentController(Student student, StudentView vw);

    void setStudentName(string studentName);

    string getStudentName();

    void setStudentRollNo(string studentRollNo);

    string getStudentRollNo();

    void updateView();
};
#endif