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
        this->weight=w;
    }

};
class Male : public Human{
    void sleep(){
        cout<<"he is sleeping "<<endl;
    }
    int getHeight(){
        return this->height;
    }
};
int main(){
    Male m1;
    cout << "Height: " << m1.height << endl;
}