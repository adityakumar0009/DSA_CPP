#include<iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    int color;

    public:
    void Eat(){
        cout<<"animal eat"<<endl;
    }
};

class cat : public Animal {

};

class dog : public Animal{

};


int main(){

    cat c1;
    c1.Eat();

    dog d1;
    d1.Eat();
    
    return 0;
}
//Hierarcial inheritance : one class serve as parent class for more than one class.