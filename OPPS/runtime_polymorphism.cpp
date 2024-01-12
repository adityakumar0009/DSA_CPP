#include<iostream>
using namespace std;
class Anaimal{
    public:
    int age;
    int weight;
    public:
    void speek(){
        cout<<"speaking"<<endl;
    }
};
class Dog : public Anaimal{
    public:
    void speek(){
        cout<<"barking"<<endl;

    }

};

int main(){
    Dog d;
    d.speek();
}
//run time polymorphism : it is also callled dynamic polymorphism.
//method overrriding in run time polymorphism.
//rules : method of parent class and child class should be same.
//rules : same parameter;
//rules ; it is possible only in inheritance.