#include<iostream>
using namespace std;
class A{
    public:
    void sayHello(){
        cout<<"hello love babbar"<<endl;
    }
    int sayHello(string name,int n){
        cout<<"hello"<<name<<endl;
        return n;
    }
    void sayHello(string name){
        cout<<"hello"<<name<<endl;
    }
};

int main(){
    A obj;
    obj.sayHello();

}