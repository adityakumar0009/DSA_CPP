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
    // Student s1;
    // s1.name = "Aditya";
    // s1.age = 20;
    // s1.rollno = 12;
    s1.getinfo();
    return 0;
}
//when properties of base class is derived into parent class
//code reusability
//constructor of base class is called before calling constructor of derived class
//destructor - derived class is called before calling to base class