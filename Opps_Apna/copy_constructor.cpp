#include<iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(string name,int age){
        this->name = name;
        this->age = age;
    }
    // Person(){
    //     cout<<"parent constructor\n";
    // }
};
class Student : public Person{
    public:
    int rollno;
    Student(string name,int age,int rollno):Person(name,age){
        // cout<<"child constructor\n";
        this->rollno = rollno;
    }
    void getinfo(){
        cout<<"name "<<name<<endl;
        cout<<"age "<<age<<endl;
        cout<<"rollno "<<rollno<<endl;
    }
};
int main(){
    Student s1("aditya",21,2345);
    Student s2(s1);
    s2.getinfo();//defult copy constructor
    return 0;
}
//use to copy properties of one object into another object