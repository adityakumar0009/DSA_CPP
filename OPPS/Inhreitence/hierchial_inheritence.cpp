#include<iostream>
using namespace std;
class Grandfather{
    public:
    void property(){
        cout<<"he has around 5 acres of land "<<endl;
    }
};
class Father : public Grandfather{
    void F_property(){
        cout<<"father also bought around 2 acres of land"<<endl;
    }
    
};
class Son : public Grandfather{
    void S_property(){
        cout<<"son also brought around 1 acres of land"<<endl;
    }
};
int main(){
    Son s;
    s.property();
}

