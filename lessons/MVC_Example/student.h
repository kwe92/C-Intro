#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student
{
private:
    string rollNo, name;

public:
    Student();
    string getRollNo();
    void setRollNo(string rn);
    string getName();
    void setName(string nm);
};
#endif