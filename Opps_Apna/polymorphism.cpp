#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    Student(){
        cout<<"non-parameteried constructor\n";
    }
    Student(string name){//construtor overloading
        this->name = name;
        cout << "parameteried constructor\n";
    }
};
int main(){
    // Student s1;
    Student s1("aditya");
    return 0;
}
// polymorphism is the ability of objects to take on different forms or behave in different ways depending on the context in which they are used
// compile time polymorphism-construtor overloading,function overloading
// run time polymorphism-function overriding
//overloading me ek class ke andhar do function bana rahe the
//overriding me inheritance normally parent and child class ka same function hota hai but different implementation