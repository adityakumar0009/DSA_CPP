#include<iostream>
using namespace std;
class Grandfather{
    public:
    int height;
    int weight;
    public:
    void color(){
        cout<<"he is fair in color"<<endl;
    }
};
class Father{
    public:
    void Height(){
        cout<<"his height is around 6 feet"<<endl;
    }
};
class Son : public Grandfather,public Father{

};
int main(){
    Son s;
    s.color();
    s.Height();
}
