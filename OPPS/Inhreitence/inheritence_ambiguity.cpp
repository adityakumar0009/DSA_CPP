#include<iostream>
using namespace std;
class A{
    public:

    void fun(){
        cout<<"class A"<<endl;
    }
};
class B{
    public:
    void fun(){
        cout<<"class B"<<endl;
    }
};
class C : public A, public B{

};
int main(){
    C obj;
    obj.A::fun();
    obj.B::fun();
}