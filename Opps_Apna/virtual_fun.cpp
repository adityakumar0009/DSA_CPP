#include<iostream>
using namespace std;
class Animal{
    public:
    virtual void sound(){
        cout<<"Animal sound";
    }
};
class Dog : public Animal{
    public:
    void sound() override{
        cout<<"Dog Barks";
    }
};
int main(){
    Animal* a;
    Dog d;
    a = &d;
    a->sound();
    return 0;
}

// Without virtual, C++ decides which function to call based on the pointer type, not the actual object type.
// With virtual, it checks the actual object the pointer is pointing to.
// Without virtual: the base function runs, even if the object is from a child class.
// With virtual : the child's version runs, like you expect.