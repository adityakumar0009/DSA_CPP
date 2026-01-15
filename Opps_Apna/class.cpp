#include<iostream>
#include<string>
using namespace std;
class Teacher{
    private:
        double salary;
    public:
    //properties/attributes
    string name;
    string dept;
    string subject;
    //methods/member function
    void changeDept(string newDept){
        dept = newDept;
    }

    //setter - used to set value
    void setSalary(double s){
        salary = s;
    }

    //getter - used to get value of private member
    double getSalary(){
        return salary;
    }
};
class Account{
    private:
    double balance;
    string password;//data hiding

    public:
    string accountId;
    string username;
};
int main(){
    Teacher t1;
    t1.name = "aditya";
    t1.subject = "c++";
    t1.dept = "Aiml";
    t1.setSalary(2500);
    cout<<"name of the teacher is "<<t1.name;
    cout<<"salary is "<<t1.getSalary()<<endl;
    return 0;
}