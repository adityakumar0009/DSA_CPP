#include<iostream>
using namespace std;
class A {
    public: 
    void sayHello(){
        cout<<"hello aditya"<<endl;
    }
    public: 
    void sayHello(string name){
        cout<<"hello"<<name<<endl;
    }
};

int main(){
    A b;
    b.sayHello();
    return 0;
}
//polymorphism : existing in multiple forms 
//two types of polymorphism : compile time polymorphism and runtime polymorphism.
//compile time : function overloading , operator overloading.