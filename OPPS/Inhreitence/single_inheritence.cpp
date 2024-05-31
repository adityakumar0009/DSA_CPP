#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int height;
    public:
    void speek(){
        cout<<"animals always speek"<<endl;
    }
};
class Dog : public Animal{

};
int main(){
    Dog d1;
    d1.speek();
}