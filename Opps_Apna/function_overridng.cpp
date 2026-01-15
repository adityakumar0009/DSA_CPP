#include<iostream>
using namespace std;
class Parent{
    public:
    void getInfo(){
        cout<<"This is a parrent class/n";
    }
};
class child : public Parent{
    public:
    void getInfo(){
        cout<<"This is a child class/n";
    }
};

int main(){
    child c1;
    c1.getInfo();
    return 0;
}
// overriding - inheritance when both parent and child contain same function with different implementation child surpasses parent