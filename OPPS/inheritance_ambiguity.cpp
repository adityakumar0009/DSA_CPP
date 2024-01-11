#include<iostream>
using namespace std;
class A{
    public:
    void sleep(){
        cout<<"living thing sleep"<<endl;
    }
};

class B{
    public:
    void sleep(){
        cout<<"living things doesn't sleep"<<endl;
    }
};

class C:public A, public B{
    public:
};

int main(){
    C obj;
    obj.A::sleep();

    obj.B::sleep();

    return 0;
}
//inheritance ambiguity : scope resolution operator,obj.A :: fun();