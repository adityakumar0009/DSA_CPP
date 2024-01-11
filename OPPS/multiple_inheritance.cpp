#include<iostream>
using namespace std;
class Anaimal{
    public:
    int age;
    int weight;
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
class Human{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Hybrid : public Anaimal, public Human{

} ;
int main(){
    Hybrid h1 ;
    h1.bark();
    h1.speak();
}
//multiple inheritance : when one class inherits the property of two or more classes.