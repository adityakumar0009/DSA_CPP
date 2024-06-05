#include<iostream>
#include<stack>
using namespace std;
int main(){
    //creation of stack
    stack<int> s;
    //stack operation
    s.push(2);
    s.push(3);
    s.pop();
    cout<<"printing top element "<<s.top()<<endl;
    if(s.empty()){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<"stock is not empty"<<endl;
    }
}