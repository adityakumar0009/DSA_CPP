#include<iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;

    private:
    int age;

    public:
    int getAge(){
        return this->age;
    }
    int setWeight(int w){
        this->weight = w;
    }
};

class Male: private Human{
    public:
    string color;
    void sleep(){
        cout<<"male sleeping"<<endl;
    }
    int getHeight(){
        return this->height;
    }
};
int main(){
    Male m1;
    cout<<m1.getHeight()<<endl;
    /*Male obj;
    cout<<obj.color<<endl;
    cout<<obj.age<<endl;
    cout<<obj.weight<<endl;
    cout<<obj.height<<endl;
    obj.setWeight(84);
    cout<<obj.weight<<endl;
    obj.sleep();*/

return 0;
}
//protected : similar private but condition child class / derived class can access , it is accessible inside its own class