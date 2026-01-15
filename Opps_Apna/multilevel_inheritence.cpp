#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
class Student : public Person{
    public:
    int rollno;
};
class GradStudent : public Student{
    public:
    string researchArea;
};
int main(){
    GradStudent s1;
    s1.name = "aditya";
    s1.rollno = 24;
    s1.age = 35;
    s1.researchArea = "QuantumPhysics";
    cout<<s1.name<<endl;
    cout<<s1.rollno<<endl;
    cout<<s1.age<<endl;
    cout<<s1.researchArea<<endl;
}
