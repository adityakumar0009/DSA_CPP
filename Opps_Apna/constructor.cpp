#include <iostream>
#include <string>
using namespace std;
class Teacher
{
private:
    double salary;

public:
//non parameterized constructor
    // Teacher(){
    //     // cout<<"HII, I am constructor"<<endl;
    //     dept = "AIML";
    // };
    //parameterized constructor
    Teacher(string n,string d,string s,double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    };
    // properties/attributes
    string name;
    string dept;
    string subject;
    // methods/member function
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // setter
    void setSalary(double s)
    {
        salary = s;
    }

    // getter
    double getSalary()
    {
        return salary;
    }
};
int main()
{
    Teacher t1("Aditya","Aiml","C++",2500);//construrtor called
    // t1.name = "aditya";
    // t1.subject = "c++";
    // t1.setSalary(2500);
    // cout << "name of the teacher is " << t1.name<<endl;
    // cout << "salary is " << t1.getSalary() << endl;
    // cout<<"department is "<<t1.dept;
    cout<<"department is "<<t1.dept;
    return 0;
}

//constructor automaticlly involked at the time of object creation used for initialization
//don't have any return type
//same as the name of class
//called only once when object is created
//memory allocation happens when constructor is called