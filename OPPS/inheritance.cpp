#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;
    public:
    int getAge(){
        return this->age;
    }
    int setWeight(int w){
        this->weight = w;
    }
};

class Male: public Human{
    public:
    string color;
    void sleep(){
        cout<<"male sleeping"<<endl;
    }
};
int main(){
    Male obj;
    cout<<obj.color<<endl;
    cout<<obj.age<<endl;
    cout<<obj.weight<<endl;
    cout<<obj.height<<endl;
    obj.setWeight(84);
    cout<<obj.weight<<endl;
    obj.sleep();

return 0;
}
//inheritance : when one class inherit the property of another class.
//for eg : class human whose property is height, age , weight . we make two class male and female where it inherit the propert of human class
//access modifier : public, private, protected, default.