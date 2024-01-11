#include<iostream>
using namespace std;
class Anaimal{
    public:
    int age;
    int weight;
    
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }

};

class Dog : public Anaimal{

};

class Puppy : public Dog{

};


int main(){
    Puppy p1;
    p1.speak();
}
//multilevel : inheritance in multiple level 
//for eg class c inherits the property of B and B inherits the property of A