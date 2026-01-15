#include<iostream>
using namespace std;
class Parent{
    public:
    void getInfo(){
        cout<<"This is a parrent class/n";
    }
    virtual void hello(){
        cout<<"hello from parent\n";
    }
};
class child : public Parent{
    public:
    void getInfo(){
        cout<<"This is a child class/n";
    }
    void hello(){
        cout<<"hello from child\n";
    }
};
int main(){
    child c1;
    c1.hello();
    return 0;
}
//vitual class - member function that you expect to be redifined in derived class;
//virtual function is dynamic in nature
//virtual function is called during runntime
//virtual keyword is always declared with base class and overrriden in child class
//Without virtual, C++ decides which function to call based on the pointer type, not the actual object type.
//With virtual, it checks the actual object the pointer is pointing to.