#include "student.h"

using namespace std;

void Student::setName(string nm)
{
    this->name = nm;
};

string Student::getName()
{
    return this->name;
}

void Student::setRollNo(string rn)
{
    this->rollNo = rn;
}

string Student::getRollNo()
{
    return this->rollNo;
}
