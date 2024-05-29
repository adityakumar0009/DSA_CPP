#include <iostream>
using namespace std;
class Hero{
    private:
    int health;
    public:
    char level;
    void print(){
        cout<<level<<endl;
    }
    int getHealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void setHealth(int h){
        health = h;
    }
    void setlevel(char ch){
        level = ch;
    }
};

int main(){
    Hero Aditya;
    cout<<"aditya health->"<<Aditya.getHealth()<<endl;
    Aditya.setHealth(70);
    Aditya.level = 'A';
    
    cout<<"aditya health->"<<Aditya.getHealth()<<endl;
}