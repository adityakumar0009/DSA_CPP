#include<iostream>
#include<stack> //lifo
using namespace std;
int main(){
    stack<string> s;
    s.push("aditya");
    s.push("kumar");
    s.push("sinha");
    // stack<string> s2;
    // s2.swap(s);
    // while (!s.empty())
    // {
    //     cout<<s.top()<<" ";
    //     s.pop();
    // }
    // cout<<endl;
    cout<<"at top"<<" "<<s.top()<<endl;
    s.pop();
    cout<<"at top"<<" "<<s.top()<<endl;
    cout<<"size"<<" "<<s.size()<<endl;
    cout<<"empty or not"<<" "<<s.empty();
}