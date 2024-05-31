#include<iostream>
using namespace std;
class Human{
    public:
    int age;
    int height;
    int weight;
    public:
    int getAge(){
        return this->age;
    }
    int setWeight(int w){
        this->weight = w;
    }

};
class Male : public Human{
    public:
    string color;
    void sleep(){
        cout<<"he is sleeping "<<endl;
    }
};

int main(){
    Male object1;
    cout<<object1.height<<endl;
    cout<<object1.weight<<endl;
    object1.setWeight(84);
    cout<<object1.weight<<endl;
    cout<<object1.color<<endl;
    object1.sleep();
}