#include<iostream>
using namespace std;
class student{
    private:
    string name;
    public:
    int age;
    bool gender;
    void setName(string s){
        name = s;
    }
    void getName(){
        cout<<name<<endl;
    }
    void printInfo(){
        cout<<"name = "<<" ";
        cout<<name<<endl;
        cout<<"Age = "<<" ";
        cout<<age<<endl;
        cout<<"gender = "<<" ";
        cout<<gender<<endl;
    }
};
int main(){
    // student a;
    // a.name = 'aditya';
    // a.age = 20;
    // a.gender = 0;
    student arr[3];
    for(int i=0; i<3; i++){
        string s;
        cout<<"Name = "<<" ";
        cin >> s;
        arr[i].setName(s);
        cout<<"Age = "<<" ";
        cin>>arr[i].age;
        cout<<"gender = "<<" ";
        cin>>arr[i].gender;
    }
    for(int i=0; i<3; i++){
        arr[i].printInfo();
    }
    return 0;
}