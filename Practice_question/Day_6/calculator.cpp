#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the first number->";
    cin>>a;
    int b;
    cout<<"enter the second number->";
    cin>>b;
    char ch;
    cout<<"enter the operation->";
    cin>>ch;
    switch(ch){
        case '+': cout<<(a+b)<<endl;
        break;
        case '-': cout<<(a-b)<<endl;
        break;
        case '*': cout<<(a*b)<<endl;
        break;
        case '/': cout<<(a/b)<<endl;
        break;
        default:cout<<"wrong value"<<endl;
    }
}