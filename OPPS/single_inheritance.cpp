#include<iostream>
using namespace std;
class Anaimal{
    public:
    int weight;
    int age;

    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog : public Anaimal{

};
int main(){
    Dog d;
    d.speak();
    cout<<d.age<<endl;
}
//single inheritance : when one class inherit the property of another class , when parent class inherit the property of child class
