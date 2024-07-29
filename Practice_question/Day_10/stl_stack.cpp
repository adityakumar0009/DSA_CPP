#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> a;
    a.push(3);
    a.push(2);
    a.push(1);
    cout<<"top element->"<<a.top()<<endl;
    a.pop();
    cout<<"top element->"<<a.top()<<endl;
    a.pop();
    cout<<"top element->"<<a.top()<<endl;
    cout<<"size of stack->"<<a.size()<<endl;
    cout<<"stack is empty or not->"<<a.empty()<<endl;
    return 0;
}