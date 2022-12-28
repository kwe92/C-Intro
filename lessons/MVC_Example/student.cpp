#include "student.h"
#include <string>
using namespace std;

// Student::Student(string rn, string nm)
// {
//     rollNo = rn;
//     name = nm;
// }

void Student::setName(string nm)
{
    name = nm;
}

string Student::getName()
{
    return name;
}

void Student::setRollNo(string rn)
{
    rollNo = rn;
}

string Student::getRollNo()
{
    return rollNo;
}
