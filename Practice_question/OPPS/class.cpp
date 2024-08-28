#include<iostream>
using namespace std;
class Adi{
    private:
    int age;
    public:
    int weight;
    void print(){
        cout<<weight<<endl;
    }

    int getAge(){
        return age;
    }

    int getWeight(){
        return weight;
    }

    void setAge(int a){
        age = a;
    }

    void setWeight(int w){
        weight = w;
    }
};
int main(){
    Adi Aditya;
    // Aditya.Age= 21;
    Aditya.weight=31;
    cout<<"age of aditya->"<<Aditya.getAge()<<endl;
    Aditya.setAge(34);
    cout<<"age of aditya->"<<Aditya.getAge()<<endl;
    cout<<"weight of aditya->"<<Aditya.weight<<endl;
    return 0;
}