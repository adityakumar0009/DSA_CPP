#include<iostream>
using namespace std;
class Husband{
    public:
    void height(){
        cout<<"he is tall in height"<<endl;
    }
};
class Wife1{
    public:
    void color(){
        cout<<"she is fair in color"<<endl;
    }
};
class Wife2:public Husband{
    public:
    void cute(){
        cout<<"she is overloaded with cuteness"<<endl;
    }
};
class Son:public Wife2{
    
};


int main(){
    Son s;
    s.cute();
    s.height();
}