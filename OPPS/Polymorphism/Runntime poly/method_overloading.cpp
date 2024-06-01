#include<iostream>
using namespace std;
class Animal{
    public:
    void speek(){
        cout<<"animal is speaking"<<endl;
    }
};
class Dog : public Animal{
    public:
    void speek(){
        cout<<"dog is barking"<<endl;
    }
};



int main(){
    Dog obj;
    obj.speek();
}