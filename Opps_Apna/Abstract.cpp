//abstract class is used to provide a base class from which other class can be derived
//unke object nahi ban sakte
//abstract class is typically used to define an interface for derived class
#include<iostream>
#include<string>
using namespace std;
class Shape{//abstract class
    virtual void draw() = 0;//pure virtual function
};

class Circle : public Shape{
    public:
    void draw(){
        cout<<"Drawing a circle "<<endl;
    }
};
int main(){
    Circle c1;
    c1.draw();
    return 0;
}