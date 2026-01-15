#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // properties/attributes
    string name;
    string dept;
    string subject;

    // constructor
    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // methods/member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void getINFO()
    {
        cout << "name : " << name << endl;
        cout << "subject : " << subject << endl;
    }
};

int main()
{
    Teacher t1("Aditya", "AIML", "C++", 2300);
    t1.getINFO(); // fixed here
    return 0;
}
//this is a special keyword in c++ that points to the current object