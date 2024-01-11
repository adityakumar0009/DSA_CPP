#include<iostream>
using namespace std;
class A{
    public:
    int weight;
    int age;

    public:
    void play(){
        cout<<"playing"<<endl;
    }
};
class B : public  A{

};

class C : public A{

};

class D : public C{

};

int main(){

    D d;
    d.play();
    return 0;
}
//hybrid inheritance : combination of more than one type of inheritance
//for eg : we use single as well as hierchial inheritance
