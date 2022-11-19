#include <string>
using namespace std;

class Student
{
private:
    string rollNo, name;

public:
    string getRollNo();
    void setRollNo(string rn);
    string getName();
    void setName(string nm);
};