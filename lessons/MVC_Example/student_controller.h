#include <string>
#include "student.h"
#include "student_view.h"
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