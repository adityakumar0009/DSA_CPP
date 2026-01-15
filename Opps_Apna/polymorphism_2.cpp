#include<iostream>
using namespace std;
class Print{
    public:
    void show(int x){
        cout<<"integer is "<<x<<endl;
    }
    void show(char ch){
        cout<<"char is "<<ch<<endl;
    }
};
int main(){
    Print p1;
    p1.show('a');
    return 0;
}

//function overloading

//overloding - Ek class ke andhar do function bana rahe the
//overriding - inheritance when both parent and child contain same function with different implementation