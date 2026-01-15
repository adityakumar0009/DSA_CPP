#include<iostream>
using namespace std;
class Person{
    public:
    string name;
};
class Student : public Person{
    public:
    string roll_no;
};
class Teacher : public Person{
    public:
    double salary;
};
int main(){
    Teacher t1;
    t1.name="aditya";
    t1.salary = 280987;
    cout<<t1.name<<endl;
    cout<<t1.salary<<endl;
    return 0;
}