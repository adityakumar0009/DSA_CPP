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
    Adi(){
        cout<<"constructor called"<<endl;
    }
    // parameterized constructor
    Adi(int age){
        cout<<"this->"<<this<<endl;
        this->age = age;
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

    // statically
    Adi Aditya;
    cout<<"address of aditya is->"<<&Aditya<<endl;
    Aditya.getAge();
    // dynamically
    Adi* h = new Adi();
    // // Aditya.Age= 21;
    // Aditya.weight=31;
    // cout<<"age of aditya->"<<Aditya.getAge()<<endl;
    // Aditya.setAge(34);
    // cout<<"age of aditya->"<<Aditya.getAge()<<endl;
    // cout<<"weight of aditya->"<<Aditya.weight<<endl;
    // return 0;
}