#include<iostream>
using namespace std;
int main(){
    string m = "hello world";
    string n = "world";
    if(m.find(n)!=string::npos){
        cout<<"Substring is found";
    }
    else{
        cout<<"substring not found";
    }
    return 0;
}