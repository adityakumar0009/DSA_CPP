#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    double* cgpaptr;

    Student(string name,double cgpa){
        this->name =name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    };

    Student(Student &obj){
        this->name = obj.name;
        this->cgpaptr = obj.cgpaptr;
    }

    void info(){
        cout<<"name "<<name<<endl;
        cout<<"cgpa "<<*cgpaptr<<endl;
    }
};
int main(){
    Student s1("aditya kumar",9.4);
    Student s2(s1);
    s1.info();
    *(s2.cgpaptr) = 9.2;
    s1.info();
    return 0;
}
// shallow copy of an object copies all the member values from one object to another
// deep copy not only copies all the member values but also make copies of dynamic memory allocation that the member point