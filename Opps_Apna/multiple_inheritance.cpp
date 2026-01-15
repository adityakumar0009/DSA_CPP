#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
};
class Teacher{
    public:
    string subject;
    double salary;
};
class TA : public Student,Teacher{
    public:
    string researchArea;
};
int main(){
    TA t1;
    t1.name = "aditya";
    t1.researchArea = "QuantumPhysics";
    cout<<t1.name<<endl;
    cout<<t1.researchArea<<endl;
}
